#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int N1=0;
	int N2=0;
	int Producto=0;
	int mcd=0;
	int mcm=0;
	int mayor=0;
	int menor=0;
	
	cout<<"Ingrese un numero: ";cin>>N1;
	cout<<"Ingrese un numero: ";cin>>N2;
	if(N1<N2){
		mayor=N2;
		menor=N1;
	}
	else{
		mayor=N1;
		menor=N2;	
	}
	mcm=(N1*N2)/mcd;
	cout<<"El mcm es: "<<mcm;

	return 0;
}

