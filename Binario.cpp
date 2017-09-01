#include "Binario.h"
#include <string>
using namespace std;

Binario::Binario(){

}

bool Binario::Validacion(){
	for (int i = 0; i < Numero.size()-1; ++i){
		if (Numero[i] != '1' || Numero[i] != '0'){
			return false;
		}else{
			return true;
		}
		return true;
	}//for()
}