
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
    int Mx;
    int My;
public:
    Maquina();
    Maquina(string Nom, int Punt, int mx, int my);
    void setMx(int mx);
    int getMx();
    void setMy(int my);
    int getMy();
    void Tiro_Maq();
    void CargarTableroM();
    Barcos B;
};


#endif //BATALLA_NAVAL_MAQUINA_H
