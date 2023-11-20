#ifndef JUEGO
#define JUEGO

#include "JugadorH.cpp"
#include "JugadorM.cpp"
#include "Tablero.cpp"
using namespace std;

class JUEGO{
    private:
        JugadorH jugadorH;
        JugadorM jugadorM;
        Tablero tablero;
    public:
        int Juego();

        void jugar() {
            int jugadaH = jugadorH.setjugada();
            int jugadaM = jugadorM.setjugada();

            const int* infoTablero = tablero.getTableroInfo();

    }
};

#endif 
