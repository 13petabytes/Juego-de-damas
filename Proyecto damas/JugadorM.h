#ifndef JUGADOR_M_H
#define JUGADOR_M_H

#include "Jugador.h"

class JUGADOR_M:public Jugador {
private:
    bool jugador_H_o_M = false;

public:
    JUGADOR_M();
    bool getjugador_H_o_M();
};

#endif