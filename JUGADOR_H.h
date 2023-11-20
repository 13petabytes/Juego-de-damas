#ifndef JUGADOR_H
#define JUGADOR_H
using namespace std;
#include <iostream>
#include <Jugador.h>

class Jugador_H:public Jugador {
private:
    int jugada;
    bool jugador_H_o_M = true;
public:
    void setjugada(int jugada_H) {
        cin >> jugada_H;
    };
};
#endif