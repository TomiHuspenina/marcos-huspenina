#include "Maquina.h"

Maquina::Maquina(){
    Mf = 0;
    Mc = 0;
    PM = 0;
}
Maquina::Maquina(string Nom, int mf, int mc, int puntosM): Jugador(Nom){
    Mf = mf;
    Mc = mc;
    PM = puntosM;
    Barcos();
}
void Maquina::setMf(int mf){
    Mf = mf;
}
int Maquina::getMf(){
    return Mf;
}
void Maquina::setMc(int mc){
    Mc = mc;
}
int Maquina::getMc(){
    return Mc;
}
void Maquina::setPM(int puntosM){
    PM = puntosM;
}
int Maquina::getPM(){
    return PM;
}
void Maquina::Tiro_Maq() {
    int i = 0, j = 0;
    if (T[Mc][Mf] == " O") {
        cout << endl << " AGUA";
    } else {
        for (i = 1; i < 8; i++) {
            switch (i) {
                case 1:
                    if (T[Mc][Mf] == "B1") {
                        if (B.Barco1() == true) {
                            cout << endl << " BARCOS 1 HUNDIDO";
                            Puntaje++;
                        } else {
                            cout << endl << " TIRO ACERTADO ";
                        }
                    }
                    break;
                case 2:
                    if (T[Mc][Mf] == "B2") {
                        if (B.Barco2() == true) {
                            cout << endl << " BARCOS 2 HUNDIDO";
                            Puntaje++;
                        } else {
                            cout << endl << " TIRO ACERTADO ";
                        }
                    }
                    break;
                case 3:
                    if (T[Mc][Mf] == "B3") {
                        if (B.Barco3() == true) {
                            cout << endl << " BARCOS 3 HUNDIDO";
                            Puntaje++;
                        } else {
                            cout << endl << " TIRO ACERTADO ";
                        }
                    }
                    break;
                case 4:
                    if (T[Mc][Mf] == "B4") {
                        if (B.Barco4() == true) {
                            cout << endl << " BARCOS 4 HUNDIDO";
                            Puntaje++;
                        } else {
                            cout << endl << " TIRO ACERTADO ";
                        }
                    }
                    break;
                case 5:
                    if (T[Mc][Mf] == "B5") {
                        if (B.Barco5() == true) {
                            cout << endl << " BARCOS 5 HUNDIDO";
                            Puntaje++;
                        } else {
                            cout << endl << " TIRO ACERTADO ";
                        }
                    }
                    break;
                case 6:
                    if (T[Mc][Mf] == "B6") {
                        if (B.Barco6() == true) {
                            cout << endl << " BARCOS 6 HUNDIDO";
                            Puntaje++;
                        } else {
                            cout << endl << " TIRO ACERTADO ";
                        }
                    }
                    break;
                case 7:
                    if (T[Mc][Mf] == "B7") {
                        if (B.Barco7() == true) {
                            cout << endl << " BARCOS 7 HUNDIDO";
                            Puntaje++;
                        } else {
                            cout << endl << " TIRO ACERTADO ";
                        }
                    }
                    break;
            }
        }
    }
}
void Maquina::CargarTableroM(){
    Crear_Tablero();
    int fila, columna, i = 0, j = 0, opcion;
    bool bandera = false;
    srand(time(NULL));
    fila = rand() % 9;
    columna = rand() % 9;
    do {
        opcion =1+rand()%(5-1);
        switch(opcion){
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
                }
                break;
            }
        }
    } while (bandera == false);

    for (int k = 0; k < 3; k++){
        int opcion;
        bool bandera = false;
        do {
            fila = rand() % 9;
            columna = rand() % 9;
            opcion =1+rand()%(5-1);
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
                        }
                        break;
                    }
                }
            }
        }while (bandera == false);
    }

    for (int k = 0; k < 2; k++){
        int opcion;
        bool bandera = false;
        do {
            fila = rand() % 9;
            columna = rand() % 9;
            opcion =1+rand()%(5-1);
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
                        if (bandera == true) {
                            switch (k) {
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
                        }
                        break;
                    }
                }
            }
        }while (bandera == false);
    }

    do{
        fila = rand() % 9;
        columna = rand() % 9;
        if (T[fila][columna] == " O") {
            T[fila][columna] = "B7";
            bandera = true;
        }else{
            bandera = false;
        }
    }while(bandera == false);
    Mostrar_Tablero();
}