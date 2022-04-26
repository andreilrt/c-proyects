#include <iostream>
#include <string>

using namespace std;

double arreglo[100];
int columna=0;

void llenar_arreglo(){
	cout<<"¿Cuantos numeros va a digitar: ";
	double numero=0;
	cout<<"Digite numero para columnas: ";
	cin>>numero;
	columna = numero;
	int contador=0;
	while(contador<columna){
		cout<<"Digite numero para la posicion "<<contador<<": ";
		cin>>numero;
		arreglo[contador]=numero;
		contador++;
	}
	/*
	for(int contador=0; contador<columna;contador++){
		arreglo[contador]=pedir_numero();	
		contador++;
	}
	*/
}
void mostrar_arreglo(){
	int indice=0;
	while(indice<columna){
		cout<<arreglo[indice]<<"\t";
		indice++;
		/*
	for(int indice=0;indice<col;indice++){
			cout<<arreglo[indice];
	}
	*/
	}
}
void suma_numeros(){
	double sumatotal=0;
	for(int contador=0;contador<columna;contador++){
		sumatotal=sumatotal+arreglo[contador];
	}
	cout<<endl<<"La suma de los numeros es: "<<sumatotal;
}

void suma_pares(){
	double sumapares=0;
	for(int index=0;index<columna;index++){
		if((int)arreglo[index]%2==0){
			sumapares=sumapares+arreglo[index];
		}
	}
	cout<<endl<<"La suma de los numeros pares es: "<<sumapares;
}

void suma_impares(){
	double sumaimpares=0;
	for(int index=0;index<columna;index++){
		if((int)arreglo[index]%2!=0){
			sumaimpares+=arreglo[index];
		}
	}
	cout<<endl<<"La suma de los numeros impares es: "<<sumaimpares;
}

int main() {
	llenar_arreglo();
	mostrar_arreglo();
	suma_numeros();
	suma_pares();
	suma_impares();
	return 0;
}
	
	

	

