#include "hora24.h"

hora24::hora24(){

}

hora24::~hora24(){

}

void hora24::muestraHora(horaEstandar *hE){
    if (hE->getAmpm() == "am"){
        
        if(hE->getHoras() == 12) {
            cout << "0:" << hE->getMinutos() << endl;
        } else {
            cout << hE->getHoras() << ":" << hE->getMinutos() << endl;
        }   
    }
    else {
        if (hE->getHoras() == 12 ) {
            cout << hE->getHoras() << ":" << hE->getMinutos() << endl;
        } else {
            cout << (hE->getHoras() + 12) << ":" << hE->getMinutos() << endl;
        }
    } 
}