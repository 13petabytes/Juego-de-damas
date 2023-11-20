#include <iostream>
#include <fstream>
#include <string>
#include "Juego.h"
class RegistroTXTTablero {
private:
    std::ofstream archivo;
public:
    RegistroTXTTablero(const std::string& nombreArchivo) {
        archivo.open(nombreArchivo, std::ios::app);
        if (!archivo.is_open()) {
            std::cerr << "Error al abrir el archivo: " << nombreArchivo << std::endl;
        }
    }

    RegistroTXTTablero() {
        if (archivo.is_open()) {
            archivo.close();
        }
    }

    void escribirTexto(const std::string& texto) {
        if (archivo.is_open()) {
            archivo << texto << std::endl;
        } else {
            std::cerr << "El archivo no está abierto." << std::endl;
        }
    }
};
#endif