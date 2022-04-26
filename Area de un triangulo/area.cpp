#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	float A=0;
	float B=0;
	float C=0;
	float P=0;
	float Area=0;
	cout<<"Hallar el area de un triangulo"<<endl;
	cout<<"Ingresa el lado A del triangulo: ";cin>>A;
	if(A<=0){
		cout<<"Dato Invalido"<<endl;
		return 0;
	}
	cout<<"Ingresa el lado B del triangulo: ";cin>>B;
	if(B<=0){
		cout<<"Dato Invalido"<<endl;
		return 0;
	}
	cout<<"Ingresa el lado C del triangulo: ";cin>>C;
	if(C<=0){
		cout<<"Dato Invalido"<<endl;
		return 0;
	}
	P=(A+B+C)/2;
	Area=sqrt(P*(P-A)*(P-B)*(P-C));
	cout<<"El area del triangulo es: "<<Area<<endl;
	

	return 0;
}

