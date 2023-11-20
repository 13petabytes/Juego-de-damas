#ifndef TABLERO
#define TABLERO

class Tablero {
private:
    int TableroInfo[8][8] = {{0, 3, 0, 3, 0, 3, 0, 3},
                             {3, 0, 3, 0, 3, 0, 3, 0},
                             {0, 3, 0, 3, 0, 3, 0, 3},
                             {0, 0, 0, 0, 0, 0, 0, 0},
                             {0, 0, 0, 0, 0, 0, 0, 0},
                             {2, 0, 2, 0, 2, 0, 2, 0},
                             {0, 2, 0, 2, 0, 2, 0, 2},
                             {2, 0, 2, 0, 2, 0, 2, 0}};

public:
    Tablero();

    const int* getTableroInfo() const {
        return &TableroInfo[0][0];
    }

    void setTableroInfo(const int nuevaConfiguracion[8][8]) {
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                TableroInfo[i][j] = nuevaConfiguracion[i][j];
            }
        }
    }
};

#endif // TABLERO

