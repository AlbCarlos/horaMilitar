#include "hora24.h"

hora24::hora24(){

}

hora24::~hora24(){

}

void hora24::muestraHora(horaEstandar *hE){
    if (hE->getAmpm() == "am" && hE->getHoras() != 12){
        cout << hE->getHoras() << ":" << hE->getMinutos() << endl;
    }
    if (hE->getAmpm() == "pm" && hE->getHoras() == 12) {
        cout << hE->getHoras() << ":" << hE->getMinutos() << endl;
    } 
    if (hE->getAmpm() == "am" && hE->getHoras() == 12){
        cout << "0:" << hE->getMinutos() << endl;
    } else {
        int hora = hE->getHoras();
        switch (hora)
        {
        case 1:
            cout << "13:" << hE->getMinutos() << endl;
            break;
        case 2:
            cout << "14:" << hE->getMinutos() << endl;
            break;
        case 3:
            cout << "15:" << hE->getMinutos() << endl;
            break;
        case 4:
            cout << "16:" << hE->getMinutos() << endl;
            break;
        case 5:
            cout << "17:" << hE->getMinutos() << endl;
            break;
        case 6:
            cout << "18:" << hE->getMinutos() << endl;
            break;
        case 7:
            cout << "19:" << hE->getMinutos() << endl;
            break;
        case 8:
            cout << "20:" << hE->getMinutos() << endl;
            break;
        case 9:
            cout << "21:" << hE->getMinutos() << endl;
            break;
        case 10:
            cout << "22:" << hE->getMinutos() << endl;
            break;
        case 11:
            cout << "23:" << hE->getMinutos() << endl;
            break;
        default:
            break;
        }
    }
}