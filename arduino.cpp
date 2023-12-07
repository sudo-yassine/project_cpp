#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include "arduino.h"
arduino::arduino()
{
    data="";
    arduino_port_name="";
    arduino_is_available=false;
    serial=new QSerialPort;
}
int arduino::connect_arduino()
{
    // Il recherche du port sur lequel la carte Arduino identifiée par arduino_uno_vendor_id est connectée
    foreach (const QSerialPortInfo &serial_port_info, QSerialPortInfo::availablePorts()) {
        if (serial_port_info.hasVendorIdentifier() && serial_port_info.hasProductIdentifier()) {
            if (serial_port_info.vendorIdentifier() == arduino_uno_vendor_id && serial_port_info.productIdentifier() == arduino_uno_product_id) {
                arduino_is_available = true;
                arduino_port_name = serial_port_info.portName();
            }
        }
    }

    qDebug() << "arduino_port_name is :" << arduino_port_name;

    if (arduino_is_available) {
        // Configuration de la communication (débit...)
        serial->setPortName(arduino_port_name);

        if (serial->open(QSerialPort::ReadWrite)) {
            serial->setBaudRate(QSerialPort::Baud9600);          // Débit : 9600 bits/s
            serial->setDataBits(QSerialPort::Data8);             // Longueur des données : 8 bits
            serial->setParity(QSerialPort::NoParity);           // 1 bit de parité optionnel
            serial->setStopBits(QSerialPort::OneStop);          // Nombre de bits de stop : 1
            serial->setFlowControl(QSerialPort::NoFlowControl);

            return 0;
        }
    }

    return -1;  // Return -1 if Arduino is not available or cannot be connected
}

int arduino::close_arduino()
{
    if(serial->isOpen())
    {serial->close();
        return 0;
    }
    return 1;

}
QString arduino::get_arduino_port_name()
{
    return arduino_port_name;
}

QByteArray arduino::read_from_arduino()
{
    if (serial->isReadable()) {
        data = serial->readAll(); // Récupérer les données reçues
        return data;
    }

    // Return an empty QByteArray if not readable
    return QByteArray();
}

int arduino::write_to_arduino(QByteArray d)
{
    if (serial->isWritable()) {
        serial->write(d); // Envoyer des données vers Arduino
        return 0;
    } else {
        qDebug() << "Couldn't write to serial!";
        return -1;  // Return -1 if unable to write to serial
    }
}
