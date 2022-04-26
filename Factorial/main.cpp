#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int numero=0;
	int f=1;
	int c=1;
	cout<<"Ingrese un numero: ";cin>>numero;
	if (numero!=0){
		while(c<=numero){
			f = f*c;
			c=c+1;
			cout<<f<<endl;
		}
	}
	cout<<endl<<"Factorial de "<<numero<<" = "<<f<<endl;
	return 0;
}
