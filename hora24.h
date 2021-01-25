#ifndef HORAMILITAR_HORA24_H
#define HORAMILITAR_HORA24_H
#include "tipoHora.h"
#include <iostream>

using namespace std;

class hora24 : public tipoHora {
public:
    hora24();
    virtual ~hora24();
    virtual void muestraHora(horaEstandar *);
};


#endif //HORAMILITAR_HORA24R_H