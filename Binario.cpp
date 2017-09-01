#include "Binario.h"
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

Binario::Binario(){

}
Binario::Binario(string PNumero){
    this->numero = PNumero;
}

bool Binario::Validacion(string numero){
	numero.erase(numero.size()-1);
	for (int i = 0; i < numero.size()-1; ++i){
		if (numero[i] != '1' || numero[i] != '0'){
			return false;
		}else{
			return true;
		}
		return true;
	}//for()
}

int Binario::Convertir(string num){

	int numero, numeroretornado=0, count1=0,count2=0;
	numero = stoi(num);
	while(numero>=10){
		count2=0;
		while(numero>=10){
			numero = numero - 10;
			count2++;
		}
		numeroretornado = numeroretornado + numero * pow(2,count1);
		count1++;
		numero = count2;
	}
	numeroretornado = numeroretornado + count2 * pow(2,count1);
	return numeroretornado;
}

Binario::~Binario(){

}