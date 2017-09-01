#include "Numero.h"
#include <string>
using namespace std;
Numero::Numero(){

}

Numero::Numero(string PNumero){
    this->numero = PNumero;
}

void Numero::setNumero(string pNumero){
   this-> numero = pNumero;
}

string Numero::getNumero(){
   return numero;
}
bool Numero::Validacion(string numero){

}
int Numero::Convertir(string numero){

}

Numero::~Numero(){

}
