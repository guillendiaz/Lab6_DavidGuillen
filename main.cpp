#include <iostream>
#include <typeinfo>
#include <string>
#include <vector>
#include "Numero.h"
#include "Binario.h"
#include "Hexadecimal.h"
#include "Octal.h"
#include "Decimal.h"
#include <iomanip>
using namespace std;

int Menu();
//Se ingresa al Menu()
int MenuO();
//Se ingresa al MenuO()
string toBinary(int);
string toOctal(int);
string toHex(int);
int main(){
	int opcion;
	vector<Numero*> numeros;
	do{
		switch(opcion=Menu()){
			case 1:{
				string num;
				cout<<"Ingrese Numero: ";
				cin>>num;
				if (num[num.size()-1] == 'b'){
					Binario* b = new Binario(num);
					if (b->Validacion(b->getNumero()) == false){
						numeros.push_back(b);
					}else{
						cout<<"Numero No es Binario"<<endl;
					}
				}else if (num[0] == '0' && (num[1] == 'c' || num[1] == 'C')){
					Octal* b = new Octal(num);
					if (b->Validacion(b->getNumero()) == false){
						numeros.push_back(b);
					}else{
						cout<<"Numero No es Octal"<<endl;
					}
				}else if (num[0] == '0' && (num[1] == 'x' || num[1] == 'X')){
					Hexadecimal* b = new Hexadecimal(num);
					if (b->Validacion(b->getNumero()) == false){
						numeros.push_back(b);
					}else{
						cout<<"Numero No es Hexadecimal"<<endl;
					}
				}else{
					Decimal* b = new Decimal(num);
					if (b->Validacion(b->getNumero()) == false){
						numeros.push_back(b);
					}else{
						cout<<"Numero No es Decimal"<<endl;
					}
				}//if/else
			}	
				break;
			case 2:{
				int OpcionOperador;
				do{
					switch(OpcionOperador = MenuO()){
						case 1:{
							int pos1, pos2, num1, num2;
							int result=0;
							cout<<"Ingrese Numero 1: ";
							cin>>pos1;
							cout<<endl;
							cout<<"Ingrese Numero 2: ";
							cin>>pos2;
							if (dynamic_cast<Binario*>(numeros.at(pos1))){
								num1 = numeros.at(pos1)->Convertir(numeros.at(pos1)->getNumero());
							}else if (dynamic_cast<Hexadecimal*>(numeros.at(pos1))){
								num1 = numeros.at(pos1)->Convertir(numeros.at(pos1)->getNumero());
							}else if (dynamic_cast<Octal*>(numeros.at(pos1))){
								num1 = numeros.at(pos1)->Convertir(numeros.at(pos1)->getNumero());
							}else if (dynamic_cast<Decimal*>(numeros.at(pos1))){
								num1 = numeros.at(pos1)->Convertir(numeros.at(pos1)->getNumero());
							}

							if (dynamic_cast<Binario*>(numeros.at(pos2))){
								num2 = numeros.at(pos2)->Convertir(numeros.at(pos2)->getNumero());
							}else if (dynamic_cast<Hexadecimal*>(numeros.at(pos2))){
								num2 = numeros.at(pos2)->Convertir(numeros.at(pos2)->getNumero());
							}else if (dynamic_cast<Octal*>(numeros.at(pos2))){
								num2 = numeros.at(pos2)->Convertir(numeros.at(pos2)->getNumero());
							}else if (dynamic_cast<Decimal*>(numeros.at(pos2))){
								num2 = numeros.at(pos2)->Convertir(numeros.at(pos2)->getNumero());
							}
							result = num1 + num2;
							cout<<"Suma: "<<num1 <<" + " <<num2 << " = " <<result<<endl;
							cout<<"Resultado: "<<endl
								<<"Hexadecimal "<<toHex(result)<<endl
								<<"Binario "<<toBinary(result)<<endl
								<<"Octal "<<toOctal(result)<<endl
								<<"Decimal "<<result<<endl;
						}
							break;

						case 2:{
							int pos1, pos2, num1, num2;
							int result=0;
							cout<<"Ingrese Numero 1: ";
							cin>>pos1;
							cout<<endl;
							cout<<"Ingrese Numero 2: ";
							cin>>pos2;
							if (dynamic_cast<Binario*>(numeros.at(pos1))){
								num1 = numeros.at(pos1)->Convertir(numeros.at(pos1)->getNumero());
							}else if (dynamic_cast<Hexadecimal*>(numeros.at(pos1))){
								num1 = numeros.at(pos1)->Convertir(numeros.at(pos1)->getNumero());
							}else if (dynamic_cast<Octal*>(numeros.at(pos1))){
								num1 = numeros.at(pos1)->Convertir(numeros.at(pos1)->getNumero());
							}else if (dynamic_cast<Decimal*>(numeros.at(pos1))){
								num1 = numeros.at(pos1)->Convertir(numeros.at(pos1)->getNumero());
							}

							if (dynamic_cast<Binario*>(numeros.at(pos2))){
								num2 = numeros.at(pos2)->Convertir(numeros.at(pos2)->getNumero());
							}else if (dynamic_cast<Hexadecimal*>(numeros.at(pos2))){
								num2 = numeros.at(pos2)->Convertir(numeros.at(pos2)->getNumero());
							}else if (dynamic_cast<Octal*>(numeros.at(pos2))){
								num2 = numeros.at(pos2)->Convertir(numeros.at(pos2)->getNumero());
							}else if (dynamic_cast<Decimal*>(numeros.at(pos2))){
								num2 = numeros.at(pos2)->Convertir(numeros.at(pos2)->getNumero());
							}
							result = num1 - num2;
							cout<<"Resta: "<<num1 <<" - " <<num2 << " = " <<result<<endl;
							cout<<"Resultado: "<<endl
								<<"Hexadecimal "<<toHex(result)<<endl
								<<"Binario "<<toBinary(result)<<endl
								<<"Octal "<<toOctal(result)<<endl
								<<"Decimal "<<result<<endl;
						}
							break;

						case 3:{
							int pos1, pos2, num1, num2;
							int result=0;
							cout<<"Ingrese Numero 1: ";
							cin>>pos1;
							cout<<endl;
							cout<<"Ingrese Numero 2: ";
							cin>>pos2;
							if (dynamic_cast<Binario*>(numeros.at(pos1))){
								num1 = numeros.at(pos1)->Convertir(numeros.at(pos1)->getNumero());
							}else if (dynamic_cast<Hexadecimal*>(numeros.at(pos1))){
								num1 = numeros.at(pos1)->Convertir(numeros.at(pos1)->getNumero());
							}else if (dynamic_cast<Octal*>(numeros.at(pos1))){
								num1 = numeros.at(pos1)->Convertir(numeros.at(pos1)->getNumero());
							}else if (dynamic_cast<Decimal*>(numeros.at(pos1))){
								num1 = numeros.at(pos1)->Convertir(numeros.at(pos1)->getNumero());
							}

							if (dynamic_cast<Binario*>(numeros.at(pos2))){
								num2 = numeros.at(pos2)->Convertir(numeros.at(pos2)->getNumero());
							}else if (dynamic_cast<Hexadecimal*>(numeros.at(pos2))){
								num2 = numeros.at(pos2)->Convertir(numeros.at(pos2)->getNumero());
							}else if (dynamic_cast<Octal*>(numeros.at(pos2))){
								num2 = numeros.at(pos2)->Convertir(numeros.at(pos2)->getNumero());
							}else if (dynamic_cast<Decimal*>(numeros.at(pos2))){
								num2 = numeros.at(pos2)->Convertir(numeros.at(pos2)->getNumero());
							}
							result = num1 * num2;
							cout<<"Multiplicacion: "<<num1 <<" * " <<num2 << " = " <<result<<endl;
							cout<<"Resultado: "<<endl
								<<"Hexadecimal "<<toHex(result)<<endl
								<<"Binario "<<toBinary(result)<<endl
								<<"Octal "<<toOctal(result)<<endl
								<<"Decimal "<<result<<endl;
						}
							break;
					}//switch()2
						}
				while(OpcionOperador != 4);
			}
				break;
		}//switch()
	}while(opcion!=3);
	return 0;
}//main()

