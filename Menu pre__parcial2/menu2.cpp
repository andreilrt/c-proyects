#include <iostream>
using namespace std;

int Menu(){
	int Opcion=0;
	
	cout<<"***Menu***"<<endl
	<<endl<<"0.Salir"
	<<endl<<"1.Sumatoria"//1
	<<endl<<"2.Sucesion de Fibonacci"//3
	<<endl<<"3.Promedio edad"//4
	<<endl<<"4.Ahorro persona en un año"//5
	<<endl<<"5.Ahorro persona diariamente"//6
	<<endl<<"6.Caja Registradora"//7
	<<endl<<"7."//8
	<<endl<<"8."//9
	<<endl<<"9."//10
	<<endl<<"10.Piramide punta abajo"//12***
	<<endl<<"11.Carretera Bogota-Girardot"//13
	<<endl<<"12."//14
	<<endl<<"13.Club pilos"//15
	<<endl<<"14."//16
	<<endl<<"15.Minimo, Comun, Multiplo"//17
	<<endl<<"16.Cantidad digitos"//18
	<<endl<<"17.Calcular la Media"//19
	<<endl<<"18.Piramide punta arriba"//31***
	<<endl<<"19.Piramide a la izquierda"//32***
	<<endl<<"20.Menu matematico"<<endl<<endl;//36
	
	
	cout<<"Ingrese el programa que desee: ";cin>>Opcion;
	cout<<endl;
	return Opcion;
}

void funcion_1(){
}

void funcion_2(){
}

void funcion_3(){
}

void funcion_4(){
}

void funcion_5(){
}

void funcion_6(){
}

void funcion_7(){
}

void funcion_8(){
}

void funcion_9(){
}

void funcion_10(){
	int Altura=0;
	int c=0;
	int h=0;
	cout<<"Digite la altura: ";cin>>Altura;
	if(Altura<=0){
		cout<<"Dato Invalido"<<endl;
		funcion_10();
	}
	while(Altura>0){
			while(h>c){
				cout<<" ";
				c=c+1;
			}
			c=0;
			while(Altura>c){
				cout<<"A";
		    	c=c+1;	
			}
			cout<<endl;
			Altura=Altura-1;
			c=0;
			h=h+1;
		}
}

void funcion_11(){
}

void funcion_12(){
}

void funcion_13(){
}

void funcion_14(){
}

void funcion_15(){
}

void funcion_16(){
}

void funcion_17(){
}

void funcion_18(){
	int h = 0;
    int i = 1;
    int c = 0;
    int j = 1;
    cout<<"Digite la altura: ";
    cin>>h;
    if(h<=0){
    	cout<<"Dato Invalido"<<endl;
    	funcion_18();
	}
    while(h>c){
        while(h>i){
            cout<<" ";
            i=i+1;
        }
        i=1;
        while(j>c){
            cout<<"*";
            c=c+1;
        }
        j=j+1;
        cout<<endl;
        c=0;
        h=h-1;
    }
}

void funcion_19(){
	int Altura=0;
	int c=0;
	int h=0;

	cout<<"ingrese la altura de la piramide ";cin>>Altura;
	if(Altura<=0){
		cout<<"Dato Invalido"<<endl;
		funcion_19();
	}

		while(Altura>0){
			while(h>c){
				cout<<" ";
				c=c+1;
			}
			while(Altura>c){
				cout<<"A";
		    	c=c+1;
				h=0;	
			}
			cout<<endl;
			Altura=Altura-1;
			c=0;
		}
}

void funcion_20(){
}

void Programas(int Opc){
	if(Opc<0){
		cout<<"Dato Invalido"<<endl<<endl;
		Programas(Menu());		
	}
	
	if(Opc==0){
		cout<<"Programa Finalizado";
		exit(0);
	}

	if(Opc>20){
		cout<<"Dato Invalido"<<endl<<endl;
		Programas(Menu());
	}
	
	if(Opc==1){
	}
	
	if(Opc==2){
	}
	
	if(Opc==3){
	}
	
	if(Opc==4){
	}
	
	if(Opc==5){
	}
	
	if(Opc==6){
	}
	
	if(Opc==7){
	}
	
	if(Opc==8){
	}
	
	if(Opc==9){
	}
	
	if(Opc==10){
		funcion_10();
	}
	
	if(Opc==11){
	}
	
	if(Opc==12){
	}
	
	if(Opc==13){
	}
	
	if(Opc==14){
	}
	
	if(Opc==15){
	}
	
	if(Opc==16){
	}
	
	if(Opc==17){
	}
	
	if(Opc==18){
		funcion_18();
	}
	
	if(Opc==19){
		funcion_19();
	}
	
	if(Opc==20){
	}
	
	cout<<endl<<endl;
	Programas(Menu());
}
int main(int argc, char** argv) {
	Programas(Menu());
	return 0;
}

