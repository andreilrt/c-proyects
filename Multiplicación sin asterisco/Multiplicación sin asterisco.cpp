#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int a=0;
	int b=0;
	int c=0;
	cout<<"Ingrese un numero: ";cin>>a;
	cout<<"Ingrese un numero: ";cin>>b;
	c=a;
	while(c/b!=a){
		c=c+a;
	}
	cout<<endl<<c<<endl<<"Proceso Terminado";
	return 0;
}



