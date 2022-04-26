#include <iostream>
using namespace std;

double arreglo[100][100];

int f=0;
int c=0;

void pedir_tamano(){
	cout<<"Ingrese el numero de filas: ";
	cin>>f;
	cout<<"Ingrese el numero de columnas: ";
	cin>>c;
}

void llenar_arreglo(){
	cout<<endl;
	for(int filas=0;filas<f;filas++){
		for(int columnas=0;columnas<c;columnas++){
			cout<<"Digite el numero para la posicion "<<filas<<" "<<columnas<<": "<<endl;
			cin>>arreglo[filas][columnas];
		}
	}
}

void mostrar_arreglo(){
	cout<<endl;
	for(int filas=0;filas<f;filas++){
		for(int columnas=0;columnas<c;columnas++){
			cout<<arreglo[filas][columnas]<<"\t";
		}
		cout<<"\n\n";
	}
}

int main(int argc, char** argv) {
	pedir_tamano();
	llenar_arreglo();
	mostrar_arreglo();

	return 0;
}

