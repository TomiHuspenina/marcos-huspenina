
#ifndef BATALLA_NAVAL_TABLEROM_H
#define BATALLA_NAVAL_TABLEROM_H
#include <iostream>
#include <string>
using namespace std;
class TableroM{
private:
    string TM[9][9];
public:
    TableroM();
    TableroM(string tm[9][9]);
    void Mostrar_TableroM();
};


#endif //BATALLA_NAVAL_TABLEROM_H
