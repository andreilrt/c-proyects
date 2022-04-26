#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int numero1=0;
	int numero2=0;
	int pares=0;
	int impares=0;
	int c=0;
	cout<<"Ingrese un numero: ";
	cin>>numero1;
	cout<<"Ingrese un numero: ";
	cin>>numero2;
	if(numero1==numero2){
		cout<<"\nProceso Terminado";
		return 0;
	}
	if(numero1<numero2){
		while(numero1<=numero2){
			cout<<endl;
			cout<<numero1;
			if(numero1%2==0){
				pares=pares+numero1;
			}
			else{
				impares=impares+numero1;
			}
			c=c+1;
			numero1=numero1+1;
		}
	}
	else{
		while(numero2<=numero1){
			cout<<endl;
			cout<<numero2;
			if(numero2%2==0){
				pares=pares+numero2;
			}
			else{
				impares=impares+numero2;
			}
			c=c+1;
			numero2=numero2+1;
		}	
	}
	cout<<endl;
	cout<<"La suma de los numeros pares es: "<<pares<<"\n";
	cout<<"La suma de los numeros impares es: "<<impares<<"\n";
	cout<<"Hay "<<c<<" numeros\n";
	cout<<"Gracias :)";
	return 0;
}

