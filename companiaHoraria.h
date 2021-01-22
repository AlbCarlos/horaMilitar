#ifndef HORAMILITAR_COMPANIAHORARIA_H
#define HORAMILITAR_COMPANIAHORARIA_H
#include "tipoHora.h"
#include "horaEstandoar.h"

class companiaHoraria {
private:
    horaEstandar *h;
public:
    companiaHoraria(horaEstandar * = nullptr);
    virtual ~companiaHoraria();
    void reporte(tipoHora *);
};

#endif //HORAMILITAR_COMPANIAHORARIA_H