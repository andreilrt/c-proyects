#include <iostream>
#include <stdlib.h>
#include <ctime> 

using namespace std;

const int T =100;
int arreglo[T][T];
int Tamano=0;
int Suma= 0;
int V=0;
int Suma1=0;
int Suma2=0;


void Ingresar_Tamano(){
	cout<<"Ingrese el tamano del cuadrado: ";
	cin>>Tamano;
}

int Random(){
	int random = 0;
    random = 123 + rand() % (245-123);
    return random;
}

void mostrar_arreglo(){
	cout<<endl;
	for(int fil = 0; fil<Tamano; fil++){
		for(int col = 0; col<Tamano; col++){
			cout<<arreglo[fil][col];
			cout<<"\t";
		}
		cout<<endl<<endl;
	}
	cout<<endl;	
}

void llenar_arreglo(){
	for(int fil = 0; fil<Tamano; fil++){
		for(int col = 0; col<Tamano; col++){
			arreglo[fil][col] = Random();
		}
	}
	mostrar_arreglo();
}

void Diagonal(){
	V=Tamano-1;
	for(int fil = 0; fil<Tamano; fil++){
		for(int col = 0; col<Tamano; col++){
			if(fil==col){
				Suma=Suma+arreglo[fil][V-col];
			}
		}
	}
	cout<<"La suma de la diagonal principal del arreglo bidimensional es: "<<Suma<<endl;
}

void Intercalado(){
	for(int fil = 0; fil<Tamano; fil++){
		for(int col = 0; col<Tamano; col++){
			if(fil%2!=0){
				if(col%2!=0){
					Suma1=Suma1+arreglo[fil][col];
				}
			}
			else{
				if(col%2==0){
					Suma1=Suma1+arreglo[fil][col];
				}
			}
			
		}
	}
	cout<<"La suma de las posiciones intercalados del arreglo bidimensional es: "<<Suma1<<endl;
}

void Primo(){
	for(int fil = 0; fil<Tamano; fil++){
		for(int col = 0; col<Tamano; col++){
			Suma2=Suma2+arreglo[fil][col];
		}
	}
	cout<<"La suma de todas las posiciones del arreglo bidimensional es: "<<Suma2<<endl;
	if(Suma2==0){
		cout<<"El numero no es primo";
	}
	if(Suma2==1){
		cout<<"El numero no es primo";
	}
	if(Suma2==4){
		cout<<"El numero no es primo";
	}
	for(int x = 2; x < Suma2/2 / 2; x++){
		if(Suma2% x == 0){
			cout<<"El numero no es primo";
		}
	}
	else{
		cout<<"El numero es primo";
	}	
}

int main(int argc, char** argv) {
	srand(time(NULL));
	Ingresar_Tamano();
	llenar_arreglo();
	Diagonal();
	Intercalado();
	Primo();
	return 0;
}

