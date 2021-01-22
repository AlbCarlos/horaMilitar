#ifndef HORAMILITAR_HORAESTANDAR_H
#define HORAMILITAR_HORAESTANDAR_H

#include <string>
#include <sstream>
using namespace std;

class horaEstandar
{
private:
    int horas;
    int minutos;
    string ampm;
public:
    horaEstandar(int = 0, int = 0, string = "");
    ~horaEstandar();
//Getters
    int getHoras();
    int getMinutos();
    string getAmpm();

//Setters
    void setHoras(int);
    void setMinutos(int);
    void setAmpm(string);

    string toString();
};

#endif //HORAMILITAR_HORAESTANDAR_H