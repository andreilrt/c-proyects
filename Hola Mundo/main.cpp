#include <iostream> //Libreria
#include <string>
using namespace std;


int main(int argc, char** argv) {
	int magia=0;
	char A[]="Ingresa tu nombre: ";
	string nombre="";
	cout<<A;cin>>nombre;
	cout<<"Hola "+nombre+"!"<<endl;
	cout<<"Ingresa un caracter: ";
	char B;cin>>B;
	magia=B;cout<<magia;
	return 0;
}