int Menu(){
	int opcion = 0;

	while(opcion == 0){
		cout<<"Ingrese Opcion :"<<endl
			<<"1. Ingresar Numero"<<endl
			<<"2. Operaciones"<<endl
			<<"3. Salir"<<endl;
		cin>>opcion;
		if(opcion < 1 || opcion > 3){
			cout<<"Valor Incorecto"<<endl;
			opcion = 0;
		}//if()

	}//while()

}//Menu()

int MenuO(){
	int opcion = 0;
	while(opcion == 0){
		cout<<"Ingrese Opcion :"<<endl
			<<"1. Suma"<<endl
			<<"2. Resta"<<endl
			<<"3. Multiplicacion"<<endl
			<<"4. Salir"<<endl;
		cin>>opcion;
		if(opcion < 1 || opcion > 4){
			cout<<"Valor Incorecto"<<endl;
			opcion = 0;
		}//if()
	}//while()
}//MenuO()

string toBinary(int n){
   	string r;
    while(n!=0) {
    	r=(n%2==0 ?"0":"1")+r; n/=2;
    }
    return r;
}
string toOctal(int n){
    string result;
   	stringstream ss;
    ss << std::oct << n;
    ss >> result;
    return result;
}
string toHex(int n){
    string result;
   	stringstream ss;
    ss << std::hex << n;
    ss >> result;
    return result;
}