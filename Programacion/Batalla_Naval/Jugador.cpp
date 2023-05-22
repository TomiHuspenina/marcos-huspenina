#include "Jugador.h"
Jugador::Jugador() {
    Nombre = " ";
    Puntaje = 0;
}
Jugador::Jugador(string Nom, int punt){
    Nombre = Nom;
    Puntaje = punt;
}
void Jugador::setPuntaje(int Punt){
    Puntaje = Punt;
}
int Jugador::getPuntaje(){
    return Puntaje;
}
void Jugador::setNombre(string Nom){
    Nombre = Nom;
}
string Jugador::getNombre(){
    return Nombre;
}