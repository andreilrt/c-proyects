#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int Altura=0;
	cout<<"Ingresa tu altura: ";cin>>Altura;
	if(Altura<=150){
		cout<<"Persona de altura baja";
	}
	else{
		if(Altura<=170){
			cout<<"Persona de altura media";
		}
		else{
			cout<<"Persona de altura alta";
		}
	}
	return 0;
}



