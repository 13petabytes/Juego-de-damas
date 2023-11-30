#include "Juego.h"

Juego::Juego(){}

Juego::tableroparatxt(int i, int j){
    return tablero.TableroInfoPARTES(i, j);
}

bool Juego::getturno(){
    return turno;
}

bool Juego::getfin_JUEGO(){
    return fin_JUEGO;
}

void Juego::setturno(){
    if (turno == true){
        turno = false;
    }
    else if (turno == false){
        turno = true;
    }
}


void Juego::setfin_JUEGO(){
    int g = 0;
    for (int i = 0; i < 8; ++i){
        for (int j = 0; j < 8; ++j){
            g = g + tablero.TableroInfoPARTES(i, j);
        }
    }
    if (g >= 284){
        fin_JUEGO = true;
    }
    else{
        fin_JUEGO = false;
    }
    return fin_JUEGO;
}
//corazon del programa
void Juego::tableroNUEVO(){
    //funciones
    int ficha_mover;
    int ficha_mover_ubicacion;
    int x1;
    int y1;
    int x2;
    int y2;
    int _jugada[2][2];
    int nuevaConfiguracion[8][8];
    int comparar;
    //turno H
    if (turno == true){
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
               cout << tablero.TableroInfoPARTES(i, j) << "I";
           }
            cout << std::endl;
            cout << "----------------" <<std::endl;
        }

        bool validar_jugada = false;

        while (validar_jugada == false){

        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                if (j==0 && i==0){
                    cout << "De la fila de la ficha que quiere mover(UN SOLO DIJITO DEL 1 AL 8:"<<std::endl;
                    cin>>_jugada[i][j];
                }
                else if(j==1 && i == 0){
                    cout << "De la columna de la ficha que quiere mover(UN SOLO DIJITO DEL 1 AL 8:"<<std::endl;
                    cin>>_jugada[i][j];
                }
                if (j==0 && i==1){
                    cout << "De la fila de la posicion a la que la quiere mover(UN SOLO DIJITO DEL 1 AL 8:"<<std::endl;
                    cin>>_jugada[i][j];
                }
                else if(j==1 && i == 1){
                    cout << "De la columna de la posicion a la que la quiere mover (UN SOLO DIJITO DEL 1 AL 8):"<<std::endl;
                    cin>>_jugada[i][j];
                }
            }
        }
        if (_jugada[0][0] >= 0 && _jugada[0][0] < 8 &&
            _jugada[0][1] >= 0 && _jugada[0][1] < 8 &&
            _jugada[1][0] >= 0 && _jugada[1][0] < 8 &&
            _jugada[1][1] >= 0 && _jugada[1][1] < 8) {
            
            validar_jugada = true;
            }
        else{
            validar_jugada = false;
        }
        }


        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (i == _jugada[0][0]&& j == _jugada[0][1]){
                    int ficha_mover = tablero.TableroInfoPARTES(i, j);
                    int x1 = _jugada[0][0];
                    int y1 = _jugada[0][1];
                }
                else if (i == _jugada[1][0] && j == _jugada[1][1]){
                    int ficha_mover_ubicacion = tablero.TableroInfoPARTES(i, j);
                    int x2 = _jugada[1][0];
                    int y2 = _jugada[1][1];
                }
            }
        }
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                nuevaConfiguracion[i][j] = jugadorH.getjugada();
            }
        }
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (i == x1 && j == y1){
                    nuevaConfiguracion[i][j] = ficha_mover_ubicacion;
                }
                else if(i == x2 && j == y2){
                    nuevaConfiguracion[i][j] = ficha_mover;  
                }
            }
        }
        tablero.setTableroInfo(int nuevaConfiguracion[8][8]);
    }
    //turno M
    else if (turno == false){
        int (TableroInfo)[8][8] = tablero.TableroInfoPARTES(i, j);
    
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
               cout << TableroInfo[i][j] << "I";
           }
           cout << std::endl;
          cout << "----------------" <<std::endl;
        }

        bool validar_jugada = false;

        while (validar_jugada == false){

        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                if (j==0 && i==0){
                    cout << "De la fila de la ficha que quiere mover(UN SOLO DIJITO DEL 1 AL 8:"<<std::endl;
                    cin>>_jugada[i][j];
                }
                else if(j==1 && i == 0){
                    cout << "De la columna de la ficha que quiere mover(UN SOLO DIJITO DEL 1 AL 8:"<<std::endl;
                    cin>>_jugada[i][j];
                }
                if (j==0 && i==1){
                    cout << "De la fila de la posicion a la que la quiere mover(UN SOLO DIJITO DEL 1 AL 8:"<<std::endl;
                    cin>>_jugada[i][j];
                }
                else if(j==1 && i == 1){
                    cout << "De la columna de la posicion a la que la quiere mover (UN SOLO DIJITO DEL 1 AL 8):"<<std::endl;
                    cin>>_jugada[i][j];
                }
            }
        }
        if (_jugada[0][0] >= 0 && _jugada[0][0] < 8 &&
            _jugada[0][1] >= 0 && _jugada[0][1] < 8 &&
            _jugada[1][0] >= 0 && _jugada[1][0] < 8 &&
            _jugada[1][1] >= 0 && _jugada[1][1] < 8) {
            
            validar_jugada = true;
            }
        else{
            validar_jugada = false;
        }
        }

        jugadorM.setjugada(_jugada[2][2]){}


        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (i == _jugada[0][0] && j == _jugada[0][1]){
                    int ficha_mover = tablero.TableroInfoPARTES(i, j);
                    int x1 = _jugada[0][0];
                    int y1 = _jugada[0][1];
                }
                else if (i == jugada[1][0] && j == jugada[1][1]){
                    int ficha_mover_ubicacion = tablero.TableroInfoPARTES(i, j);
                    int x2 = _jugada[1][0];
                    int y2 = _jugada[1][1];
                }
            }
        }
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                nuevaConfiguracion[i][j] = tablero.TableroInfoPARTES(i, j);
            }
        }
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                if (i == x1 && j == y1){
                    nuevaConfiguracion[i][j] = ficha_mover_ubicacion;
                }
                else if(i == x2 && j == y2){
                    nuevaConfiguracion[i][j] = ficha_mover;  
                }
            }
        }
        tablero.setTableroInfo(nuevaConfiguracion[8][8]);
    }
}