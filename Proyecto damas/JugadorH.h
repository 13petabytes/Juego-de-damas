// JUGADOR_H.h
#ifndef JUGADOR_H_H
#define JUGADOR_H_H

#include "Jugador.h"

class JugadorH:public Jugador {
private:
    bool jugador_H_o_M = true;
    Jugador jugador;

public:
    JugadorH();
    bool getjugador_H_o_M();
};

#endif