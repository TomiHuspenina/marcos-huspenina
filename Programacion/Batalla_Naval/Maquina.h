
#ifndef BATALLA_NAVAL_MAQUINA_H
#define BATALLA_NAVAL_MAQUINA_H
#include "Jugador.h"
#include <fstream>
#include <string>
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include "TableroM.h"
using namespace std;
class Maquina: public Jugador{
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
    TableroM TabM;
};


#endif //BATALLA_NAVAL_MAQUINA_H
