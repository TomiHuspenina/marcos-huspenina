#include "Humano.h"
#include "Tablero.h"
Humano::Humano(){
    Hf = 0;
    Hc = 0;
    PH = 0;
}
Humano::Humano(string Nom, int hf, int hc, int puntosH): Jugador(Nom){
    Hf = hf;
    Hc = hc;
    PH = puntosH;
}
Humano::Humano(string t[9][9], string tx[9][9], int hf, int hc, int puntosH): Tablero(t, tx){
    Hf = hf;
    Hc = hc;
    PH = puntosH;
}
void Humano::setHf(int hx){
    Hf = hx;
}
int Humano::getHf(){
    return Hf;
}
void Humano::setHc(int hy){
    Hc = hy;
}
int Humano::getHc(){
    return Hc;
}
void Humano::setPH(int puntosH){
    PH = puntosH;
}
int Humano::getPH(){
    return PH;
}
void Humano::Tiro_Hum(){
    int i = 0, j = 0;
    if (T[Hf][Hc] == " O") {
        cout << endl << " AGUA";
    } else {
        for (i = 1; i < 8; i++) {
            switch (i) {
                case 1:
                    if (T[Hf][Hc] == "B1") {
                        if (B.Barco1() == true) {
                            cout << endl << " BARCO 1 HUNDIDO";
                            Puntaje++;
                            T[Hf][Hc] = " X";
                            TX[Hf][Hc] = " X";
                        } else {
                            cout << endl << " TIRO ACERTADO ";
                            T[Hf][Hc] = " X";
                            TX[Hf][Hc] = " X";
                        }
                    }
                    break;
                case 2:
                    if (T[Hf][Hc] == "B2") {
                        if (B.Barco2() == true) {
                            cout << endl << " BARCO 2 HUNDIDO";
                            Puntaje++;
                            T[Hf][Hc] = " X";
                            TX[Hf][Hc] = " X";
                        } else {
                            cout << endl << " TIRO ACERTADO ";
                            T[Hf][Hc] = " X";
                            TX[Hf][Hc] = " X";
                        }
                    }
                    break;
                case 3:
                    if (T[Hf][Hc] == "B3") {
                        if (B.Barco3() == true) {
                            cout << endl << " BARCO 3 HUNDIDO";
                            Puntaje++;
                            T[Hf][Hc] = " X";
                            TX[Hf][Hc] = " X";
                        } else {
                            cout << endl << " TIRO ACERTADO ";
                            T[Hf][Hc] = " X";
                            TX[Hf][Hc] = " X";
                        }
                    }
                    break;
                case 4:
                    if (T[Hf][Hc] == "B4") {
                        if (B.Barco4() == true) {
                            cout << endl << " BARCO 4 HUNDIDO";
                            Puntaje++;
                            T[Hf][Hc] = " X";
                            TX[Hf][Hc] = " X";
                        } else {
                            cout << endl << " TIRO ACERTADO ";
                            T[Hf][Hc] = " X";
                            TX[Hf][Hc] = " X";
                        }
                    }
                    break;
                case 5:
                    if (T[Hf][Hc] == "B5") {
                        if (B.Barco5() == true) {
                            cout << endl << " BARCO 5 HUNDIDO";
                            Puntaje++;
                            T[Hf][Hc] = " X";
                            TX[Hf][Hc] = " X";
                        } else {
                            cout << endl << " TIRO ACERTADO ";
                            T[Hf][Hc] = " X";
                            TX[Hf][Hc] = " X";
                        }
                    }
                    break;
                case 6:
                    if (T[Hf][Hc] == "B6") {
                        if (B.Barco6() == true) {
                            cout << endl << " BARCO 6 HUNDIDO";
                            Puntaje++;
                            T[Hf][Hc] = " X";
                            TX[Hf][Hc] = " X";
                        } else {
                            cout << endl << " TIRO ACERTADO ";
                            T[Hf][Hc] = " X";
                            TX[Hf][Hc] = " X";
                        }
                    }
                    break;
                case 7:
                    if (T[Hf][Hc] == "B7") {
                        if (B.Barco7() == true) {
                            cout << endl << " BARCO 7 HUNDIDO";
                            Puntaje++;
                            T[Hf][Hc] = " X";
                            TX[Hf][Hc] = " X";
                        } else {
                            cout << endl << " TIRO ACERTADO ";
                            T[Hf][Hc] = " X";
                            TX[Hf][Hc] = " X";
                        }
                    }
                    break;
            }
        }
    }
}

