#ifndef HEXADECIMAL_H
#define HEXADECIMAL_H
#include <string>
#include "Numero.h"
using namespace std;

class Hexadecimal : public Numero{
    public:
        Hexadecimal();
        Hexadecimal(string);
        bool Validacion(string);
        int Convertir(string);
        ~Hexadecimal();
};
#endif