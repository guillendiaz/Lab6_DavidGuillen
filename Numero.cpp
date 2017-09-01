#include "Numero.h"
#include <string>
using namespace std;

Numero::Numero(string numero){
    this->numero=numero;
}
Numero::Numero(){

}
void Numero::setNumero(string pNumero){
   this-> numero = pNumero;
}
string Numero::getNumero(){
   return numero;
}


