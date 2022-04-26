#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int personas = 0;
	int costo = 0;
	cout<<"Bienvenido a la fragata!!!"<<endl;
	cout<<"Digite la cantidad de personas para calcular el costo: ";
	cin>>personas;
	if(personas<=0){
		cout<<"Dato invalido";
		return 0;
	}
	if(personas>200){
		if(personas<=300){
			costo=personas*85000;
		}
		else{
			costo=personas*75000;
		}
	}
	else{
		costo=personas*95000;
	}
	cout<<"El costo es de "<<costo;

	return 0;
}

