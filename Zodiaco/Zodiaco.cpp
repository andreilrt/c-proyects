#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv) {
	int mes = 0;
	int dia = 0;
	cout<<"Te decimos que signo eres con tu fecha de cumpleanos";
	cout<<"\nIngresa tu mes de cumpleanos en terminos de numeros: ";
	cin>>mes;
	if (mes>12){
		cout<<"\nDato fuera del rango";
		return 0;
	}
	else{
		cout<<"\nIngresa tu dia de cumpleanos: ";
		cin>>dia;
		if(dia>31){
			cout<<"\nDato fuera del rango";
			return 0;
		}
		else{
			cout<<endl;
			if(mes==1){
				if (dia>=21){
					cout<<"Tu signo es acuario";
				}
				else{
					cout<<"Tu signo es capricornio";
				}
			}
			if(mes==2){
				if (dia>29){
					cout<<"Dato fuera del rango";
				}
				else{
					if (dia>=19){
						cout<<"Tu signo es piscis";
					}
					else{
						cout<<"Tu signo es acuario";
					}	
				}
			}
			if(mes==3){
				if (dia>=21){
					cout<<"Tu signo es aries";
				}
				else{
					cout<<"Tu signo es piscis";
				}
			}
			if(mes==4){
				if (dia>30){
					cout<<"Dato fuera del rango";
				}
				else{
					if (dia>=21){
						cout<<"Tu signo es tauro";
					}
					else{
						cout<<"Tu signo es aries";
					}	
				}
			}
			if(mes==5){
				if (dia>=21){
					cout<<"Tu signo es geminis";
				}
				else{
					cout<<"Tu signo es tauro";
				}
			}
			if(mes==6){
				if (dia>30){
					cout<<"Dato fuera del rango";
				}
				else{
					if (dia>=22){
						cout<<"Tu signo es cancer";
					}
					else{
						cout<<"Tu signo es geminis";
					}
				}
			}
			if(mes==7){
				if (dia>=21){
					cout<<"Tu signo es leo";
				}
				else{
					cout<<"Tu signo es cancer";
				}
			}
			if(mes==8){
				if (dia>=23){
					cout<<"Tu signo es virgo";
				}
				else{
					cout<<"Tu signo es leo";
				}
			}
			if(mes==9){
				if (dia>30){
					cout<<"Dato fuera del rango";
				}
				else{
					if (dia>=23){
						cout<<"Tu signo es libra";
					}
					else{
						cout<<"Tu signo es virgo";
					}
				}
			}
			if(mes==10){
				if (dia>=23){
					cout<<"Tu signo es escorpio";
				}
				else{
					cout<<"Tu signo es libra";
				}
			}
			if(mes==11){
				if (dia>30){
					cout<<"Dato fuera del rango";
				}
				else{
					if (dia>=23){
						cout<<"Tu signo es sagitario";
					}
					else{
						cout<<"Tu signo es escorpio";
					}
				}
			}
			if(mes==12){
				if (dia>=22){
					cout<<"Tu signo es capricornio";
				}
				else{
					cout<<"Tu signo es sagitario";
				}
			}
			cout<<"\nProceso exitoso! :)";
			return 0;
		}
	}
	return 0;
}



