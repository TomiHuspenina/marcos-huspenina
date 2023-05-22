#include "Humano.h"
Humano::Humano(){
    Hx = 0;
    Hy = 0;
}
Humano::Humano(string Nom, int Punt, int hx, int hy): Jugador(Nom, Punt){
    Hx = hx;
    Hy = hy;
}
void Humano::setHx(int hx){
    Hx = hx;
}
int Humano::getHx(){
    return Hx;
}
void Humano::setHy(int hy){
    Hy = hy;
}
int Humano::getHy(){
    return Hy;
}
void Humano::Tiro_Hum(){
    bool bandera;
    do {
        cout << endl << " INGRESE LAS COORDENADAS DEL TIRO ";
        cout << endl << " Coordenada en X: ";
        cin >> Hx;
        cout << endl << " Coordenada en Y: ";
        cin >> Hy;
        if(Hx<0 || Hy<0 || isdigit(Hx) || isdigit(Hy)){
            bandera=false;
            cout<<endl<<" ADVERTENCIA: El valor ingresado es erroneo";
        }else{
            bandera=true;
        }
    }while(bandera==false);
}