#ifndef JUGADOR_M
#define JUGADOR_M
using namespace std;
#include "Jugador.h"

class Jugador_M :public Jugador {
private:
    int jugada;
    bool jugador_H_o_M = false;
public:
    void setjugada(int jugada_M) {
        jugada = jugada_M;
        cout<<jugada;
    };
};
#endif
