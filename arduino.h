#ifndef ARDUINO_H
#define ARDUINO_H

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

class Arduino
{
public:      //méthodes de la classe Arduino
    Arduino();
    int connect_arduino(const QString &portName);// permet de connecter le PC à Arduino
    int close_arduino();// permet de femer la connexion
    QByteArray read_from_arduino(); // liaison entre qt arduino // //recevoir des données de la carte Arduino
    int write_to_arduino(const QString &data);  // Change the parameter type here   mel arduino lel qt  // envoyer des données vers arduino
    QSerialPort* getserial();   // accesseur
    QString getarduino_port_name();

private:
    static const quint16 arduino_uno_vendor_id = 9025;
    static const quint16 arduino_uno_product_id = 67;

    QString arduino_port_name;
    bool arduino_is_available;
    QByteArray data;  // contenant les données lues à partir d'Arduino
    QSerialPort* serial; //Cet objet rassemble des informations (vitesse, bits de données, etc.)
    //et des fonctions (envoi, lecture de réception,…) sur ce qu’est une voie série pour Arduino.
};

#endif // ARDUINO_H
