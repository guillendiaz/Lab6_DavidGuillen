#include <iostream>
#include <string>
#include <vector>
#include "Numero.h"
#include "Binario.h"
//#include "Hexadecimal.h"
//#include "Octal.h"
//#include "Decimal.h"
using namespace std;

int Menu();
//Se ingresa al Menu()
int MenuO();
//Se ingresa al MenuO()
int main(){
	int opcion;
	vector<Numero> numeros;
	do{
		switch(opcion=Menu()){
			case 1:{
				string num;
				cout<<"Ingrese Numero: ";
				cin>>num;
				if (num[num.size()-1] == 'b'){
					Binario* b = new Binario();
					if (b->Validacion(num) == false){
						Binario numero(num);
						numeros.push_back(numero);
					}else{
						cout<<"Numero No es Binario"<<endl;
					}
				}else if (num[0] == '0' && (num[1] == 'c' || num[1] == 'C')){
					//Octal numero(num);
					//numeros.push_back(numero);
				}else if (num[0] == '0' && (num[1] == 'x' || num[1] == 'X')){
					//Hexadecimal numero(num);
					//numeros.push_back(numero);
				}else{

				}//if/else
			}	
				break;
			case 2:{
				int OpcionOperador;
				do{
					switch(OpcionOperador = MenuO()){
						case 1:{
							int pos1, pos2, num1, num2;
							cout<<"Ingrese Numero 1: ";
							cin>>pos1;
							cout<<endl;
							cout<<"Ingrese Numero 2: ";
							cin>>pos2;

							if (numeros.at(pos1) ){
								
							}
						}
							break;

						case 2:{

						}
							break;

						case 3:{

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
