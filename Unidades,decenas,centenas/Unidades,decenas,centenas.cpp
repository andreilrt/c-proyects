#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int Numero=0;
	int u=0;
	int d=0;
	int c=0;
	
	cout<<"Ingrese un numero de 3 cifras: ";cin>>Numero;
	if(Numero<100){
		cout<<"Dato Invalido"<<endl;
		return 0;
	}
	if(Numero>999){
		cout<<"Dato Invalido"<<endl;
		return 0;
	}
	u=Numero%10;
	Numero=Numero/10;
	d=Numero%10;
	Numero=Numero/10;
	c=Numero%1000;
	Numero=Numero/10;
	cout<<"Las unidades de su numero son "<<u<<endl;
	cout<<"Las decenas de su numero son "<<d<<endl;
	cout<<"Las centenas de su numero son "<<c<<endl;
	return 0;
}

