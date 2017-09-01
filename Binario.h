#ifndef BINARIO_H
#define BINARIO_H
#include <string>
#include "Numero.h"
using namespace std;

class Binario : public Numero{
    public:
        Binario();
        Binario(string);
        bool Validacion(string);
        int Convertir(string);
        ~Binario();
};
#endif