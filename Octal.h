#ifndef OCTAL_H
#define OCTAL_H
#include <string>
#include "Numero.h"
using namespace std;

class Octal : public Numero{
    public:
        Octal();
        Octal(string);
        bool Validacion(string);
        int Convertir(string);
        ~Octal();
};
#endif