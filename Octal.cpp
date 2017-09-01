#include "Octal.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
using namespace std;

Octal::Octal(){

}
Octal::Octal(string PNumero){
    this->numero = PNumero;
}

bool Octal::Validacion(string numero){
	this->numero.erase(0,2);
	for (int i = 0; i < numero.size()-1; ++i){
		if (numero[i]<0 || numero[i]>7){
			return false;
		}else{
			return true;
		}
		return true;
	}//for()
}

int Octal::Convertir(string pnumero){
	cout<<pnumero<<endl;
	int numero = stoi(pnumero);
	int numeroretornado = 0, i = 0, rem;
    while (numero != 0){
        rem = numero % 10;
        numero /= 10;
        numeroretornado += rem * pow(8, i);
        i++;
    }
    return numeroretornado;
}

Octal::~Octal(){

}