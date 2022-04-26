#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int s=0;
	int t=0;
	cout<<"Ingrese un numero para A: ";cin>>a;
	cout<<"Ingrese un numero para B: ";cin>>b;
	cout<<"Ingrese un numero para C: ";cin>>c;
	d=pow(b,2)-4*a*c;
	if(d<0){
		cout<<"No se puede realizar la operacion";
		exit(0);
	}
	else{
		if(a==0){
			cout<<"No se puede realizar la operacion";
		    exit(0);
		}
		else{
			s=(-b+sqrt(d))/2*a;
			t=(-b-sqrt(d))/2*a;
			cout<<"x1="<<s<<endl<<"x2="<<t;
		}
	}
	return 0;
}




