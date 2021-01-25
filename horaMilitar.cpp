#include "horaMilitar.h"

horaMilitar::horaMilitar(){

}

horaMilitar::~horaMilitar(){

}

void horaMilitar::muestraHora(horaEstandar *hE){
    // numeros entre 1am y 9am
    if (hE->getAmpm() == "am" && hE->getHoras() < 10){
        cout << "0" << hE->getHoras() << hE->getMinutos() << endl;
    }
    // 12am -> 00
    if (hE->getAmpm() == "am" && hE->getHoras() == 12){
        cout << "00"<< hE->getMinutos() << endl;
    }
    // 10am y 11am
    if (hE->getAmpm() == "am" && hE->getHoras() >= 10){
        cout << hE->getHoras() << hE->getMinutos() << endl;
    } else {
        cout << (hE->getHoras() + 12) << hE->getMinutos() << endl;
    }
}