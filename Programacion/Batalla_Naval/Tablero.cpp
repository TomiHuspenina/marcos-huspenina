
#include "Tablero.h"
Tablero::Tablero(){}
Tablero::Tablero(string t[9][9]){
    T[9][9] = t[9][9];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            T[i][j] = t[i][j];
        }
    }
}
void Tablero::Crear_Tablero() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            T[i][j] = " O";
        }
    }
}

void Tablero::Mostrar_Tablero(){
    cout<<endl<<"     "<<1<<"   "<<2<<"   "<<3<<"   "<<4<<"   "<<5<<"   "<<6<<"   "<<7<<"   "<<8<<"   "<<9<<" ";
    cout<<endl<<"    -----------------------------------";
    for(int i=0; i<9; i++){
        cout<<endl<<i+1<<" |";
        for(int j=0; j<9; j++){
            cout<<" "<<T[i][j]<<" ";
        }
        cout<<" | ";
    }
    cout<<endl<<"    -----------------------------------";
}