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