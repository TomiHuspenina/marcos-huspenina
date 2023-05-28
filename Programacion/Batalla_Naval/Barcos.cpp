
#include "Barcos.h"
Barcos::Barcos(){
    B1 = 4;
    B2 = 3;
    B3 = 3;
    B4 = 3;
    B5 = 2;
    B6 = 2;
    B7 = 1;
}
bool Barcos::Barco1(){
    B1--;
    if(B1==0){
        return true;
    }else{
        return false;
    }
}
bool Barcos::Barco2(){
    B2--;
    if(B2==0){
        return true;
    }else{
        return false;
    }
}
bool Barcos::Barco3(){
    B3--;
    if(B3==0){
        return true;
    }else{
        return false;
    }
}
bool Barcos::Barco4(){
    B4--;
    if(B4==0){
        return true;
    }else{
        return false;
    }
}
bool Barcos::Barco5(){
    B5--;
    if(B5==0){
        return true;
    }else{
        return false;
    }
}
bool Barcos::Barco6(){
    B6--;
    if(B6==0){
        return true;
    }else{
        return false;
    }
}
bool Barcos::Barco7(){
    B7--;
    if(B7==0){
        return true;
    }else{
        return false;
    }
}