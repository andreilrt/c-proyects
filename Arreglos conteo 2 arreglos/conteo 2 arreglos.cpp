#include <iostream>
#include <stdlib.h>
#include <cstdlib>      
#include <ctime> 

using namespace std;

const int fila = 7;
const int columna = 5;
int arreglo[columna];
int matriz[fila][columna];
int arreglo_veces[columna];

void mostrar_arreglo_bidimensional(){
    for(int filas=0;filas < fila; filas ++){
        for(int columnas =0; columnas < columna; columnas ++){
            cout << matriz[filas][columnas];
			cout<<"\t";
        }
        cout<<endl;
    }
    cout <<endl<< "Este arreglo tiene numeros aleatorios entre 5 y 103"<<endl<<endl;
}

int generarnumero5_103(){

    int nrand = 0;
    nrand = 5 + rand() % (103-5);
    return nrand;
}

void llenar_arreglo_bidimensional(){

    for(int filas=0; filas < fila; filas ++){
        for(int columnas = 0; columnas < columna; columnas ++){
            matriz[filas][columnas] = generarnumero5_103();
        }
    }
    mostrar_arreglo_bidimensional();
}

void mostrar_arreglo_unidimensional(){
	cout<<endl;
	for(int columnas = 0; columnas < columna; columnas ++){
		cout<<arreglo[columnas]<<"\t";
    }
	cout<<endl;
}

void llenar_arreglo_unidimensional(){
	for(int columnas = 0; columnas < columna; columnas ++){
		cout<<"Digite un numero para la posicion "<<columnas<<": ";
		cin>>arreglo[columnas];
    }
    mostrar_arreglo_unidimensional();
}

void mostrar_arreglo_veces(){
	cout<<endl;
	for(int columnas = 0; columnas < columna; columnas ++){
		cout<<arreglo_veces[columnas]<<"\t";
    }
	cout<<endl;
}

void mostrar_resultado(){
	cout<<endl;
	for(int c = 0; c<columna ; c++){
		cout<<"El numero "<<arreglo[c]<<" se repite "<<arreglo_veces[c]<<" veces"<<endl;
	}
}

void identificar_valores(){
	int c = 0;
	for(int valor = 0; valor< columna ; valor ++){
		for(int filas=0; filas < fila; filas ++){
			for(int columnas = 0 ;columnas < columna ; columnas ++){
				if(arreglo[valor]==matriz[filas][columnas]){
					c++;
				}
			}
		}
		arreglo_veces[valor] = c;
		c = 0;
	}
	cout<<endl;
	mostrar_arreglo_veces();
}

int main(int argc, char** argv) {
	srand(time(NULL));
	llenar_arreglo_bidimensional();
	llenar_arreglo_unidimensional();
	identificar_valores();
	mostrar_resultado();
	return 0;
}

