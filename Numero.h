#ifndef NUMERO_H
#define NUMERO_H

#include <string>
using namespace std;

class Numero{
    protected:
        string numero;
    public:
        Numero();
        Numero(string);
        string getNumero();
        void setNumero(string);
        virtual bool Validacion(string);
        virtual int Convertir(string);
        virtual ~Numero();
};
#endif