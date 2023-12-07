#ifndef ARDUINO_H
#define ARDUINO_H

//#include <QDeclarativeItem>
#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
class arduino
{
public:
    // Méthodes de la classe Arduino
    arduino();
    int connect_arduino(); // Permet de connecter le PC à Arduino
    int close_arduino();   // Permet de fermer la connexion
    int write_to_arduino(QByteArray); // Envoyer des données vers Arduino
    QByteArray read_from_arduino();    // Recevoir des données de la carte Arduino
    QSerialPort *get_serial();         // Accesseur
    QString get_arduino_port_name();


private:
    QSerialPort *serial; // Cet objet rassemble des informations (vitesse, bits de données, etc.)
    // et des fonctions (envoi, lecture de réception,..) sur ce qu'est une voie série pour Arduino.
    static const quint16 arduino_uno_vendor_id = 9025;
    static const quint16 arduino_uno_product_id = 67;
    QString arduino_port_name;
    bool arduino_is_available;
    QByteArray data; // Contenant les données lues à partir d'Arduino
};




#endif // ARDUINO_H
