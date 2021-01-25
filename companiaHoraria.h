#ifndef HORAMILITAR_COMPANIAHORARIA_H
#define HORAMILITAR_COMPANIAHORARIA_H
#include "tipoHora.h"
#include "horaEstandar.h"
#include <iostream>
using namespace std;

class companiaHoraria {
private:
    horaEstandar **contenedora;
    int tamanio;
    int cantidad;
public:
    companiaHoraria(int = 0);
    virtual ~companiaHoraria();
    void agregarHora(horaEstandar *);
    void reporte();
    void reporte(tipoHora *);
};

#endif //HORAMILITAR_COMPANIAHORARIA_H