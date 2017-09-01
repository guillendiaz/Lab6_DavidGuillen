#ifndef NUMERO_H
#define NUMERO_H

#include <string>
using namespace std;

class Numero{
    private:
        string numero;
    public:
        Numero(string);
        Numero();
        string getNumero();
        void setNumero(string);

};
#endif