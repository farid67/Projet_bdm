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

bool DatabaseManager::createPlayerTable()
{
    // create Image table
    bool ret = false;

    if (db.isOpen())// vérifier d'abord que la base de données à bien été ouverte
    {
        QSqlQuery query1;

        ret = query1.exec(QString("create table IF NOT EXISTS Player (ID INTEGER PRIMARY KEY AUTOINCREMENT, NOM VARCHAR(1024),"
                                  "PRENOM VARCHAR(1024), DATE_NAISSANCE DATE, ANNEE_ARRIVEE INTEGER, POSTE CHARACTER(1),"
                                  "NB_MATCHS INTEGER, NB_BUTS INTEGER, JOUEUR_NUMERO INTEGER)"));


    }
    return (ret);
}

bool DatabaseManager::createImageTable()
{
    // create Image table
    bool ret = false;

    if (db.isOpen())// vérifier d'abord que la base de données à bien été ouverte
    {

        QSqlQuery query;// création d'une requête
        // pour le moment on ajoute uniquement l'url de la photo à la base de donnée (pas la photo directement vu que les données sont en local)
        // amélioration possible -> ajouter la photo ainsi que la date à laquelle elle a été prise



        // ATTENTION -> SPécifier IF not exists pour ne pas avoir d'erreur si la table a déjà été créée
        ret = query.exec(QString("create table IF NOT EXISTS Image (ID INTEGER PRIMARY KEY AUTOINCREMENT, URL VARCHAR(1024),"
                                   "YEAR INTEGER,JOUEUR_ID INTEGER,"
                                   "FOREIGN KEY(JOUEUR_ID) REFERENCES Player(ID),UNIQUE(URL,JOUEUR_ID))"));

    }
    return (ret);
}