void Humano::CargarTableroH() {
    Crear_Tablero();
    int fila, columna, i = 0, j = 0, aux = 0, opcion;
    bool bandera = false;
    cout << endl << " COLOQUE SUS BARCOS EN LA POSICION QUE DESEE ";
    cout << endl << " BARCO 1 - ocupacion de 4 casillas: ";
    do {
        cout << endl << " RECORDATORIO: Las posiciones van del 1 al 9";
        cout << endl << " Posicion en fila: ";
        cin >> fila;
        cout << "Posicion en columna: ";
        cin >> columna;
    } while (fila <= 0 || fila > 9 || columna <= 0 || columna > 9);
    fila = fila - 1;
    columna = columna - 1;
    do {
        cout << endl << "1) VERTICAL HACIA ABAJO";
        cout << endl << "2) VERTICAL HACIA ARRIBA";
        cout << endl << "3) HORIZONTAL A LA DERECHA";
        cout << endl << "4) HORIZONTAL A LA IZQUIERDA";
        cout << endl << " Elija una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1: {
                for (i = fila; i < fila + 4; i++) {
                    if (T[i][columna] == " O" && i < 8) {
                        bandera = true;
                    } else {
                        bandera = false;
                        break;
                    }
                }
                if (bandera == true) {
                    for (i = fila; i < fila + 4; i++) {
                        T[i][columna] = "B1";
                    }
                } else {
                    cout << endl << " ADVERTENCIA: no se puede colocar el barco de esa manera" << endl;
                }
                break;
            }
            case 2: {
                for (i = fila; i > fila - 4; i--) {
                    if (T[i][columna] == " O" && i > 0) {
                        bandera = true;
                    } else {
                        bandera = false;
                        break;
                    }
                }
                if (bandera == true) {
                    for (i = fila; i > fila - 4; i--) {
                        T[i][columna] = "B1";
                    }
                } else {
                    cout << endl << " ADVERTENCIA: no se puede colocar el barco de esa manera" << endl;
                }
                break;
            }
            case 3: {
                for (j = columna; j < columna + 4; j++) {
                    if (T[fila][j] == " O" && j < 8) {
                        bandera = true;
                    } else {
                        bandera = false;
                        break;
                    }
                }
                if (bandera == true) {
                    for (j = columna; j < columna + 4; j++) {
                        T[fila][j] = "B1";
                    }
                } else {
                    cout << endl << " ADVERTENCIA: no se puede colocar el barco de esa manera" << endl;
                }
                break;
            }
            case 4: {
                for (j = columna; j > columna - 4; j--) {
                    if (T[fila][j] == " O" && j > 0) {
                        bandera = true;
                    } else {
                        bandera = false;
                        break;
                    }
                }
                if (bandera == true) {
                    for (j = columna; j > columna - 4; j--) {
                        T[fila][j] = "B1";
                    }
                } else {
                    cout << endl << " ADVERTENCIA: no se puede colocar el barco de esa manera" << endl;
                }
                break;
            }
        }
    } while (bandera == false);
    Mostrar_TableroT();

    cout << endl << " BARCO 2,3,4 - ocupacion de 3 casillas: ";
    for (int k = 0; k < 3; k++){
        int opcion;
        bool bandera = false;
        do {
            do {
                cout << endl << " RECORDATORIO: Las posiciones van del 1 al 9";
                cout << endl << " Posicion en fila: ";
                cin >> fila;
                cout << "Posicion en columna: ";
                cin >> columna;
            } while (fila <= 0 || fila > 9 || columna <= 0 || columna > 9);
            fila = fila - 1;
            columna = columna - 1;
            cout << endl << "1) VERTICAL HACIA ABAJO";
            cout << endl << "2) VERTICAL HACIA ARRIBA";
            cout << endl << "3) HORIZONTAL A LA DERECHA";
            cout << endl << "4) HORIZONTAL A LA IZQUIERDA";
            cout << endl << " Elija una opcion: ";
            cin >> opcion;
            switch (opcion) {
                case 1: {
                    for (i = fila; i < fila + 3; i++) {
                        if (T[i][columna] == " O" && i<8) {
                            bandera = true;
                        } else {
                            bandera = false;
                            break;
                        }
                    }
                    if (bandera == true) {
                        switch (k) {
                            case 0:
                                for (i = fila; i < fila + 3; i++) {
                                    T[i][columna] = "B2";
                                }
                                break;
                            case 1:
                                for (i = fila; i < fila + 3; i++) {
                                    T[i][columna] = "B3";
                                }
                                break;
                            case 2:
                                for (i = fila; i < fila + 3; i++) {
                                    T[i][columna] = "B4";
                                }
                                break;
                        }
                    } else {
                        cout << endl << " ADVERTENCIA: no se puede colocar el barco de esa manera" << endl;
                    }
                    break;
                    case 2: {
                        for (i = fila; i > fila - 3; i--) {
                            if (T[i][columna] == " O" && i > 0) {
                                bandera = true;
                            } else {
                                bandera = false;
                                break;
                            }
                        }
                        if (bandera == true) {
                            switch (k) {
                                case 0:
                                    for (i = fila; i > fila - 3; i--) {
                                        T[i][columna] = "B2";
                                    }
                                    break;
                                case 1:
                                    for (i = fila; i > fila - 3; i--) {
                                        T[i][columna] = "B3";
                                    }
                                    break;
                                case 2:
                                    for (i = fila; i > fila - 3; i--) {
                                        T[i][columna] = "B4";
                                    }
                                    break;
                            }
                        } else {
                            cout << endl << " ADVERTENCIA: no se puede colocar el barco de esa manera" << endl;
                        }
                        break;
                    }
                    case 3:{
                        for (j=columna; j<columna+3; j++){
                            if (T[fila][j] == " O" && j<8){
                                bandera = true;
                            } else {
                                bandera = false;
                                break;
                            }
                        }
                        if (bandera == true) {
                            switch (k) {
                                case 0:
                                    for (j = columna; j < columna + 3; j++) {
                                        T[fila][j] = "B2";
                                    }
                                    break;
                                case 1:
                                    for (j = columna; j < columna + 3; j++) {
                                        T[fila][j] = "B3";
                                    }
                                    break;
                                case 2:
                                    for (j = columna; j < columna + 3; j++) {
                                        T[fila][j] = "B4";
                                    }
                                    break;
                            }
                        } else {
                            cout << endl << " ADVERTENCIA: no se puede colocar el barco de esa manera" << endl;
                        }
                        break;
                    }
                    case 4: {
                        for (j = columna; j > columna - 3; j--) {
                            if (T[fila][j] == " O" && j>0) {
                                bandera = true;
                            } else {
                                bandera = false;
                                break;
                            }
                        }
                        if (bandera == true) {
                            switch (k) {
                                case 0:
                                    for (j = columna; j > columna - 3; j--) {
                                        T[fila][j] = "B2";
                                    }
                                    break;
                                case 1:
                                    for (j = columna; j > columna - 3; j--) {
                                        T[fila][j] = "B3";
                                    }
                                    break;
                                case 2:
                                    for (j = columna; j > columna - 3; j--) {
                                        T[fila][j] = "B4";
                                    }
                                    break;
                            }
                        } else {
                            cout << endl << " ADVERTENCIA: no se puede colocar el barco de esa manera" << endl;
                        }
                        break;
                    }
                }
            }
            Mostrar_TableroT();
        }while (bandera == false);
    }

    cout << endl << " BARCO 5,6 - ocupacion de 2 casillas: ";
    for (int k = 0; k < 2; k++){
        int opcion;
        bool bandera = false;
        do {
            do {
                cout << endl << " RECORDATORIO: Las posiciones van del 1 al 9";
                cout << endl << " Posicion en fila: ";
                cin >> fila;
                cout << "Posicion en columna: ";
                cin >> columna;
            } while (fila <= 0 || fila > 9 || columna <= 0 || columna > 9);
            fila = fila - 1;
            columna = columna - 1;
            cout << endl << "1) VERTICAL HACIA ABAJO";
            cout << endl << "2) VERTICAL HACIA ARRIBA";
            cout << endl << "3) HORIZONTAL A LA DERECHA";
            cout << endl << "4) HORIZONTAL A LA IZQUIERDA";
            cout << endl << " Elija una opcion: ";
            cin >> opcion;
            switch (opcion) {
                case 1: {
                    for (i = fila; i < fila + 2; i++) {
                        if (T[i][columna] == " O" && i<8) {
                            bandera = true;
                        } else {
                            bandera = false;
                            break;
                        }
                    }
                    if (bandera == true) {
                        switch (k) {
                            case 0:
                                for (i = fila; i < fila + 2; i++) {
                                    T[i][columna] = "B5";
                                }
                                break;
                            case 1:
                                for (i = fila; i < fila + 2; i++) {
                                    T[i][columna] = "B6";
                                }
                                break;
                        }
                    } else {
                        cout << endl << " ADVERTENCIA: no se puede colocar el barco de esa manera" << endl;
                    }
                    break;
                    case 2: {
                        for (i = fila; i > fila - 2; i--) {
                            if (T[i][columna] == " O" && i > 0) {
                                bandera = true;
                            } else {
                                bandera = false;
                                break;
                            }
                        }
                        if (bandera == true) {
                            switch (k) {
                                case 0:
                                    for (i = fila; i > fila - 2; i--) {
                                        T[i][columna] = "B5";
                                    }
                                    break;
                                case 1:
                                    for (i = fila; i > fila - 2; i--) {
                                        T[i][columna] = "B6";
                                    }
                                    break;
                            }
                        } else {
                            cout << endl << " ADVERTENCIA: no se puede colocar el barco de esa manera" << endl;
                        }
                        break;
                    }
                    case 3:{
                        for (j=columna; j<columna+2; j++){
                            if (T[fila][j] == " O" && j<8){
                                bandera = true;
                            } else {
                                bandera = false;
                                break;
                            }
                        }
                        if (bandera == true){
                            switch(k){
                                case 0:
                                    for (j = columna; j < columna + 2; j++) {
                                        T[fila][j] = "B5";
                                    }
                                    break;
                                case 1:
                                    for (j = columna; j < columna + 2; j++) {
                                        T[fila][j] = "B6";
                                    }
                                    break;
                            }
                        } else {
                            cout << endl << " ADVERTENCIA: no se puede colocar el barco de esa manera" << endl;
                        }
                        break;
                    }
                    case 4: {
                        for (j = columna; j > columna - 2; j--) {
                            if (T[fila][j] == " O" && j>0) {
                                bandera = true;
                            } else {
                                bandera = false;
                                break;
                            }
                        }
                        if (bandera == true) {
                            switch (k) {
                                case 0:
                                    for (j = columna; j > columna - 2; j--) {
                                        T[fila][j] = "B5";
                                    }
                                    break;
                                case 1:
                                    for (j = columna; j > columna - 2; j--) {
                                        T[fila][j] = "B6";
                                    }
                                    break;
                            }
                        } else {
                            cout << endl << " ADVERTENCIA: no se puede colocar el barco de esa manera" << endl;
                        }
                        break;
                    }
                }
            }
            Mostrar_TableroT();
        }while (bandera == false);
    }

    cout << endl << " BARCO 7 - ocupacion de 1 casillas: ";
    do{
        cout << endl << " RECORDATORIO: Las posiciones van del 1 al 9";
        cout << endl << " Posicion en fila: ";
        cin >> fila;
        cout << "Posicion en columna: ";
        cin >> columna;
    } while (fila <= 0 || fila > 9 || columna <= 0 || columna > 9);
    fila = fila - 1;
    columna = columna - 1;
    do{
    if (T[fila][columna] == " O") {
            T[fila][columna] = "B7";
            bandera = true;
        }else{
        cout << endl << " ADVERTENCIA: no se puede colocar el barco de esa manera" << endl;
        bandera = false;
    }
}while(bandera == false);
    Mostrar_TableroT();
}