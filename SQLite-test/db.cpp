#include "db.h"

DatabaseManager::DatabaseManager(QObject *parent)
{
}

DatabaseManager::~DatabaseManager()
{

}

bool DatabaseManager::createDB()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");

//    #ifdef Q_OS_LINUX
    // NOTE: We have to store database file into user home folder in Linux
    // try to store the database in the qt folder
//    QString path(QDir::home().path());
//    path.append(QDir::separator()).append("my.db.sqlite");
//    path = QDir::toNativeSeparators(path);
//    db.setDatabaseName(path);
    QDir * dir = new QDir(QDir::current());
    dir->cd("..");
    dir->cd("BDD");
    QString* dirBDD = new QString(dir->absolutePath());
    dirBDD->append(QDir::separator()).append("my.db.sqlite");
    db.setDatabaseName(*dirBDD);
    db.setConnectOptions("foreign_keys = ON");


//    #else
//    // NOTE: File exists in the application private folder, in Symbian Qt implementation
//    db.setDatabaseName("my.db.sqlite");
//    #endif
    //*/
    // Open databasee
    return db.open();
}


bool DatabaseManager::openDB()
{
    // Find QSLite driver
    db = QSqlDatabase::addDatabase("QSQLITE");

//    #ifdef Q_OS_LINUX
//    // NOTE: We have to store database file into user home folder in Linux
//    QString path(QDir::home().path());
//    path.append(QDir::separator()).append("my.db.sqlite");
//    path = QDir::toNativeSeparators(path);
//    db.setDatabaseName(path);
//    #else
    // NOTE: File exists in the application private folder, in Symbian Qt implementation
//    db.setDatabaseName("my.db.sqlite");
    QDir * dir = new QDir(QDir::current());
//    dir->cd("..");
    dir->cd("BDD/");
    QString* dirBDD = new QString(dir->absolutePath());
    dirBDD->append(QDir::separator()).append("my.db.sqlite");
//    dirBDD->append("my.db.sqlite");
//    dirBDD->append(QDir::separator()).append("my.db.sqlite");
    db.setDatabaseName(*dirBDD);
    db.setConnectOptions("foreign_keys = ON");
//    #endif

//*/
    // Open databasee
    return db.open();
}

QSqlError DatabaseManager::lastError()
{
    // If opening database has failed user can ask
    // error description by QSqlError::text()
    return db.lastError();
}

bool DatabaseManager::deleteDB()
{
    // Close database
    db.close();

//    #ifdef Q_OS_LINUX
//    // NOTE: We have to store database file into user home folder in Linux
//    QString path(QDir::home().path());
//    path.append(QDir::separator()).append("my.db.sqlite");
//    path = QDir::toNativeSeparators(path);
//    return QFile::remove(path);
//    #else

    // Remove created database binary file
//    return QFile::remove("my.db.sqlite");
    QDir * dir = new QDir(QDir::current());
    dir->cd("..");
    dir->cd("BDD/");
    QString* dirBDD = new QString(dir->absolutePath());
    dirBDD->append("my.db.sqlite");

    return QFile::remove(*dirBDD);

//    #endif
}

bool DatabaseManager::createImageTable()
{
    // create Image table
    bool ret = false;
    bool ret2 = false;

    if (db.isOpen())// vérifier d'abord que la base de données à bien été ouverte
    {
        QSqlQuery query1;

        ret = query1.exec(QString("create table IF NOT EXISTS Player (ID INTEGER PRIMARY KEY AUTOINCREMENT, NOM VARCHAR(1024),"
                                  "PRENOM VARCHAR(1024), DATE_NAISSANCE DATE, ANNEE_ARRIVEE INTEGER, POSTE CHARACTER(1),"
                                  "NB_MATCHS INTEGER, NB_BUTS INTEGER, JOUEUR_NUMERO INTEGER)"));


        QSqlQuery query2;// création d'une requête
        // pour le moment on ajoute uniquement l'url de la photo à la base de donnée (pas la photo directement vu que les données sont en local)
        // amélioration possible -> ajouter la photo ainsi que la date à laquelle elle a été prise



        // ATTENTION -> SPécifier IF not exists pour ne pas avoir d'erreur si la table a déjà été créée
        ret2 = query2.exec(QString("create table IF NOT EXISTS Image (ID INTEGER PRIMARY KEY AUTOINCREMENT, URL VARCHAR(1024),"
                                   "YEAR INTEGER,JOUEUR_NOM VARCHAR (1024),"
                                   "FOREIGN KEY(JOUEUR_NOM) REFERENCES Player(NOM),UNIQUE(URL,JOUEUR_NOM))"));

    }
    return (ret2&&ret);
}


