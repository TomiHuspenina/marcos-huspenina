
#include "TableroM.h"
TableroM::TableroM(){}
TableroM::TableroM(string tm[9][9]){
    TM[9][9] = tm[9][9];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            TM[i][j] = tm[i][j];
        }
    }
}
void TableroM::Mostrar_TableroM(){
    cout<<endl<<"     "<<1<<"   "<<2<<"   "<<3<<"   "<<4<<"   "<<5<<"   "<<6<<"   "<<7<<"   "<<8<<"   "<<9<<" ";
    cout<<endl<<"    -----------------------------------";
    for(int i=0; i<9; i++){
        cout<<endl<<i+1<<" |";
        for(int j=0; j<9; j++){
            TM[i][j] = " O";
            cout<<" "<<TM[i][j]<<" ";
        }
        cout<<" | ";
    }
    cout<<endl<<"    -----------------------------------";
}