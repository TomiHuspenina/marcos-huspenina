#include <iostream>
#include<iostream>
#include "Jugador.h"
#include "Humano.h"
#include "Maquina.h"
#include "Tablero.h"
#include<cstdlib>  //libreria para el sistem("cls")
using namespace std;
int main() {
    int opcion;
    cout << endl << "--------------------------------- BATALLA NAVAL --------------------------------";
    cout << endl << "| REGLAS                                                                       |";
    cout << endl << "| - Coloque sus barcos en su tablero                                           |";
    cout << endl << "| - Debe ingresar coordenadas (1 al 9) para intentar hundir la flota contraria |";
    cout << endl << "| - Se sumara un punto a la hora de HUNDIR un barco                            |";
    cout << endl << "| - Gana el jugador que mantiene su flota                                      |";
    cout << endl << "--------------------------------------------------------------------------------" << endl;
    do {
        cout << endl << " MODOS DE JUEGO ";
        cout << endl << " 1) DOS JUGADORES";
        cout << endl << " 2) JUGADOR VS MAQUINA";
        cout << endl << " 0) SALIR";
        cout << endl << " Elija el modo de juego: ";
        cin >> opcion;
    } while (opcion < 0 || opcion > 2);

    system("cls");  //limpia la pantalla luego de elegir el modo de juego

    switch (opcion) {
        case 1: {
            Humano H[2];

            string Nom1, Nom2;
            cout << endl << " ------------------- A JUGAR -------------------";
            cout << endl << " Ingrese el nombre del jugador 1: ";
            cin >> Nom1;
            cout << " Ingrese el nombre del jugador 2: ";
            cin >> Nom2;
            H[0].setNombre(Nom1);
            H[1].setNombre(Nom2);
            H[0].CargarTableroH();
            H[1].CargarTableroH();
            int turno = 0, aux = 1;
            while (H[0].getPuntaje() != 7 || H[1].getPuntaje() != 7) {
                int hf, hc;
                bool bandera;
                //TIRO JUGADOR
                if (turno == 0) {
                    cout << endl << " Turno de " << Nom1;
                } else {
                    cout << endl << " Turno de " << Nom2;
                }
                do {
                    cout << endl << " Numero de fila: ";
                    cin >> hf;
                    cout << "Numero de columna: ";
                    cin >> hc;
                    if (hf < 0 || hc < 0 || isdigit(hf) || isdigit(hc) || hf>9 || hc>9) {
                        bandera = false;
                        cout << endl << " ADVERTENCIA: El valor ingresado es erroneo";
                    } else { bandera = true; }
                } while (bandera == false);
                H[aux].setHf((hf - 1));
                H[aux].setHc((hc - 1));
                H[aux].Tiro_Hum();
                if (turno==0) {
                    cout << " - Puntaje de " << Nom1 << ": " << H[aux].getPuntaje() << endl;
                } else {
                    cout << " - Puntaje de " << Nom2 << ": " << H[aux].getPuntaje() << endl;
                }
                H[aux].Mostrar_TableroTX();
                if (turno == 0) {
                    turno = 1;
                    aux = 0;
                } else {
                    turno = 0;
                    aux = 1;
                }
            }
            if (H[0].getPuntaje() == 7){
                cout << endl << " GANADOR: "<<Nom1;
            } else {
                cout << endl << " GANADOR: "<<Nom2;
            }
            break;
        }
        case 2: {
            Humano H;
            Maquina M;
            string Nom;
            cout << endl << " ------------------- A JUGAR -------------------";
            cout << endl << " Ingrese el nombre del jugador: ";
            cin >> Nom;
            H.setNombre(Nom);
            M.CargarTableroM();
            H.CargarTableroH();
            while (M.getPuntaje() != 7 || H.getPuntaje() != 7) {
                int hf, hc, mf, mc;
                bool bandera;
                //TIRO JUGADOR
                cout << endl << " Turno de " << Nom;
                do {
                    cout << endl << " Numero de fila: ";
                    cin >> hf;
                    cout << "Numero de columna: ";
                    cin >> hc;
                    if (hf < 0 || hc < 0 || isdigit(hf) || isdigit(hc || hf>9 || hc>9)) {
                        bandera = false;
                        cout << endl << " ADVERTENCIA: El valor ingresado es erroneo";
                    } else { bandera = true; }
                } while (bandera == false);
                M.setMf((hf - 1));
                M.setMc((hc - 1));
                M.Tiro_Maq();
                cout << " - Puntaje de " << Nom << ": " << M.getPuntaje() << endl;
                M.Mostrar_TableroTX();

                //TIRO MAQUINA
                srand(time(NULL));
                cout << endl << " Turno de la maquina";
                mf = rand() % 9;
                mc = rand() % 9;
                H.setHf(mf);
                H.setHc(mc);
                cout << endl << " Numero de fila: " << mf + 1;
                cout << endl << " Numero de columna: " << mc + 1;
                H.Tiro_Hum();
                cout << " - Puntaje de maquina: " << H.getPuntaje() << endl;
                H.Mostrar_TableroTX();
            }

            if (M.getPuntaje() == 7) {
                cout << endl << " GANADOR: " << Nom;
            } else {
                cout << endl << " GANADOR: Maquina";
            }
        }
    }
}
