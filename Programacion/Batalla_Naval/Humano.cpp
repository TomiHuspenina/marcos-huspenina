#include "Humano.h"
#include "Tablero.h"
Humano::Humano(){
    Hx = 0;
    Hy = 0;
}
Humano::Humano(string Nom, int Punt, int hx, int hy): Jugador(Nom, Punt){
    Hx = hx;
    Hy = hy;
}
Humano::Humano(string t[9][9], int hx, int hy): Tablero(t){
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

/*void Humano::CargarTableroH(){
    Crear_Tablero();
    int posx, posy, i=0, j=0, aux=0;
    cout<<endl<<" COLOQUE SUS BARCOS EN LA POSICION QUE DESEE ";
    cout<<endl<<" BARCO 1 - ocupacion de 4 casillas: ";
    while(aux!=4){
        cout<<endl<<" Coordenada en X: ";
        cin>>posx;
        cout<<"Coordenada en Y: ";
        cin>>posy;
        if(T[posx-1][posy-1] == " O"){
            T[posx-1][posy-1] = "B1";
            aux++;
        }else{
            cout<<endl<<" ADVERTENCIA: ya hay un barco es esa posicion"<<endl;
        }
        Mostrar_Tablero();
    }

    cout<<endl<<" BARCO 2,3,4 - ocupacion de 3 casillas: ";
    for(i=0; i<3; i++){
        aux=0;
        while (aux != 3){
            cout << endl << " Coordenada en X: ";
            cin >> posx;
            cout << "Coordenada en Y: ";
            cin >> posy;
            if (T[posx - 1][posy - 1] == " O"){
            switch (i){
                case 0:
                    T[posx - 1][posy - 1] = "B2";
                    aux++;
                    Mostrar_Tablero();
                    break;
                case 1:
                    T[posx - 1][posy - 1] = "B3";
                    aux++;
                    Mostrar_Tablero();
                    break;
                case 2:
                    T[posx - 1][posy - 1] = "B4";
                    aux++;
                    Mostrar_Tablero();
                    break;
            }
        }else{
                cout<<endl<<" ADVERTENCIA: ya hay un barco es esa posicion"<<endl;
                Mostrar_Tablero();
            }
        }
    }

    cout<<endl<<" BARCO 5,6 - ocupacion de 2 casillas: ";
    for(i=0; i<2; i++){
        aux=0;
        while (aux != 2){
            cout << endl << " Coordenada en X: ";
            cin >> posx;
            cout << "Coordenada en Y: ";
            cin >> posy;
            if (T[posx - 1][posy - 1] == " O"){
                switch (i){
                    case 0:
                        T[posx - 1][posy - 1] = "B5";
                        aux++;
                        Mostrar_Tablero();
                        break;
                    case 1:
                        T[posx - 1][posy - 1] = "B6";
                        aux++;
                        Mostrar_Tablero();
                        break;
                }
            }else{
                cout<<endl<<" ADVERTENCIA: ya hay un barco es esa posicion"<<endl;
                Mostrar_Tablero();
            }
        }
    }

    cout<<endl<<" BARCO 7 - ocupacion de 1 casillas: ";
    aux=0;
    while(aux!=1){
        cout<<endl<<" Coordenada en X: ";
        cin>>posx;
        cout<<"Coordenada en Y: ";
        cin>>posy;
        if(T[posx-1][posy-1] == " O"){
            T[posx-1][posy-1] = "B7";
            aux++;
        }else{
            cout<<endl<<" ADVERTENCIA: ya hay un barco es esa posicion"<<endl;
        }
        Mostrar_Tablero();
    }
}*/

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
    Mostrar_Tablero();

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
            Mostrar_Tablero();
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
            Mostrar_Tablero();
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
    Mostrar_Tablero();
}