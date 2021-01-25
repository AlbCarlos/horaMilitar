#ifndef HORAMILITAR_HORAMILITAR_H
#define HORAMILITAR_HORAMILITAR_H
#include "tipoHora.h"
#include <iostream>

using namespace std;

class horaMilitar : public tipoHora {
public:
    horaMilitar();
    virtual ~horaMilitar();
    virtual void muestraHora(horaEstandar *);
};


#endif //HORAMILITAR_HORAMILITAR_H