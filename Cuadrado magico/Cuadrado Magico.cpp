#include <iostream>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <cstdlib>      
#include <ctime>  

using namespace std;

const int a = 10;
int Cuadrado[a][a];
int Arreglo[a*a];
int suma[a];
char Numero [a];
int s = 0;

bool Validar_Rangos(int dato , int minimo , int maximo){
	if(dato < minimo){
		cout<<"Dato Invalido"<<endl<<"Pruebe otra vez ;)"<<endl<<endl;
		return true;
	}
	if(dato > maximo){
		cout<<"Dato Invalido"<<endl<<"Pruebe otra vez ;)"<<endl<<endl;
		return true;
	}
	else{
		return false;
	}
}

bool Validar_Numeros(){
	int Longitud = 0;
	Longitud = strlen(Numero);
	int c = 0;
	for(int Digito = 0; Digito<Longitud ; Digito++){
		if(Numero[Digito]>='0'){
			if(Numero[Digito]<='9'){
				c++;
			}
		}
	}
	if(c!=Longitud){
		cout<<"Dato Invalido"<<endl<<endl;
		return true;
	}
	else{
		return false;
	}
}

void inicializar_suma_ceros(int Tamano){
	for(int posicion = 0; posicion<Tamano; posicion++){
		suma[posicion] = 0;
	}
}

bool Verificar_Suma(int Tamano){
	//Horizontales
	inicializar_suma_ceros(Tamano);
	for(int Filas = 0; Filas<Tamano; Filas++){
	    for(int Columnas = 0; Columnas<Tamano; Columnas++){
	        suma[Filas] += Cuadrado[Filas][Columnas];
	    }
	}
	for(int posicion = 1; posicion<Tamano; posicion++){
	    if(suma[posicion]!=suma[posicion-1]){
	        return true;
	    }
	}
	s = suma[0];
	//Verticales
	inicializar_suma_ceros(Tamano);
	for(int Columnas = 0; Columnas<Tamano; Columnas++){
	    for(int Filas = 0; Filas<Tamano; Filas++){
	        suma[Columnas] += Cuadrado[Filas][Columnas];
	    }
	}
	for(int posicion = 1; posicion<Tamano; posicion++){
	    if(suma[posicion]!=suma[posicion-1]){
	        return true;
	    }
	}
	if(s!=suma[0]){
		return true;
	}
	//Diagonal Principal
	inicializar_suma_ceros(Tamano);
	for(int Filas = 0; Filas<Tamano; Filas++){
	    for(int Columnas = 0; Columnas<Tamano; Columnas++){
	    	if(Filas==Columnas){
				suma[0] += Cuadrado[Filas][Columnas];	
			}
	    }
	}
	if(s!=suma[0]){
		return true;
	}
	//Diagonal secundaria
	int Columnas = Tamano-1;
	inicializar_suma_ceros(Tamano);
	for(int Filas = 0; Filas<Tamano; Filas++){
		suma[0] += Cuadrado[Filas][Columnas];
		Columnas--;
	}
	if(s!=suma[0]){
		return true;
	}
	return false;
}

bool Verificar_Repeticion(int Num, int Tamano){
    for(int posicion = 0; posicion<Tamano; posicion++){
        if(Num==Arreglo[posicion]){
            return true;
        }
    }
    return false;
}

bool Verificar_Diferente(int Tamano){
	int n = 0;
	for(int Filas = 0; Filas<Tamano; Filas++){
		for(int Columnas = 0; Columnas<Tamano; Columnas++){
			if(Columnas>0){
				if(n==Cuadrado[Filas][Columnas]){
					return true;
				}
			}
			n = Cuadrado[Filas][Columnas];
		}		
	}
	return false;
}

int Pedir_Dato(string pregunta , int minimo , int maximo){
	bool Control1 = true;
	bool Control2 = true;
	int  Dato_I = 0;
	while(Control1){
		while(Control2){
			cout<<pregunta;
			cin>>Numero;
			Control2 = Validar_Numeros();
		}
		Control2 = true;
		Dato_I = atoi(Numero);
		Control1 = Validar_Rangos(Dato_I , minimo , maximo);	
	}
	return Dato_I;
}

