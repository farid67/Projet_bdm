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
    bool createJoueurTable();

    // création de la table "HistoriqueNumero"
    bool createHistoriqueNumeroTable();

    // création de la table "Image"
    bool createImageTable();

    // insertion d'une ligne dans la table Image
    int insertImage(QString *url_photo,int date, QString* player_name, int player_number);

    // recherche d'une image
    QStringList *selectImage(int year,QString* playerName, int player_number);

    // suppression de toutes les images de la table Image
    bool suppressImages();


private:
    QSqlDatabase db;

};

#endif // DB_H
