#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int Dia=0;
	cout<<"Ingresa un numero: ";cin>>Dia;
	if(Dia<1){
		cout<<"Proceso Terminado";
		exit(0);
	}
	else{
		if(Dia>7){
			cout<<"Proceso Terminado";
			exit(0);
		}
		else{
			if(Dia==1){
				cout<<"Lunes";
			}
			if(Dia==2){
				cout<<"Martes";
			}
			if(Dia==3){
				cout<<"Miercoles";
			}
			if(Dia==4){
				cout<<"Jueves";
			}
			if(Dia==5){
				cout<<"Viernes";
			}
			if(Dia==6){
				cout<<"Sabado";
			}
			if(Dia==7){
				cout<<"Domingo";
			}
			cout<<"\nProceso Terminado";
		}
	}
	return 0;
}



