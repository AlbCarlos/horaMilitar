#include "companiaHoraria.h"

companiaHoraria::companiaHoraria(int tam) : tamanio(tam){
    cantidad = 0;
    contenedora = new horaEstandar*[tamanio];

    for (int i = 0; i < tamanio; i++){
        contenedora[i] = nullptr;
    }
}

void companiaHoraria::agregarHora(horaEstandar *hE){
    if (cantidad < tamanio){
        contenedora[cantidad] = hE;
    }

    cantidad++;
}

companiaHoraria::~companiaHoraria(){
    for (int i = 0; i < cantidad; i++){
        delete contenedora[i];
    }
    delete []contenedora;
}

void companiaHoraria::reporte(tipoHora *){

}