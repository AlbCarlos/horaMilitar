#include "horaEstandar.h"

horaEstandar::horaEstandar(int h, int m, string ampm) {
    this-> horas = h;
    this-> minutos = m;
    this-> ampm = ampm;
}

horaEstandar::~horaEstandar() {}

int horaEstandar::getHoras() {
    return horas;
}

int horaEstandar::getMinutos() {
    return minutos;
}

string horaEstandar::getAmpm() {
    return ampm;
}

void horaEstandar::setHoras(int h) {
    this-> horas = h;
}

void horaEstandar::setMinutos(int m) {
    this-> minutos = m;
}

void horaEstandar::setAmpm(string ampm) {
    this-> ampm = ampm;
}

string horaEstandar::toString() {
    stringstream ss;

    ss << getHoras() << ":" << getMinutos() << getAmpm() << endl;
    
    return ss.str();
}