#include "Jugador.h"

Jugador::Jugador(){}

Jugador::getjugada(int i,int j){
    return jugada[i][j];
}

void Jugador::setjugada(){
    int _jugada[2][2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            jugada[i][j]=_jugada[i][j];
        }
    }
}