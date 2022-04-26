#include <iostream>
#include<string.h>
using namespace std;

const int a = 100;
char cadena[a];
int tamano = 0;

void mensaje_inicio(){
	cout<<"Este programa cambia mayusculas por minusculas y viceversa :)"<<endl;
}

void ingresar_nombre(){
  	cout<<"Cual es tu nombre???"<<endl;
  	cin>>cadena;
 	tamano = strlen(cadena);
    cout<<"Tu nombre tiene "<<tamano<<" letras"<<endl;
}

bool validar(){
	int c = 0;
	for(int numero = 0; numero<tamano ; numero++){
		if(cadena[numero]>='A'){
			if(cadena[numero]<='Z'){
				c++;
			}
		}
		if(cadena[numero]>='a'){
			if(cadena[numero]<='z'){
				c++;
			}
		}
	}
	if(c==tamano){
		return false;
	}
	else{
		cout<<"Tu nombre tiene algun dato invalido"<<endl;
		cout<<"Intenta otra vez"<<endl<<endl;
		return true;
	}
}

void conversion(){
	bool control = true;
	for(int r = 0 ; r<tamano ; r++){
		if(cadena[r]>='A'){
			if(cadena[r]<='Z'){
				cadena[r] += 32;
				control = false;
			}
		}
		if(control){
			if(cadena[r]>='a'){
				if(cadena[r]<='z'){
					cadena[r] -= 32;
				}
			}
		}
		control = true;
	}
}

void mostrar_resultado(){
	for(int r = 0 ; r<tamano ; r++){
		cout<<cadena[r];
	}
	cout<<endl;
}

bool recurrente(){
	string r = "si";
	cout<<"Ingrese 'si' para finalizar el programa: ";
	cin>>r;
	if(r=="si"){
		cout<<"Gracias por visitarnos"<<endl;
		return false;
	}
	else{
		cout<<endl;
		return true;
	}
}

int main(int argc, char** argv) {
	bool control = true;
	bool r = true;
	while(r){
		mensaje_inicio();
		while(control){
			ingresar_nombre();
			control = validar();
		}
		control = true;
		conversion();
		mostrar_resultado();
		r = recurrente();
	}
	return 0;
}

