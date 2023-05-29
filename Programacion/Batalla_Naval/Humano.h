
#ifndef BATALLA_NAVAL_HUMANO_H
#define BATALLA_NAVAL_HUMANO_H
#include "Jugador.h"
#include <fstream>
#include <string>
#include<iostream>
#include "Tablero.h"
class Humano: public Jugador, public Tablero{
private:
    int Hf;
    int Hc;
    int PH;
public:
    Humano();
    Humano(string Nom, int hf, int hc, int puntosH);
    Humano(string t[9][9], string tx[9][9], int hf, int hc, int puntosH);
    void setHf(int hf);
    int getHf();
    void setHc(int hc);
    int getHc();
    void setPH(int puntosH);
    int getPH();
    void Tiro_Hum();
    void CargarTableroH();
    Barcos B;
};


#endif //BATALLA_NAVAL_HUMANO_H
