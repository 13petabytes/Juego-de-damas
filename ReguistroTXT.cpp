#include <fstream>
#include <string>
#include "RegistroTXT.h"

RegistroTXTTablero registro("archivo.txt");

registro.escribirTexto("Hola, este es un ejemplo.");
registro.escribirTexto("¡Cómo estás, archivo.txt?");

return 0;