#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int a = 0;
	int c = 0;
	int r = 0;
	cout<<"Ingrese un numero: ";
	cin>>a;
	while(c<=1000){
		r = a*c;
		cout<<endl<<a<<"*"<<c<<"="<<r<<endl;
		c = c + 1;
	}
	cout<<"\nProceso Terminado :)";
	return 0;
}