int DatabaseManager::insertImage(QString* url_photo, int date, QString *player_name, int player_number)
{
    int newId = -1;
    bool ret = false;

    std::cout << "url à ajouter " << url_photo->toStdString() << std::endl;

    if (db.open())
    {
        // Check si le joueur existe

        QSqlQuery query_joueur ;
        query_joueur.prepare("SELECT count(*) FROM player where nom = :player_name");
        query_joueur.bindValue(":player_name",*player_name);

        bool ret1 = query_joueur.exec();
        query_joueur.record();
        query_joueur.next();

        bool exist = query_joueur.value(0).toInt();
//        std::cout << query_joueur.value(0).toInt() << " joueurs correspondentà votre recherche dans la base de donnée" << std::endl;

        if (ret1 && !exist)
        {
            std::cout << "ce joueur n'existe pas dans la bdd" << std::endl;
            // ajouter le joueur dans la bdd player

            QSqlQuery query_addPlayer;
            query_addPlayer.prepare("INSERT into player(NOM,JOUEUR_NUMERO) values(:player_name,:player_number)");
            query_addPlayer.bindValue(":player_name",*player_name);

            // check if player number was entered
            if (player_number == -1)
                query_addPlayer.bindValue(":player_number",QVariant(QVariant::Int));
            else
                query_addPlayer.bindValue(":player_number",player_number);

            exist = query_addPlayer.exec();
        }


        if (exist)
        {
            std::cout << "le joueur " << player_name->toStdString() << " existe bien dans la table player " << std::endl;

            // Sqlite uses the autoincrement password to increment the ID field
            QSqlQuery query;
    //        ret = query.exec (QString("INSERT into Image(url,year,joueur_nom, joueur_numero) values ('%1',%2,'%3',%4')").arg(*url_photo).arg(date).arg(*player_name).arg(player_number));
            query.prepare("INSERT into Image(url,year,joueur_nom) values (:url,:year,:player_name)");


            // bind_values
            query.bindValue(":url",*url_photo);

            // check if year is entred
            if (date == -1)
                query.bindValue(":year",QVariant(QVariant::Int));
            else
                query.bindValue(":year",date);

            // player_name has to be entered to set the insert button enable

    //        //check if player name was entered
    //        if (player_name->size()==0)
    //            query.bindValue(":player_name",QVariant(QVariant::String));
    //        else
                query.bindValue(":player_name",*player_name);



            // exec the query

            ret = query.exec();
            if (ret)
            {
                newId = query.lastInsertId().toInt();
                std::cout << "insertion réussie , id = " << newId << std::endl;
            }
            else
                qDebug() << lastError();
        }
    }
    return newId;
}


QStringList* DatabaseManager::selectImage(int year,QString* player_name, int player_number)
{
    std::cout << "recherche avec année =  " << year << " nom du joueur " << player_name->toStdString() << " numero " << player_number << std::endl;
    QStringList* url_list = new QStringList();
    bool ret = false;
    if (db.open())
    {
        QSqlQuery query;

        QString *string_query = new QString("Select url From Image WHERE joueur_nom = :player_name");

//        query.prepare("SELECT url FROM image WHERE year = :year AND joueur_nom = :player_name AND joueur_numero= :player_number");





        // check if year is given
        if (year != -1)
            string_query->push_back(" AND year = :year");


        // check if player_number is given
        if (player_number != -1)
            string_query->push_back(" AND joueur_numero = :player_number");


        query.prepare(*string_query);

        //binding values

        // player_name is always given
        query.bindValue(":player_name",*player_name);
        if (year!=-1)
            query.bindValue(":year",year);
        if (player_number != -1)
            query.bindValue(":player_number",player_number);
        ret=query.exec();

        if (ret)
        {
            query.record();

//            int url = rec.indexOf("url");
            while (query.next())
            {
                url_list->push_back( query.value(0).toString());
                std::cout << "url : " <<  query.value(0).toString().toStdString() << std::endl;
            }
        }

    }

    // afficher les résultats dans la Frame contenant les images ou bien un message comme quoi aucunes images ne correspond
    return url_list;
}


