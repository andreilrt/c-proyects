#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int cantidad = 0;
	int costo = 0;
	cout<<"Este programa determina el costo según la cantidad de lapices."
	<<endl;
	cout<<"Digite la cantidad de lapices: ";
	cin>>cantidad;
	if(cantidad<=0){
		cout<<"Dato invalido."<<endl;
		return 0;
	}
	if(cantidad>=1000){
		costo = cantidad*85;
	}
	else{
		costo = cantidad*90;
	}
	cout<<"El costo de "<<cantidad<<" lapices es de "<<costo;

	return 0;
}