int Generar_Random(int maximo, int minimo){
	int R = 0;
	R = minimo + rand()%((maximo)+1-minimo);
	return R;
}

void Mostrar_Cuadrado(int Tamano){
	cout<<endl;
	for(int Filas = 0; Filas<Tamano ; Filas++){
		for(int Columnas = 0; Columnas<Tamano ; Columnas++){
			cout<<Cuadrado[Filas][Columnas];
			cout<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}

void Ingresar_Valores(){
	int Tamano = 0;
	int c = 0;
	int n = 0;
	bool Control = true;
	bool Control1 = true;
	Tamano = Pedir_Dato("Ingrese el tamano del cuadrado: " , 3 , 10);
	while(Control){
	    while(Control1){
			for(int Filas = 0; Filas<Tamano ; Filas++){
	    		for(int Columnas = 0; Columnas<Tamano ; Columnas++){
	    			cout<<"Ingrese valor para la posición ["<<Filas<<"] ["<<Columnas<<"] : ";
	    			Cuadrado[Filas][Columnas] = Pedir_Dato(" ", 1, Tamano*Tamano);
	    			c++;
	    		}
	    	}
	    	if(Verificar_Diferente(Tamano)){
	    		cout<<endl<<"Este no es un cuadro magico :(("<<endl<<endl;
			}
	    	Control1 = Verificar_Diferente(Tamano);
		}
		Control1 = true;
    	c = 0;
    	if(Verificar_Suma(Tamano)){
    		cout<<endl<<"Este no es un cuadro magico :(("<<endl<<endl;
		}
    	Control = Verificar_Suma(Tamano);
	}
	Mostrar_Cuadrado(Tamano);
	cout<<endl<<"Este es un cuadro magico"<<endl
	<<"La suma de este cuadro magico es: "<<s<<endl<<endl;
}

void Secuencia(int Tamano){
    int Max = Tamano*Tamano;
    int n = 0;
    bool Control = true;
    for(int posicion = 0; posicion<Max; posicion++){
        while(Control){
            n = Generar_Random(Max,1);
            Control = Verificar_Repeticion(n, posicion);
        }
        Control = true;
        Arreglo[posicion] = n;
    }
}

void Cuadrado_Magico_automatico(){
	int Tamano = 0;
	int c = 0;
	bool Control = true;
	Tamano = Pedir_Dato("Ingrese el tamano del cuadrado: " , 3 , 10);
	while(Control){
		Secuencia(Tamano);
	    for(int Filas = 0; Filas<Tamano ; Filas++){
    		for(int Columnas = 0; Columnas<Tamano ; Columnas++){
    			Cuadrado[Filas][Columnas] = Arreglo[c];
    			c++;
    		}
    	}
    	c = 0;
    	Control = Verificar_Suma(Tamano);
	}
	Mostrar_Cuadrado(Tamano);
	cout<<endl<<"Este es un cuadro magico"<<endl
	<<"La suma de este cuadro magico es: "<<s<<endl<<endl;
}

bool Programas(int Opcion){
	if(Opcion==0){
		cout<<"Programa Finalizado";
		return false;
	}
	if(Opcion==1){
		Cuadrado_Magico_automatico();
	}
	if(Opcion==2){
		Ingresar_Valores();
	}
	return true;
}

string Menu(){
	string Opcion;
	Opcion = "Este programa realiza cuadrados magicos\n"
	"*Menu*\n\n"
	"\n0. Salir"
	"\n1. Generar cuadrado magico automaticamente"
	"\n2. Generar cuadrado magico manualmente\n\n"
	"\nDigite su opcion: ";
	return Opcion;
}

void Proceso(){
	srand(time(NULL));
	int Opcion_I = 0;
	bool Control = true;
	while(Control){
		Opcion_I = Pedir_Dato(Menu() , 0 , 2);
		Control = Programas(Opcion_I);
	}
}

int main(int argc, char** argv) {
	Proceso();
	return 0;
}
