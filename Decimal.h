#ifndef DECIMAL_H
#define DECIMAL_H
#include <string>
#include "Numero.h"
using namespace std;

class Decimal : public Numero{
    public:
        Decimal();
        Decimal(string);
        bool Validacion(string);
        int Convertir(string);
        ~Decimal();
};
#endif