// Jugador.h
#ifndef JUGADOR_H
#define JUGADOR_H

#include <iostream>

class Jugador {
private:
    int jugada[2][2] = {{0,0},
                        {0,0}};

public:
    Jugador();
    int getjugada(int i,int j);
    void setjugada();
};

#endif
