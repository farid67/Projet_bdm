#ifndef DB_H
#define DB_H

#include <QDebug>
#include <QSqlQuery>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>
#include <QFile>
#include <QDir>
#include <QVariant>
#include <QUrl>
#include <QSqlRecord>
#include <map>
#include <iostream>


class DatabaseManager : public QObject
{
public:
    DatabaseManager(QObject *parent = 0);
    ~DatabaseManager();

public:
    bool openDB();
    bool createDB();
    bool deleteDB();
    QSqlError lastError();

    // création de la table "Joueur"
    bool createPlayerTable();

    // création de la table "HistoriqueNumero"
    bool createHistoriqueNumeroTable();

    // création de la table "Image"
    bool createImageTable();

    // insertion d'une ligne dans la table Image
    int insertImage(QString *url_photo,int date, QString* player_name, int player_number);

    // insertion avec uniquement l'url de la photo ainsi que l'id du joueur -> renvoie un booléen qui indique si la requête s'est bien déroulée ou non
    bool insertImage_Id(QString *url_photo, int player_Id, int year);

    // recherche d'une image
    QStringList *selectImage(int year,QString* playerName, int player_number);

    // suppression de toutes les images de la table Image
    bool suppressImages();

    // suppression de tous les joueurs de la table Player
    bool suppressPlayers();

    // drop table Image
    bool dropImageTable();

    // drop table Player
    bool dropPlayerTable();

    // drop All Tables
    bool dropAllTables();

    // récupère la liste de tous les joueurs
    QStringList *selectPlayerByUrl(QString* url);

    // récupère toutes les informations relatives à un joueur en fonction de son nom
    std::map<QString, QVariant> *selectPlayerByName(const QString &name);

    // modification des informations sur un joueur
    bool updatePlayer(std::map<QString, QVariant> *player_info);

    // création d'un joueur et récupération de l'identifiant du joueur qui a été ajouté
    int addPlayer(std::map<QString,QVariant>* player_info);

    // récupère l'année d'une image à partir de son url
    int getImageYear(const QString& url);

    // permet de récupérer le nom de tous les joueurs qui ne sont pas sur l'image mais qui sont dans la base de donnée
    QStringList* selectPlayerNotInImage(const QString& url);

    // supprimer une photo en fonction de son url, toutes les entrées de la table image avec cet url seront supprimées
    bool deleteImage(const QString& url);

private:
    QSqlDatabase db;

};

#endif // DB_H
