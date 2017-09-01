#include "Decimal.h"
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

Decimal::Decimal(){

}
Decimal::Decimal(string PNumero){
    this->numero = PNumero;
}

bool Decimal::Validacion(string numero){
	for (int i = 0; i < numero.size()-1; ++i){
		if (numero[i] != 'a' || numero[i] != 'b' || numero[i] != 'c' || numero[i] != 'd' || numero[i] != 'e' || numero[i] != 'f' || numero[i] != 'g' || numero[i] != 'h' || numero[i] != 'i' || numero[i] != 'j' || numero[i] != 'k'){
			return false;
		}else{
			return true;
		}
		return true;
	}//for()
}

int Decimal::Convertir(string num){
	int numeroretornado;
	numeroretornado = stoi(num);
	return numeroretornado;
}

Decimal::~Decimal(){

}