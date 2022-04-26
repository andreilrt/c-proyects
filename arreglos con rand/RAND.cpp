#include <iostream>
#include <stdlib.h>
#include <cstdlib>      
#include <ctime> 

using namespace std;

int matriz[7][5];
char arreglo[6][6];
char arreglo2 [7][7];

void mostrar_arreglo_numeros_automatico(){
    for(int filas=0;filas < 7; filas ++){
        for(int columnas =0; columnas < 5; columnas ++){
            cout << matriz[filas][columnas];
			cout<<"\t";
        }
        cout<<endl;
    }
    cout <<endl<< "Este arreglo tiene numeros aleatorios entre 13 y 40"<<endl;
}

void mostrar_funcion_3(int lado){
	for(int filas=0;filas < lado; filas ++){
        for(int columnas =0; columnas < lado; columnas ++){
       		cout<<arreglo[filas][columnas]<<"\t";  
        }
        cout<<endl;
	}
}

void mostrar_arreglo_letra_manual(){
	cout<<endl;
	for(int filas=0;filas<7;filas++){
		for(int columnas=0;columnas<7;columnas++){
			cout<<arreglo[filas][columnas]<<"\t";
		}
		cout<<"\n\n";
	}
}

int generarnumero13_40(){

    int nrand = 0;
    nrand = 13 + rand() % (40-13);
    return nrand;
}

void llenar_arreglo_numeros_automatico(){

    for(int filas=0; filas < 7; filas ++){
        for(int columnas = 0; columnas < 5; columnas ++){
            matriz[filas][columnas] = generarnumero13_40();
        }
    }
    mostrar_arreglo_numeros_automatico();
}

void Media_Aritmetica(){
	double Suma_total = 0;
	double Media_aritmetica = 0;
    for(int filas=0;filas < 7; filas ++){
        for(int columnas =0; columnas < 5; columnas ++){
            Suma_total = Suma_total + matriz[filas][columnas];
        }
    }
    Media_aritmetica = Suma_total/(7 * 5);
    cout << "La media aritmetica de los valores del arreglo es: "<< Media_aritmetica;
}

void Suma_Total(){
	int Suma_total = 0;
    for(int filas=0;filas < 7; filas ++){
        for(int columnas =0; columnas < 5; columnas ++){
            Suma_total = Suma_total + matriz[filas][columnas];
        }
    }
    cout << "La suma de los valores del arreglo es: "<< Suma_total;
}

void arreglo_letra_automatico(){
	int lado = 6;
	char caracter =' ';
	cout<<"Con que caracter quiere llenar el arreglo: ";
	cin>>caracter;
    for(int filas=0;filas < lado; filas ++){
        for(int columnas =0; columnas < lado; columnas ++){
       		arreglo[filas][columnas] = caracter;   
        }
	}
	mostrar_funcion_3(lado);
}

void llenar_arreglo_letra_manual(){
	cout<<endl;
	for(int filas=0;filas<7;filas++){
		for(int columnas=0;columnas<7;columnas++){
			cout<<"Digite el caracter para la posicion "<<filas<<" "<<columnas<<": "<<endl;
			cin>>arreglo[filas][columnas];
		}
	}
	mostrar_arreglo_letra_manual();
}

void Evaluar_caracter(){
	char caracter = ' ';
	int valor = 0;
	cout<<"Ingrese su caracter: ";
	cin>>caracter;
	valor = caracter;
	cout<<"El valor en el codigo ASCCI es: "<<valor;
	cout<<endl;
	if(valor<0){
		cout<<"Dato Invalido"<<endl;
	}
	if(valor>255){
		cout<<"Dato Invalido"<<endl;
	}
	if(valor>47){
		if(valor<=57){
			cout<<"El caracter es un numero";
		}
	}
	if(valor>64){
		if(valor<=90){
			cout<<"El caracter es una letra mayuscula";
		}
	}
	if(valor>96){
		if(valor<=122){
			cout<<"El caracter es una letra minuscula";
	    }
	}
	if(valor>=0){
		if(valor<=47){
			cout<<"Es un caracter especial";
	    }
	}
	if(valor>=58){
		if(valor<=64){
			cout<<"Es un caracter especial";
	    }
	}
	if(valor>=91){
		if(valor<=96){
			cout<<"Es un caracter especial";
	    }
	}
	if(valor>=123){
		if(valor<=163){
			cout<<"Es un caracter especial";
	    }
	}
	if(valor>=166){
		if(valor<=255){
			cout<<"Es un caracter especial";
	    }
	}
	cout<<endl;
}

void Convertir_caracter(){
	char caracter = ' ';
	int valor = 0;
	cout<<"Ingrese su caracter: ";
	cin>>caracter;
	valor = caracter;
	cout<<endl;
	if(valor<0){
		cout<<"Dato Invalido"<<endl;
	}
	if(valor>255){
		cout<<"Dato Invalido"<<endl;
	}
	if(valor>64){
		if(valor<=90){
			valor = valor + 32;
		}
	}
	if(valor>96){
		if(valor<=122){
			valor = valor - 32;
	    }
	}
	caracter = valor;
	cout<<caracter<<endl;	
}

bool Validar(int OpcionN){
	cout<<endl;
	if(OpcionN<0){
		cout<<"Dato Invalido"<<endl<<endl;
		return true;		
	}
	if(OpcionN>3){
		cout<<"Dato Invalido"<<endl<<endl;
		return true;
	}
	else{
		return false;
	}
}

void Menu_numeros(){
	cout<<endl<<endl<<"***Menu Numerico***"<<endl
	<<endl<<"1.Media Aritmetica del arreglo"
	<<endl<<"2.Suma del arreglo"
	<<endl<<"3.Volver a Menu Principal";
	cout<<endl<<endl;
}

void Home(){
	cout<<endl<<"***Menu***"<<endl
	<<endl<<"0.Salir"
	<<endl<<"1.Generar arreglo de valores aleatorios automatico"
	<<endl<<"2.Arreglo 6X6 con letra automatico"
	<<endl<<"3.Arreglo 7X7 con letra manual"
	<<endl<<"4.Evaluar caracter"
	<<endl<<"5.Convertir caracter"
	<<endl<<endl<<"Digita tu opcion: ";
}

void Programas(int Opc){
	int OpcionN = 0;
	bool Valor = true;
	if(Opc==1){
		llenar_arreglo_numeros_automatico();
		while(Opc==1){
			while(Valor){
				Menu_numeros();
				cout<<"Digite su opcion: ";
				cin>>OpcionN;
				Valor = Validar(OpcionN);
			}
			Valor = true;
			if(OpcionN==1){
				Media_Aritmetica();
			}
			if(OpcionN==2){
				Suma_Total();
			}
			if(OpcionN==3){
				Opc = 0;
			}
		}
	}
	if(Opc==2){
		arreglo_letra_automatico();
	}
	if(Opc==3){
		llenar_arreglo_letra_manual();
	}
	if(Opc==4){
		Evaluar_caracter();
	}
	if(Opc==5){
		Convertir_caracter();
	}
	cout<<endl<<endl;
}

void Proceso(){
	int Opc = 0;
	Home();
	cin>>Opc;
	cout<<endl;
	if(Opc<0){
		cout<<"Dato Invalido"<<endl<<endl;
		Proceso();		
	}
	if(Opc==0){
		cout<<"Programa Finalizado";
		exit(0);
	}

	if(Opc>5){
		cout<<"Dato Invalido"<<endl<<endl;
		Proceso();
	}
	Programas(Opc);
}

int main(int argc, char** argv) {
	while(true){
		srand(time(NULL));
		Proceso();
	}
	return 0;
}

