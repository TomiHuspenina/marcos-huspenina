
#ifndef BATALLA_NAVAL_TABLEROH_H
#define BATALLA_NAVAL_TABLEROH_H
#include <iostream>
#include <string>
using namespace std;
class TableroH{
private:
    string TH[9][9];
public:
    TableroH();
    TableroH(string th[9][9]);
    void Mostrar_TableroH();
};


#endif //BATALLA_NAVAL_TABLEROH_H
