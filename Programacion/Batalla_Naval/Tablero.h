
#ifndef BATALLA_NAVAL_TABLERO_H
#define BATALLA_NAVAL_TABLERO_H
#include <iostream>
#include <string>
using namespace std;
class Tablero{
protected:
    string T[9][9];
public:
    Tablero();
    Tablero(string t[9][9]);
    void Crear_Tablero();
    void Mostrar_Tablero();
};


#endif //BATALLA_NAVAL_TABLERO_H
