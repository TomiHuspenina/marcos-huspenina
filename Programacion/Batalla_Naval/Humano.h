
#ifndef BATALLA_NAVAL_HUMANO_H
#define BATALLA_NAVAL_HUMANO_H
#include "Jugador.h"
#include <fstream>
#include <string>
#include<iostream>
#include "TableroH.h"
class Humano: public Jugador{
private:
    int Hx;
    int Hy;
public:
    Humano();
    Humano(string Nom, int Punt, int hx, int hy);
    void setHx(int hx);
    int getHx();
    void setHy(int hy);
    int getHy();
    void Tiro_Hum();
    TableroH TabH;
};


#endif //BATALLA_NAVAL_HUMANO_H
