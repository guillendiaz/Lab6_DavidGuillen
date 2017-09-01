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
		if (numero[i] != 'a' || numero[i] != 'A' || numero[i] != 'c' || numero[i] != 'C' || numero[i] != 'd' || numero[i] != 'D' || numero[i] != 'e' || numero[i] != 'E' || numero[i] != 'f' || numero[i] != 'F'){
			return false;
		}else{
			return true;
		}
		return true;
	}//for()
}

int Octal::Convertir(string numero){
	int result;
	cout<<"sal:"<<numero<<endl;
	for (int i=0; i<numero.length(); i++) {
        if (numero[i]>=48 && numero[i]<=57)
        {
            result += (numero[i]-48)*pow(16,numero.length()-i-1);
        } else if (numero[i]>=65 && numero[i]<=70) {
            result += (numero[i]-55)*pow(16,numero.length( )-i-1);
        } else if (numero[i]>=97 && numero[i]<=102) {
            result += (numero[i]-87)*pow(16,numero.length()-i-1);
        }
    }
    return result;
}

Octal::~Octal(){

}