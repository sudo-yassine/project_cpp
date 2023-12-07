#include "arduino.h"
#include "qthread.h"

Arduino::Arduino()
{
    id_demande="";
    etat_mouvement="";
    arduino_port_name="";
    arduino_is_available=false;
    serial=new QSerialPort;
    data = "";

}

QString Arduino::getarduino_port_name()
{
    return arduino_port_name;
}

QSerialPort *Arduino::getserial()
{
   return serial;
}
int Arduino::connect_arduino(const QString &portName)
{
    // recherche du port sur lequel la carte arduino identifée par  arduino_uno_vendor_id est connectée

    if (serial->isOpen()) {
        serial->close();
        serial->setBaudRate(QSerialPort::Baud9600);
        QThread::msleep(1000); // // Ajout d'un délai après la fermeture du port
    }

    arduino_port_name = portName;
    serial->setPortName(arduino_port_name);

    if (serial->open(QSerialPort::ReadWrite)) {
        serial->setBaudRate(QSerialPort::Baud9600);// débit : 9600 bits/s
        serial->setDataBits(QSerialPort::Data8);//Longueur des données : 8 bits
        serial->setParity(QSerialPort::NoParity);//1 bit de parité optionnel
        serial->setStopBits(QSerialPort::OneStop); //Nombre de bits de stop : 1
        serial->setFlowControl(QSerialPort::NoFlowControl);



        QThread::msleep(1000); // Adjust the delay time as needed

        return 0;
    } else {
        qDebug() << "Failed to open serial port:" << serial->errorString();
        return 1;
    }
}
int Arduino::connect_arduino()
{   // recherche du port sur lequel la carte arduino identifée par  arduino_uno_vendor_id
    // est connectée
    foreach (const QSerialPortInfo &serial_port_info, QSerialPortInfo::availablePorts()){
           if(serial_port_info.hasVendorIdentifier() && serial_port_info.hasProductIdentifier()){
               if(serial_port_info.vendorIdentifier() == arduino_uno_vendor_id && serial_port_info.productIdentifier()
                       == arduino_uno_producy_id) {
                   arduino_is_available = true;
                   arduino_port_name=serial_port_info.portName();
               } } }
        qDebug() << "arduino_port_name is :" << arduino_port_name;
        if(arduino_is_available){ // configuration de la communication ( débit...)
            serial->setPortName(arduino_port_name);
            if(serial->open(QSerialPort::ReadWrite)){
                serial->setBaudRate(QSerialPort::Baud9600); // débit : 9600 bits/s
                serial->setDataBits(QSerialPort::Data8); //Longueur des données : 8 bits,
                serial->setParity(QSerialPort::NoParity); //1 bit de parité optionnel
                serial->setStopBits(QSerialPort::OneStop); //Nombre de bits de stop : 1
                serial->setFlowControl(QSerialPort::NoFlowControl);
                return 0;
            }
            return 1;
        }
        return -1;

}

int Arduino::close_arduino()

{

    if(serial->isOpen()){
            serial->close();
            return 0;
        }
    return 1;
    if (serial->isOpen()) {
        serial->close();
        return 0;
    }
    return 1;


}


 QByteArray Arduino::read_from_arduino()
{
    if(serial->isReadable()){
         id_demande=serial->readAll(); //récupérer les données reçues

         return id_demande;
    }
    if(serial->isReadable()){
        data = serial->readAll();  //récupérer les données reçues
         qDebug() << "done!";
        return data;
    }
    return QByteArray(); // Return an empty QByteArray if not readable
 }


int Arduino::write_to_arduino( QByteArray d)

{

    if(serial->isWritable()){
        serial->write(d);  // envoyer des donnés vers Arduino
    }else{
        qDebug() << "Couldn't write to serial!";
    }


}



int Arduino::write_to_arduino(const QString &data) // LCD 16/2
// Change the parameter type here   mel arduino lel qt  // envoyer des données vers arduino
{
    QByteArray byteArray = data.toUtf8(); // Convert QString to QByteArray

    if (serial->isWritable()) { // envoyer des donnés vers Arduino
        for (int i = 0; i < byteArray.length(); ++i) {
            serial->putChar(byteArray.at(i));
            serial->waitForBytesWritten(5000); //Attendez que les données soient écrites (ajustez le délai d'attente si nécessaire)
        }
        return 0;

        // Success
    } else {
        qDebug() << "Couldn't write to serial!";
        return 1;

        // Failure
    }

    /*

    QMessageBox::information(nullptr, QObject::tr("Success"),
                             QObject::tr("Sent to Arduino successfully."),
                             QMessageBox::Ok);
 else
{
    qDebug() << "Not found in the database for the entered matricule: " << matricule;

    QMessageBox::critical(nullptr, QObject::tr("Error"),
                          QObject::tr("Not found in the database for the entered matricule."),
                          QMessageBox::Cancel);

    */
}
