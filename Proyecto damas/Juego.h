// Juego.h
#ifndef JUEGO_H
#define JUEGO_H

#include "JugadorH.h"
#include "JugadorM.h"
#include "Tablero.h"
using namespace std;

class Juego {
private:
    bool turno = true;
    JugadorH jugadorH;
    JUGADOR_M jugadorM;
    Tablero tablero;
    bool fin_JUEGO;

public:
    Juego();
    bool getturno();
    bool getfin_JUEGO();
    void setturno();
    void setfin_JUEGO();
    void tableroNUEVO();
    int tableroparatxt(int i, int j);
};

#endif // JUEGO_H
