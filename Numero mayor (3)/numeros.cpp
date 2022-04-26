#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int A=0;
	int B=0;
	int C=0;
	int M=0;
	cout<<"Ingrese el primer numero: ";cin>>A;
	cout<<"Ingrese el segundo numero: ";cin>>B;
	cout<<"Ingrese el tercer numero: ";cin>>C;
	if(A>B){
		M=A;
	}
	else{
		M=B;
	}
	if(M>C){
		cout<<"El numero mayor es: "<<M;
	}
	else{
		M=C;
		cout<<"El numero mayor es: "<<M;
	}
	return 0;
}

