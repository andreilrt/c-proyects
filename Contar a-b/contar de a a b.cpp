#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int a = 0;
	int b = 0;
	cout<<"Ingrese el primer numero"<<endl;
	cin>>a;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>b;
	if(a>=b){
		cout<<"Ingreso los valores de manera incorrecta";
		exit(0);
	}
	else{
		while(a<=b){
			cout<<a<<"\t";
			a++;
		}
	}
	cout<<"\nProceso terminado";
	return 0;
}



