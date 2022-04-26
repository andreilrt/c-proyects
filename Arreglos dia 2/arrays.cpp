#include <iostream>
using namespace std;

void Evaluar_caracter(){
	char caracter = ' ';
	int valor = 0;
	cout<<"Ingrese su caracter: ";
	cin>>caracter;
	valor = caracter;
	cout<<"El valor en el codigo ASCCI es: "<<valor;
	cout<<endl;
	if(valor<0){
		cout<<"Dato Invalido"<<endl;
	}
	if(valor>255){
		cout<<"Dato Invalido"<<endl;
	}
	if(valor>47){
		if(valor<=57){
			cout<<"El caracter es un numero";
		}
	}
	if(valor>64){
		if(valor<=90){
			cout<<"El caracter es una letra mayuscula";
		}
	}
	if(valor>96){
		if(valor<=122){
			cout<<"El caracter es una letra minuscula";
	    }
	}
	if(valor>=0){
		if(valor<=47){
			cout<<"Es un caracter especial";
	    }
	}
	if(valor>=58){
		if(valor<=64){
			cout<<"Es un caracter especial";
	    }
	}
	if(valor>=91){
		if(valor<=96){
			cout<<"Es un caracter especial";
	    }
	}
	if(valor>=123){
		if(valor<=163){
			cout<<"Es un caracter especial";
	    }
	}
	if(valor>=166){
		if(valor<=255){
			cout<<"Es un caracter especial";
	    }
	}
	cout<<endl;
}

void Convertir_caracter(){
	char caracter = ' ';
	int valor = 0;
	cout<<"Ingrese su caracter: ";
	cin>>caracter;
	valor = caracter;
	cout<<endl;
	if(valor<0){
		cout<<"Dato Invalido"<<endl;
	}
	if(valor>255){
		cout<<"Dato Invalido"<<endl;
	}
	if(valor>64){
		if(valor<=90){
			valor = valor + 32;
		}
	}
	if(valor>96){
		if(valor<=122){
			valor = valor - 32;
	    }
	}
	caracter = valor;
	cout<<caracter<<endl;
	
}
int main(int argc, char** argv) {
	Evaluar_caracter();
	Convertir_caracter();
	return 0;
}

