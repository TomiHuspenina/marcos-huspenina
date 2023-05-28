
#ifndef BATALLA_NAVAL_MAQUINA_H
#define BATALLA_NAVAL_MAQUINA_H
#include "Jugador.h"
#include <fstream>
#include <string>
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include <cstdlib>
#include <ctime>
#include "Tablero.h"
using namespace std;
class Maquina: public Jugador, public Tablero{
private:
    int Mf;
    int Mc;
    int PM;
public:
    Maquina();
    Maquina(string Nom, int mf, int mc, int puntosM);
    void setMf(int mf);
    int getMf();
    void setMc(int mc);
    int getMc();
    void setPM(int puntosM);
    int getPM();
    void Tiro_Maq();
    void CargarTableroM();
    Barcos B;
};


#endif //BATALLA_NAVAL_MAQUINA_H
