#ifndef HORAMILITAR_COMPANIAHORARIA_H
#define HORAMILITAR_COMPANIAHORARIA_H
#include "tipoHora.h"
#include "horaEstandar.h"

class companiaHoraria {
private:
    horaEstandar **contenedora;
    int tamanio;
    int cantidad;
public:
    companiaHoraria(int = 0);
    virtual ~companiaHoraria();
    void agregarHora(horaEstandar *);
    void reporte(tipoHora *);
};

#endif //HORAMILITAR_COMPANIAHORARIA_H