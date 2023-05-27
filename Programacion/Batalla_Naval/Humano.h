
#ifndef BATALLA_NAVAL_HUMANO_H
#define BATALLA_NAVAL_HUMANO_H
#include "Jugador.h"
#include <fstream>
#include <string>
#include<iostream>
#include "Tablero.h"
class Humano: public Jugador, public Tablero{
private:
    int Hx;
    int Hy;
public:
    Humano();
    Humano(string Nom, int Punt, int hx, int hy);
    Humano(string t[9][9], int hx, int hy);
    void setHx(int hx);
    int getHx();
    void setHy(int hy);
    int getHy();
    void Tiro_Hum();
    void CargarTableroH();
    Barcos B;
};


#endif //BATALLA_NAVAL_HUMANO_H
