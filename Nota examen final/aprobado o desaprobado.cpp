#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	float nota = 0;
	float nota1 = 0;
	float nota2 = 0;
	float nota3 = 0;
	cout<<"Este programa verifica si un estudiante aprueba o no."
	<<endl;
	cout<<"Digite la nota del primer examen: ";
	cin>>nota1;
	if(nota1<0){
		cout<<"Dato invalido."<<endl;
		return 0;
	}
	cout<<"Digite la nota del segundo examen: ";
	cin>>nota2;
	if(nota2<0){
		cout<<"Dato invalido."<<endl;
		return 0;
	}
	cout<<"Digite la nota del tercer examen: ";
	cin>>nota3;
	if(nota3<0){
		cout<<"Dato invalido."<<endl;
		return 0;
	}
	nota = nota1*0.35+nota2*0.35+nota3*0.3;
	if(nota>=3.0){
		cout<<"Aprobado";
	}
	else{
		cout<<"Reprobado";
	}

	return 0;
}

