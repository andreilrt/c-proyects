#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int numero1 = 0;
	int numero2 = 0;
	int numeros_pares = 0;
	cout<<"Ingrese el primer numero: ";
	cin>>numero1;
	cout<<"Ingrese el segundo numero: ";
	cin>>numero2;
	if (numero1<=numero2){
		cout<<"Datos invalidos";
		exit(0);
	}
	else{
		while(numero1>=numero2){
			cout<<numero1<<"\t";
			if (numero1%2==0){
				numeros_pares=numeros_pares+1;
			}
			numero1 = numero1 - 1;
		}
		cout<<endl<<"Hay "<<numeros_pares<<" numeros pares.";
	}
	return 0;
}



