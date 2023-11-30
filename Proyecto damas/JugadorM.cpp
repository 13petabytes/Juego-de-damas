#include "JugadorM.h"

JUGADOR_M::JUGADOR_M(){}

JUGADOR_M::JUGADOR_M() {
    setjugada();
}

bool JUGADOR_M::getjugador_H_o_M() {
    return jugador_H_o_M;
}

void JUGADOR_M::setjugada(int _jugadaM[2][2]) {
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            jugada[i][j] = _jugadaM[i][j];
        }
    }
}