bool DatabaseManager::suppressImages()
{
    bool ret = false;
    if (db.open())
    {
        QSqlQuery query;
        query.prepare("DELETE FROM Image where id NOT NULL");
        ret = query.exec();

        if (ret)
        {
            std::cout << "images supprimées" << std::endl;
        }
    }

    return ret;
}

QStringList* DatabaseManager::selectPlayerByUrl(QString *url)
{
    QStringList* player_list = new QStringList();
    bool ret = false;
    std::cout << "url (select players): " << url->toStdString() << std::endl;
    if(db.open())
    {
        QSqlQuery query;
        query.prepare("Select distinct p.nom from Player p, Image i where i.joueur_nom = p.nom and i.url like :url ");
        query.bindValue(":url",*url);
        ret = query.exec();
        if (ret)
        {
            //gestion de la liste
            QSqlRecord rec = query.record();

            int player = rec.indexOf("nom");
            while (query.next())
            {
                player_list->push_back( query.value(player).toString());
                std::cout << "joueur : " <<  query.value(player).toString().toStdString() << std::endl;
            }
        }
    }
    return player_list;
}


//dans la fenêtre d'information sur un joueur, cette requête permettra de récupérer toutes les informations sur le joueur selectionné
std::map<QString,QVariant>* DatabaseManager::selectPlayerByName(const QString& name)
{
    std::cout << "Select info from player : " << name.toStdString() << std::endl;

    if (db.open())
    {
        QSqlQuery query;
        query.prepare("Select * from player where nom like :name");
        query.bindValue (":name",name);
        if (query.exec())
        {
            QSqlRecord rec = query.record();


            // l'identifiant du joueur sera surtout utile s'il y une modification du nom
            int id = rec.indexOf("id");

            int nom = rec.indexOf("nom");
            int prenom = rec.indexOf("prenom");
            int numero = rec.indexOf("joueur_numero");
            int date_naissance = rec.indexOf("date_naissance");
            int annee_arrivee = rec.indexOf("annee_arrivee");
            int poste = rec.indexOf("poste");
            int nb_matchs = rec.indexOf("nb_matchs");
            int nb_buts = rec.indexOf("nb_buts");
            std::map <QString, QVariant> *player_map = new std::map<QString,QVariant>();
            while (query.next()) // un seul next devrait suffir parce que les noms sont distincts
            {
                player_map->insert(std::pair<QString,QVariant>("id",query.value(id)));
                player_map->insert(std::pair<QString,QVariant>("nom",query.value(nom)));
                player_map->insert(std::pair<QString,QVariant>("prenom",query.value(prenom)));
                player_map->insert(std::pair<QString,QVariant>("joueur_numero",query.value(numero)));
                player_map->insert(std::pair<QString,QVariant>("date_naissance",query.value(date_naissance)));
                player_map->insert(std::pair<QString,QVariant>("annee_arrivee",query.value(annee_arrivee)));
                player_map->insert(std::pair<QString,QVariant>("poste",query.value(poste)));
                player_map->insert(std::pair<QString,QVariant>("nb_matchs",query.value(nb_matchs)));
                player_map->insert(std::pair<QString,QVariant>("nb_buts",query.value(nb_buts)));
            }
            return player_map;
        }

    }
    // en cas d'erreurs
    return NULL;
}

// mise à jour des informations sur un joueur
bool DatabaseManager::updatePlayer(std::map<QString,QVariant>* player_info)
{
//    // vérification du contenu de la map
//    if (player_info->find("joueur_numero") == player_info->end())
//    {
//        std::cout << "le nom n'a pas été défini" << std::endl;
//    }


    if (db.open())
    {
        QSqlQuery query;
        query.prepare("update Player set ... where id = :id");

        // lier l'identifiant
        query.bindValue(":id",player_info->at("id").toString());

        if (query.exec())
        {
            return true;
        }
    }
    return false;
}


