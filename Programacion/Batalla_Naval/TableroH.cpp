#include "TableroH.h"
TableroH::TableroH(){}
TableroH::TableroH(string th[9][9]){
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
                TH[i][j] = th[i][j];
        }
    }
}
void TableroH::Mostrar_TableroH(){
        cout<<endl<<"     "<<1<<"   "<<2<<"   "<<3<<"   "<<4<<"   "<<5<<"   "<<6<<"   "<<7<<"   "<<8<<"   "<<9<<" ";
        cout<<endl<<"    -----------------------------------";
        for(int i=0; i<9; i++){
            cout<<endl<<i+1<<" |";
            for(int j=0; j<9; j++){
                TH[i][j] = " O";
                cout<<" "<<TH[i][j]<<" ";
            }
            cout<<" | ";
        }
        cout<<endl<<"    -----------------------------------";
    }
