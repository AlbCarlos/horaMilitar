#ifndef HORAMILITAR_TIPOHORA_H
#define HORAMILITAR_TIPOHORA_H
#include "horaEstandar.h"

class tipoHora {
public:
    virtual void muestraHora(horaEstandar *) = 0;
};


#endif //HORAMILITAR_TIPOHORA_H