#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	float Total=0;
	float Sub_total=0;
	float Precio=0;
	float IVA=0;
	int i=0;
	cout<<"Ingrese el precio del producto: ";cin>>Precio;
	for(int i=1;1<=10;i++){
		Sub_total=Sub_total+Precio;
	}
	IVA=Sub_total*0,19;
	Total=Sub_total+IVA;
	cout<<"Sub_total= "<<Sub_total;
	cout<<"IVA= "<<IVA;
	cout<<"Total= "<<Total;
	return 0;
}

