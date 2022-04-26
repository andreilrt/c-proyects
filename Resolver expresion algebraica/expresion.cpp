#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	float a=0;
	float b=0;
	float c=0;
	float d=0;
	cout<<"Ingresa un numero para A: ";cin>>a;
	cout<<"Ingresa un numero para B: ";cin>>b;
	cout<<"Ingresa un numero para C: ";cin>>c;
	if(c==0){
		cout<<"Dato Invalido";
		return 0;
	}
	cout<<"Ingresa un numero para D: ";cin>>d;
	float r1=a+b;
	float r2=pow(c,2);
	float r3=r1/r2;
	if(r3<0){
		cout<<"Dato Invalido";
		return 0;
	}
	r1=sqrt(r3);
	r2=c*d;
	r3=2*a;
	float r4=r2-r3;
	if(r4<0){
		cout<<"Dato Invalido";
		return 0;
	}
	r2=sqrt(r4);
	r3=2*a-5*b+4;
	if(r3==0){
		cout<<"Dato Invalido";
		return 0;
	}
	r4=a/r3;
	r3=c+r4;
	if(r3==0){
		cout<<"Dato Invalido";
		return 0;
	}
	r2=r2/r3;
	r3=4*c*d;
	float Resultado=r1-r2+r3;
	cout<<"El resultado de su operacion es "<<Resultado<<endl;	
	return 0;
}

