#include "Maquina.h"

Maquina::Maquina(){
    Mx = 0;
    My = 0;
}
Maquina::Maquina(string Nom, int Punt, int mx, int my): Jugador(Nom,Punt){
    Mx = mx;
    My = my;
}
void Maquina::setMx(int mx){
    Mx = mx;
}
int Maquina::getMx(){
    return Mx;
}
void Maquina::setMy(int my){
    My = my;
}
int Maquina::getMy(){
    return My;
}
void Maquina::Tiro_Maq(){
    srand(time(NULL));
    Mx = 1+rand()%(10-1);
    My = 1+rand()%(10-1);
}