#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <windows.h>
using namespace std;

const int f=9;
const int c=9;
char arreglo[f][c];
char vocalesM[5]={'A','E','I','O','U'};
char vocalesm[5]={'a','e','i','o','u'};
int contador[5]={0,0,0,0,0};
int Opcion= 0;

void Menu(){
	system("cls");
	cout<<"***Menu***"<<endl
	<<endl<<"0. Salir"
	<<endl<<"1. Mayusculas"
	<<endl<<"2. Minusculas"<<endl<<endl;
	cout<<"Ingrese su opcion: ";
	cin>>Opcion;
	system("pause");
}

bool Validar_Rangos(){
	if(Opcion < 0){
		cout<<"Dato Invalido"<<endl<<"Pruebe otra vez ;)"<<endl<<endl;
		return true;
	}
	if(Opcion > 2){
		cout<<"Dato Invalido"<<endl<<"Pruebe otra vez ;)"<<endl<<endl;
		return true;
	}
	if(Opcion ==0){
		cout<<"Proceso Terminado"<<endl<<endl;
		exit (0);
	}
	else{
		cout<<"Dato Invalido"<<endl<<"Pruebe otra vez ;)"<<endl<<endl;
		return true;
	}
}

char letra_random(){
	int Letra = 0;
	char Caracter = ' ';
	if(Opcion==1){
		Letra = 65 + rand()%(90-65+1);
		Caracter = Letra;
	}
	if(Opcion==2){
		Letra = 97 + rand()%(122-97+1);
		Caracter = Letra;
	}
	return Caracter;
}

void mostrar_arreglo(){
	cout<<endl;
	for(int filas=0;filas<f;filas++){
		for(int columnas=0;columnas<c;columnas++){
			cout<<arreglo[filas][columnas]<<"\t";
		}
		cout<<"\n\n";
	}
	system("pause");
}

void llenar_arreglo(){
	cout<<endl;
	for(int filas=0;filas<f;filas++){
		for(int columnas=0;columnas<c;columnas++){
			arreglo[filas][columnas] = letra_random();
		}
	}
	mostrar_arreglo();
}

void mostrar_vocales(){
	if(Opcion==1){
		for(int v =0; v<5; v++ ){
		cout<<"Hay "<<contador[v]<<" "<<vocalesM[v]<<" dentro del arreglo";
		cout<<endl;
		}
	}
	if(Opcion==2){
		for(int v =0; v<5; v++ ){
		cout<<"Hay "<<contador[v]<<" "<<vocalesm[v]<<" dentro del arreglo";
		cout<<endl;
		}
	}
	system("pause");
}

void Contar_vocales(){
	int cont = 0;
	for(int v = 0; v<5;v++){
		for(int filas=0;filas<f;filas++){
			for(int columnas=0;columnas<c;columnas++){
					if(Opcion==1){
						if(arreglo[filas][columnas]==vocalesM[v]){
						contador[v]++;
						}
					}
					if(Opcion==2){
						if(arreglo[filas][columnas]==vocalesm[v]){
						contador[v]++;
						}	
					}
			}
		}
	}
}

bool recurrente(){
	system("cls");
	string r = "si";
	cout<<endl;
	cout<<"Quiere terminar el programa???"<<endl;
	cout<<"Digite 'si' para finalizar"<<endl;
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

void Proceso(){
	bool Control = true;
	while(Control){
		cout<<"Este programa genera caracteres aleatorios y dice el numero de vocales"<<endl<<endl;
		Menu();
		Validar_Rangos();
		srand(time(NULL));
		llenar_arreglo();
		Contar_vocales();
		mostrar_vocales();
		Control = recurrente();
}
	}

int main(int argc, char** argv) {
	Proceso();
	return 0;
}

