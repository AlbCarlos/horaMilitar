#include <iostream>
#include "companiaHoraria.h"
#include "hora24.h"
#include "horaMilitar.h"

int main(int, char**) {
       companiaHoraria *c = new companiaHoraria;

       c->agregarHora(new horaEstandar(5, 30, "am"));
       c->agregarHora(new horaEstandar(8, 45, "am"));
       c->agregarHora(new horaEstandar(11, 55, "am"));
       c->agregarHora(new horaEstandar(3, 15, "pm"));
       c->agregarHora(new horaEstandar(8, 30, "pm"));
       c->agregarHora(new horaEstandar(10, 45, "pm"));

        c->reporte();
        c->reporte(new horaMilitar());
        c->reporte(new hora24());


       delete c;
       system("pause");
       return 0;
}