int DatabaseManager::insertImage(QString* url_photo, int date, QString *player_name, int player_number)
{
    int newId = -1;
    bool ret = false;

    std::cout << "url à ajouter " << url_photo->toStdString() << std::endl;

    if (db.open())
    {
        // Check si le nom est passé en argument

        if (player_number != NULL)
        {
            // ON commence par tester si le joueur est bien présent dans la base de donnée

            QSqlQuery query_joueur ;
            query_joueur.prepare("SELECT count(*),id FROM player where nom = :player_name");
            query_joueur.bindValue(":player_name",*player_name);

            bool ret1 = query_joueur.exec();
            query_joueur.record();
            query_joueur.next();

            bool exist = query_joueur.value(0).toInt();
            int Id_player;
            if (exist)
            {
                // on récupère directement l'identifiant du joeur en question
                Id_player = query_joueur.value(1).toInt();
            }

            // si la requête fonctionne mais qu'il n'y a aucun joueur dans la table dont le nom est celui qui est passé en argument
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
                Id_player = query_addPlayer.lastInsertId().toInt();
            }


            if (exist)
            {
                // maintenant le joueur doit exister et son identifiant est présent dans la variable Id_Player


                std::cout << "le joueur " << player_name->toStdString() << " existe bien dans la table player " << std::endl;

                QSqlQuery query;
        //        ret = query.exec (QString("INSERT into Image(url,year,joueur_nom, joueur_numero) values ('%1',%2,'%3',%4')").arg(*url_photo).arg(date).arg(*player_name).arg(player_number));
                query.prepare("INSERT into Image(url,year,joueur_id) values (:url,:year,:id_player)");


                // bind_values
                query.bindValue(":url",*url_photo);
                query.bindValue(":id_player",Id_player);


                // check if year is entred
                if (date == -1)
                    query.bindValue(":year",QVariant(QVariant::Int));
                else
                    query.bindValue(":year",date);



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


        // si le nom du joueur n'est pas entré en paramètre on ajoute la fonction en ne donnant que l'url en argument

        else // if player_name == NULL
        {
            // on execute la
            QSqlQuery addImageUrl;
            addImageUrl.prepare("Insert into Image(url) values :url");
            addImageUrl.bindValue(":url",*url_photo);

            ret = addImageUrl.exec();

            if (ret)
            {
                newId = addImageUrl.lastInsertId().toInt();
                std::cout << "insertion image avec uniquement url réussie , id = " << newId << std::endl;
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
        /*
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
        */

        QSqlQuery findPlayer;

        QString * findPLayer_str = new QString("Select id from Player where nom like :player_name");


        // check if player_number is given
        if (player_number != -1)
            findPLayer_str->push_back(" AND joueur_numero = :player_number");


        // préparation ensuite de la requête

        findPlayer.prepare(*findPLayer_str);

        // lier les variables ensuite

        // player_name is always given
        findPlayer.bindValue(":player_name",*player_name);
        if (player_number != -1)
            findPlayer.bindValue(":player_number",player_number);
        ret=findPlayer.exec();

        if (ret)
        {
            // la requête est OK
            findPlayer.record();
            if (findPlayer.next())
            {
                // il y a un id qui correspond
                int id_joueur = findPlayer.value(0).toInt();
                // on fait ensuite la requête qui consiste à récupérer l'url de toutes les images sur lesquelles le joueur qui a cet id apparait

                QSqlQuery findImage;
                QString *findImage_str = new QString("Select url from image where joueur_id = :id");

                // check if year is given
                if (year != -1)
                    findImage_str->push_back(" AND year = :year");




                findImage.prepare(*findImage_str);

                // lier les différentes variables de la requête

                findImage.bindValue(":id",id_joueur);

                if (year != -1)
                    findImage.bindValue(":year",year);

                ret = findImage.exec();

                if (ret)
                {
                    // la requête est OK
                    findImage.record();
                    // on récupère toutes les url correspondantes
                    while (findImage.next())
                    {
                        url_list->push_back(findImage.value(0).toString());
                        std::cout << "url : " <<  findImage.value(0).toString().toStdString() << std::endl;
                    }
                }
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

bool DatabaseManager::suppressPlayers()
{
    bool ret = false;
    if (db.open())
    {
        QSqlQuery query;
        query.prepare("DELETE FROM Player where id NOT NULL");
        ret = query.exec();

        if (ret)
        {
            std::cout << "joueurs supprimés" << std::endl;
        }
    }

    return ret;
}


bool DatabaseManager::dropImageTable()
{
    bool ret = false;
    if (db.open())
    {
        QSqlQuery query;
        query.prepare("DROP TABLE Image");
        ret = query.exec();

        if (ret)
        {
            std::cout << "Table image supprimée" << std::endl;
        }
    }

    return ret;
}


bool DatabaseManager::dropPlayerTable()
{
    bool ret = false;
    if (db.open())
    {
        QSqlQuery query;
        query.prepare("DROP TABLE Player");
        ret = query.exec();

        if (ret)
        {
            std::cout << "Table joueur supprimée" << std::endl;
        }
    }

    return ret;
}

bool DatabaseManager::dropAllTables()
{
    return (dropImageTable()&& dropPlayerTable());
}



QStringList* DatabaseManager::selectPlayerByUrl(QString *url)
{
    QStringList* player_list = new QStringList();
    bool ret = false;
    std::cout << "url (select players): " << url->toStdString() << std::endl;
    if(db.open())
    {
        QSqlQuery query;
        query.prepare("Select distinct p.nom from Player p, Image i where i.joueur_id = p.id and i.url like :url ");
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
                    // construction d'une chaine de caractère qui contiendra la requête

        QString* query_str = new QString("Update Player ");

        // le champ "nom" est toujours renseigné, on commence donc par celui-ci
        query_str->push_back("set nom=:nom ");


        // on vérifie les champs les uns après les autres ensuite

        if (player_info->find("prenom") != player_info->end())
            query_str->push_back(", prenom=:prenom");
        if (player_info->find("joueur_numero") != player_info->end())
            query_str->push_back(", joueur_numero=:joueur_numero");
        if (player_info->find("date_naissance") != player_info->end())
            query_str->push_back(", date_naissance=:date_naissance");
        if (player_info->find("poste") != player_info->end())
            query_str->push_back(", poste=:poste");
        if (player_info->find("nb_matchs") != player_info->end())
            query_str->push_back(", nb_matchs=:nb_matchs");
        if (player_info->find("nb_buts") != player_info->end())
            query_str->push_back(", nb_buts=:nb_buts");
        if (player_info->find("annee_arrivee")!= player_info->end())
            query_str->push_back(", annee_arrivee=:annee_arrivee");



        // fin de la requête

        query_str->push_back(" where id=:id");



                    // construction de la requête à partir de la chaîne de caractère est des différentes variables à lier

        QSqlQuery query;
        query.prepare(*query_str);

        // lier le nom qui est toujours renseigné
        query.bindValue(":nom",player_info->at("nom").toString());

        // lier l'identifiant
        query.bindValue(":id",player_info->at("id").toString());

        // lier tous les autres champs qui ont été renseignés

        if (player_info->find("prenom") != player_info->end())
            query.bindValue(":prenom",player_info->at("prenom").toString());
        if (player_info->find("joueur_numero") != player_info->end())
            query.bindValue(":joueur_numero",player_info->at("joueur_numero").toString());
        if (player_info->find("date_naissance") != player_info->end())
            query.bindValue(":date_naissance",player_info->at("date_naissance").toString());
        if (player_info->find("poste") != player_info->end())
        {
            switch(player_info->at("poste").toInt())
            {
            case 0:
                query.bindValue(":poste","G");
                break;
            case 1:
                query.bindValue(":poste","D");
                break;
            case 2:
                query.bindValue(":poste","M");
                break;
            default: // case 3 en fait
                query.bindValue(":poste","A");
                break;
            }
        }
        if (player_info->find("nb_matchs") != player_info->end())
            query.bindValue(":nb_matchs",player_info->at("nb_matchs").toString());
        if (player_info->find("nb_buts") != player_info->end())
            query.bindValue(":nb_buts",player_info->at("nb_buts").toString());
        if (player_info->find("annee_arrivee")!=player_info->end())
            query.bindValue(":annee_arrivee",player_info->at("annee_arrivee").toString());


        // executer la requete sur la base de données

        if (query.exec())
        {
            return true;
        }
    }
    return false;
}


int DatabaseManager::addPlayer(std::map<QString, QVariant> *player_info)
{
    if (db.open())
    {
        // si la base de donnée est correctement ouverte
        QSqlQuery query;
        query.prepare("Insert into Player(Nom,prenom,date_naissance,annee_arrivee,poste,nb_matchs,nb_buts,joueur_numero) "
                      "Values(:nom,:prenom,:date_naissance,:annee_arrivee,:poste,:nb_matchs,:nb_buts,:joueur_numero)");

        // lier les variables

        // lier le nom qui est toujours renseigné
        query.bindValue(":nom",player_info->at("nom").toString());

        std::cout << "Nom du joueur à ajouté " << player_info->at("nom").toString().toStdString() << std::endl;

        // lier tous les autres champs qui ont été renseignés

        if (player_info->find("prenom") != player_info->end())
            query.bindValue(":prenom",player_info->at("prenom").toString());
        else // sinon on lie avec une valeur à NULL pour que la requête soit tout de même accepter dans la base de données
        {
            query.bindValue(":prenom",QVariant(QVariant::String));
            std::cout << "le prénom n'a pas été renseigné " << std::endl;
        }

        if (player_info->find("joueur_numero") != player_info->end())
            query.bindValue(":joueur_numero",player_info->at("joueur_numero").toString());
        else
            query.bindValue("joueur_numero",QVariant(QVariant::Int));

        if (player_info->find("date_naissance") != player_info->end())
            query.bindValue(":date_naissance",player_info->at("date_naissance").toString());
        else
            query.bindValue(":date_naissance",QVariant(QVariant::Date));

        if (player_info->find("poste") != player_info->end())
        {
            switch(player_info->at("poste").toInt())
            {
            case 0:
                query.bindValue(":poste","G");
                break;
            case 1:
                query.bindValue(":poste","D");
                break;
            case 2:
                query.bindValue(":poste","M");
                break;
            default: // case 3 en fait
                query.bindValue(":poste","A");
                break;
            }
        }
        else
            query.bindValue(":poste",QVariant(QVariant::Char));

        if (player_info->find("nb_matchs") != player_info->end())
            query.bindValue(":nb_matchs",player_info->at("nb_matchs").toString());
        else
            query.bindValue(":nb_matchs",QVariant(QVariant::Int));

        if (player_info->find("nb_buts") != player_info->end())
            query.bindValue(":nb_buts",player_info->at("nb_buts").toString());
        else
            query.bindValue(":nb_buts",QVariant(QVariant::Int));

        if (player_info->find("annee_arrivee")!=player_info->end())
            query.bindValue(":annee_arrivee",player_info->at("annee_arrivee").toString());
        else
            query.bindValue(":annee_arrivee",QVariant(QVariant::Int));

        // on execute ensuite la requête
        if (query.exec())
        {
            // on renvoie alors l'identiant du joueur ajouté
            return query.lastInsertId().toInt();
        }
        else
        {
            std::cout << "Un problème a été rencontré lors de l'ajout dans la base de donnée " << std::endl;
        }
    }


    // si quelque chose ne fonctionne pas correctement on renvoie -1
    return -1;
}

int DatabaseManager::getImageYear(const QString &url)
{
    if (db.open())
    {
        QSqlQuery query;
        query.prepare("Select year from Image where url like :url and year not null");
        // lier l'url en question dans la requête
        query.bindValue(":url",url);
        if (query.exec())
        {
            query.record();
            if (query.next())// un résultat correspond
                return query.value(0).toInt();
        }
    }
    return -1;
}


bool DatabaseManager::insertImage_Id(QString *url_photo, int player_Id, int year)
{
    if (db.open())
    {
        QSqlQuery query;
        query.prepare("Insert into Image(url,year,joueur_id) values (:url,:year,:joueur_id)");
        // on lie ensuite les différentes variables

        // L'url de la photo est forcément renseigné dans ce cas
        query.bindValue(":url",*url_photo);
        // l'identifiant du joueur est également correctement renseigné
        query.bindValue(":joueur_id",player_Id);

        // on vérifie ensuite que l'année est disponbible
        if (year != -1)
        {
            query.bindValue(":year",year);
        }
        else
            query.bindValue(":year",QVariant(QVariant::Int));


        // on exécute ensuite la requête
        if (query.exec())
        {
            // si aucun problème n'est rencontré
            return true;
        }
    }

    // par défaut si un problème est rencontré, on renvoie faux
    return false;
}


QStringList* DatabaseManager::selectPlayerNotInImage(const QString &url)
{
    QStringList* players = new QStringList();

    if(db.open())
    {
        QSqlQuery query;
        query.prepare("Select nom from player where id not in (select joueur_id from Image where url like :url)");
        query.bindValue(":url",url);

        //on execute ensuite la requête
        if (query.exec())
        {
            query.record();
            while (query.next())
            {
                players->push_back(query.value(0).toString());
            }
        }
    }

    return players;
}


bool DatabaseManager::deleteImage(const QString &url)
{
    if (db.open())
    {
//        std::cout << "url de l'image à supprimer " << url.toStdString() << std::endl;
        QSqlQuery query;
        query.prepare("Delete from Image where url like :url");
        query.bindValue(":url",url);

        if (query.exec())
        {
            return true;
        }
    }
    return false;
}
