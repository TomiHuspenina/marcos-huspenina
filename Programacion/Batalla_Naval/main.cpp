#include <iostream>
#include<iostream>
#include "Jugador.h"
#include "Humano.h"
#include "Maquina.h"
#include "Tablero.h"
using namespace std;
int main(){
    int opcion;
    cout<<endl<<"----------------- BATALLA NAVAL -----------------";
    cout<<endl<<" REGLAS: ";
    cout<<endl<<" - Coloque sus barcos en su tablero";
    cout<<endl<<" - Debe ingresar coordenadas (1 al 9) para intentar hundir la flota contraria";
    cout<<endl<<" - Se sumara un punto a la hora de HUNDIR un barco";
    cout<<endl<<" - Gana el jugador que mantiene su flota";

    do {
        cout << endl << " MODO DE JUEGO ";
        cout << endl << " 1) DOS JUGADORES";
        cout << endl << " 2) JUGADOR VS MAQUINA";
        cout << endl << " 0) SALIR";
        cout << endl << " Elija el modo de juego: ";
        cin >> opcion;
    }while(opcion<0 || opcion>2);

    switch (opcion){
        case 1:
            break;

        case 2:
            Humano H;
            Maquina M;
            M.Crear_Tablero();
            H.Crear_Tablero();
            string Nom;
            cout<<endl<<" Ingrese el nombre del jugador: ";
            cin>>Nom;
            H.setNombre(Nom);
            cout<<endl<<" ¡¡A JUGAR!!";
            do{
                int hf, hc, mf, mc;
                cout<<endl<<" Turno de "<<Nom;
                cout<<endl<<" Numero de fila: ";
                cin>>hf;
                cout<<"Numero de columna: ";
                cin>>hc;
                M.setMf(hf);
                M.setMc(hc);
                M.Tiro_Maq();

                srand(time(NULL));
                cout<<endl<<" Turno de la maquina";
                mf = rand() % 9;
                mc = rand() % 9;
                H.setHf(mf);
                H.setHc(mc);
                cout<<endl<<" Numero de fila: "<<mf+1;
                cout<<endl<<" Numero de columna: "<<mc+1;
                H.Tiro_Hum();
            }while( M.getPuntaje()!=7 || H.getPuntaje()!=7);

    }


}
