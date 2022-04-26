#include <iostream>
#include <math.h>
#include<windows.h>
using namespace std;

int Menu(){
	Sleep(5000);
	system("cls");
	int Opcion=0;
	
	cout<<"***Menu***"<<endl
	<<endl<<"0.Salir"
	<<endl<<"1.Resuelva la expresion algebraica"//1***
	<<endl<<"2.Clasificacion de tu altura"//15***
	<<endl<<"3.Dia de la semana"//16***
	<<endl<<"4.Año bisiesto"//19***
	<<endl<<"5.Resolver la cuadratica"//20***
	<<endl<<"6.Intercambiar 2 variables"//22***
	<<endl<<"7.Votacion de candidatos"//23***
	<<endl<<"8.Clasificacion de notas"//24***
	<<endl<<"9.Area de la figura"//25***
	<<endl<<"10.Mostrar numero mayor de 3 opciones"//26***
	<<endl<<"11.Costo lapices"//27***
	<<endl<<"12.Banquete la fragata"//28***
	<<endl<<"13.Sistema de ecuaciones"//29***
	<<endl<<"14.Real valor absoluto"//30***
	<<endl<<"15.Unidades, Decenas ,Centenas"//31***
	<<endl<<"16.Área de un triangulo"//32***
	<<endl<<"17.Mayor numero de 4 ingresados"//33***
	<<endl<<"18.Pago de un producto"//35***
	<<endl<<"19.Interes banco"//36***
	<<endl<<"20.Construccion revoque"//37***
	<<endl<<"21.Nota final del semestre"<<endl<<endl;//38***
	
	
	cout<<"Ingrese el programa que desee: ";cin>>Opcion;
	cout<<endl;
	return Opcion;
}

int funcion_1(){
	float a=0;
	float b=0;
	float c=0;
	float d=0;
	cout<<"Ingresa un numero para A: ";cin>>a;
	cout<<"Ingresa un numero para B: ";cin>>b;
	cout<<"Ingresa un numero para C: ";cin>>c;
	if(c==0){
		cout<<"Dato Invalido";
		return 1;
	}
	cout<<"Ingresa un numero para D: ";cin>>d;
	float r1=a+b;
	float r2=pow(c,2);
	float r3=r1/r2;
	if(r3<0){
		cout<<"Dato Invalido"<<endl;
		return 1;
	}
	r1=sqrt(r3);
	r2=c*d;
	r3=2*a;
	float r4=r2-r3;
	if(r4<0){
		cout<<"Dato Invalido"<<endl;
		return 1;
	}
	r2=sqrt(r4);
	r3=2*a-5*b+4;
	if(r3==0){
		cout<<"Dato Invalido"<<endl;
		return 1;
	}
	r4=a/r3;
	r3=c+r4;
	if(r3==0){
		cout<<"Dato Invalido"<<endl;
		return 1;
	}
	r2=r2/r3;
	r3=4*c*d;
	float Resultado=r1-r2+r3;
	cout<<"El resultado de su operacion es "<<Resultado<<endl;
}

int funcion_2(){
	float Altura=0;
	cout<<"Ingresa tu altura en metros: ";cin>>Altura;
	if(Altura<0){
		cout<<"Dato Invalido"<<endl;
		return 1;
	}
	if(Altura<=1.50){
		cout<<"Persona de altura baja";
	}
	else{
		if(Altura<=1.70){
			cout<<"Persona de altura media";
		}
		else{
			cout<<"Persona de altura alta";
		}
	}
}

void funcion_3(){
	int Dia=0;
	cout<<"Ingresa un numero: ";cin>>Dia;
	if(Dia<1){
		cout<<"Dato Invalido"<<endl;
		funcion_3();
	}
	else{
		if(Dia>7){
			cout<<"Dato Invalido"<<endl;
	    	funcion_3();
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
}

int funcion_4(){
    int anio = 0;
    cout<<"Digite un anio: ";
    cin>>anio;
    if(anio<0){
    	cout<<"Dato Invalido"<<endl;
    	return 1;
	}
    if (anio%400==0){
        cout<<"El anio es bisiesto.";
    }
    else{
        if (anio%4==0){
            if (anio%100!=0){
                cout<<"El anio es bisiesto";
            }
            else{
                cout<<"El anio no es bisiesto";
            }
        }
        else{
            cout<<"El anio no es bisiesto";
        }
    }
}

void funcion_5(){
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	int s=0;
	int t=0;
	cout<<"Ingrese un numero para A: ";cin>>a;
	cout<<"Ingrese un numero para B: ";cin>>b;
	cout<<"Ingrese un numero para C: ";cin>>c;
	d=pow(b,2)-4*a*c;
	if(d<0){
		cout<<"No se puede realizar la operacion"<<endl;
	  	funcion_5();
	}
	else{
		if(a==0){
			cout<<"No se puede realizar la operacion"<<endl;
		    funcion_5();
		}
		else{
			s=(-b+sqrt(d))/2*a;
			t=(-b-sqrt(d))/2*a;
			cout<<"x1="<<s<<endl<<"x2="<<t;
		}
	}
}

void funcion_6(){
	int a=0;
	int b=0;
	int c=0;
	cout<<"Digite un numero a: ";cin>>a;
	cout<<"Digite un numero b: ";cin>>b;
	if(a!=b){
		cout<<"Las variables son diferentes"<<endl;
		c=a;
		a=b;
		b=c;
		cout<<"a="<<a<<endl<<"b="<<b;
	}
	else{
		cout<<"Las variables son iguales"<<endl;
		funcion_6();
	}
}

int funcion_7(){
    float v1 = 0;
    float v2 = 0;
    float v3 = 0;
    float tot = 0;
    float p = 0;
    cout<<"Digite los votos por el candidato 1: "; cin>>v1;
    if(v1<0){
    	cout<<"Dato Invalido"<<endl;
    	return 1;
	}
    cout<<"Digite los votos por el candidato 2: "; cin>>v2;
	if(v2<0){
    	cout<<"Dato Invalido"<<endl;
    	return 1;
	}
    cout<<"Digite los votos por el candidato 3: "; cin>>v3;
	if(v3<0){
    	cout<<"Dato Invalido"<<endl;
    	return 1;
	}
    tot = v1+v2+v3;
    cout<<"El porcentaje del candidato 1 es: "
    <<100*v1/tot<<endl
    <<"El porcentaje del candidato 2 es: "
    <<100*v2/tot<<endl
    <<"El porcentaje del candidato 3 es: "
    <<100*v3/tot<<endl;
    if (v1>v2){
        if (v1>v3){
            cout<<"El ganador es el candidato 1.";
        }
        if (v3>v1){
            cout<<"El ganador es el candidato 3.";
        }
        return 2;
	}
    if (v2>v1){
        if (v2>v3){
            cout<<"El ganador es el candidato 2.";
        }
        if (v3>v2){
            cout<<"El ganador es el candidato 3.";
        }
        return 2;
    }
    if (v3>v1){
        cout<<"El ganador es el candidato 3.";
    }
    else{
        cout<<"No hay ganador.";
    }
}

void funcion_8(){
	float N=0;
	cout<<"Ingrese su nota final: ";cin>>N;
	if(N<=0){
		cout<<"Reprobado";
	}
	else{
		if(N<5){
			cout<<"Reprobado";	
		}
		else{
			if(N<6.5){
				cout<<"Aprobado";
			}
			else{
				if(N<8.5){
					cout<<"Notable";
				}
				else{
					if(N<9.5){
						cout<<"Sobresaliente";
					}
					else{
						cout<<"Matricula de honor";
					}
				}
			}
		}
	}
}

void funcion_9(){
    int H=0;
	int R=0;
	int P=0;
	int A=0;
	cout<<"Digite la altura: ";cin>>H;
	cout<<"Digite el radio: ";cin>>R;
	if(H>=0){
		if(R>=0){
			P=H+R;
			A=3.14*R*P;
			cout<<"El area es="<<A;
		}
		else{
			cout<<"Dato Invalido"<<endl;
			funcion_9();
		}	
	}
	else{
		cout<<"Dato Invalido"<<endl;
		funcion_9();
	}
}

void funcion_10(){
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
}

int funcion_11(){
	int cantidad = 0;
	int costo = 0;
	cout<<"Este programa determina el costo según la cantidad de lapices."
	<<endl;
	cout<<"Digite la cantidad de lapices: ";
	cin>>cantidad;
	if(cantidad<=0){
		cout<<"Dato invalido."<<endl;
		return 1;
	}
	if(cantidad>=1000){
		costo = cantidad*85;
	}
	else{
		costo = cantidad*90;
	}
	cout<<"El costo de "<<cantidad<<" lapices es de "<<costo;
}

int funcion_12(){
	int personas = 0;
	int costo = 0;
	cout<<"Bienvenido a la fragata!!!"<<endl;
	cout<<"Digite la cantidad de personas para calcular el costo: ";
	cin>>personas;
	if(personas<=0){
		cout<<"Dato invalido"<<endl;
		return 1;
	}
	if(personas>200){
		if(personas<=300){
			costo=personas*85000;
		}
		else{
			costo=personas*75000;
		}
	}
	else{
		costo=personas*95000;
	}
	cout<<"El costo es de "<<costo;
}

int funcion_13(){
	float a = 0;
	float b = 0;
	float c = 0;
	float d = 0;
	float e = 0;
	float f = 0;
	float x = 0;
	float y = 0;
	cout<<"El programa resuelve ecuaciones :)!!!"<<endl;
	cout<<"Digite a: ";
	cin>>a;
	cout<<"Digite b: ";
	cin>>b;
	cout<<"Digite c: ";
	cin>>c;
	cout<<"Digite d: ";
	cin>>d;
	cout<<"Digite e: ";
	cin>>e;
	cout<<"Digite f: ";
	cin>>f;
	if((a*e-b*d)==0){
		cout<<"El sistema de ecuaciones no puede resolverse.";
		return 1;
	}
	x = (c*e-b*f)/(a*e-b*d);
	y = (a*f-c*d)/(a*e-b*d);
	if((a*x+b*y==c)){
		if((d*x+e*y==f)){
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
	}
	else{
		cout<<"El sistema de ecuaciones no puede resolverse.";
	}
}

void funcion_14(){
	int x = 0;
	int r = 0;
	cout<<"El programa calcula r = abs(x)^3"<<endl;
	cout<<"Digite el valor de x: ";
	cin>>x;
	r = pow(abs(x),3);
	cout<<" r = "<<r;
}

int funcion_15(){
	int Numero=0;
	int u=0;
	int d=0;
	int c=0;
	
	cout<<"Ingrese un numero de 3 cifras: ";cin>>Numero;
	if(Numero<100){
		cout<<"Dato Invalido"<<endl;
		return 1;
	}
	if(Numero>999){
		cout<<"Dato Invalido"<<endl;
		return 1;
	}
	u=Numero%10;
	Numero=Numero/10;
	d=Numero%10;
	Numero=Numero/10;
	c=Numero%1000;
	Numero=Numero/10;
	cout<<"Las unidades de su numero son "<<u<<endl;
	cout<<"Las decenas de su numero son "<<d<<endl;
	cout<<"Las centenas de su numero son "<<c<<endl;
}

int funcion_16(){
	float A=0;
	float B=0;
	float C=0;
	float P=0;
	float Area=0;
	cout<<"Hallar el area de un triangulo"<<endl;
	cout<<"Ingresa el lado A del triangulo: ";cin>>A;
	if(A<=0){
		cout<<"Dato Invalido"<<endl;
		return 1;
	}
	cout<<"Ingresa el lado B del triangulo: ";cin>>B;
	if(B<=0){
		cout<<"Dato Invalido"<<endl;
		return 1;
	}
	cout<<"Ingresa el lado C del triangulo: ";cin>>C;
	if(C<=0){
		cout<<"Dato Invalido"<<endl;
		return 1;
	}
	P=(A+B+C)/2;
	Area=sqrt(P*(P-A)*(P-B)*(P-C));
	cout<<"El area del triangulo es: "<<Area<<endl;
}

void funcion_17(){
	int A=0;
	int B=0;
	int C=0;
	int D=0;
	int M=0;
	int N=0;
	cout<<"Ingrese el primer numero: ";cin>>A;
	cout<<"Ingrese el segundo numero: ";cin>>B;
	cout<<"Ingrese el tercer numero: ";cin>>C;
	cout<<"Ingrese el cuarto numero: ";cin>>D;
	if(A>B){
		M=A;
	}
	else{
		M=B;
	}
	if(D>C){
		N=D;
	}
	else{
		N=C;
	}
	if(N<M){
		cout<<"El numero mas grande es: "<<M<<endl;
	}
	else{
		cout<<"El numero mas grande es: "<<N<<endl;
	}
}

int funcion_18(){
	float compra=0;
	float descuento=0;
	float pago=0;
	cout<<"Ingrese el valor de su compra: ";
	cin>>compra;
	if(compra<0){
		cout<<"Dato Invalido"<<endl;
		return 1;
	}
	if(compra>1000){
		descuento=compra*0.10;
		pago=compra-descuento;
		cout<<"El pago de su compra es de "<<pago;
	}
	else{
		cout<<"El pago de su compra es de "<<compra;
	}
}

int funcion_19(){
	float capital=0.0;
	float interes = 0.02;
	float capital1 = 0.0;
	int ano = 1;
	cout<<"Digite el capital que va invertir: ";
	cin>>capital;
	if(capital<0){
		cout<<"Dato Invalido"<<endl;
		return 1;
	}
	capital1 = capital;
	while(ano<=12){
		capital=capital*interes+capital;
		ano++;
	}
	cout<<"Su ganancia sera de: "<<capital-capital1;
}

int funcion_20(){
	float l = 0;
	float h = 0;
	float area = 0;
	float arena = 0.5;//Por metro cuadrado.
	cout<<"Este programa permite calcular la cantidad de arena para una pared segun su area. :)!!!"
	<<endl;
	cout<<"Digite el largo de la pared en metros: ";
	cin>>l;
	if(l<=0){
		cout<<"Dato invalido."<<endl;
		return 1;
	}
	cout<<"Digite el alto de la pared en metros: ";
	cin>>h;
	if(h<=0){
		cout<<"Dato invalido."<<endl;
		return 1;
	}
	area = l*h;
	if(area*arena==1){
		cout<<"La cantidad de arena necesaria es "<<area*arena<<" metro cubico."<<endl;
	}
	else{
		cout<<"La cantidad de arena necesaria es "<<area*arena<<" metros cubicos."<<endl;
	}
}

int funcion_21(){
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
		return 1;
	}
	cout<<"Digite la nota del segundo examen: ";
	cin>>nota2;
	if(nota2<0){
		cout<<"Dato invalido."<<endl;
		return 1;
	}
	cout<<"Digite la nota del tercer examen: ";
	cin>>nota3;
	if(nota3<0){
		cout<<"Dato invalido."<<endl;
		return 1;
	}
	nota = nota1*0.35+nota2*0.35+nota3*0.3;
	if(nota>=3.0){
		cout<<"Aprobado";
	}
	else{
		cout<<"Reprobado";
	}
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

	if(Opc>21){
		cout<<"Dato Invalido"<<endl<<endl;
		Programas(Menu());
	}
	
	if(Opc==1){
		if(funcion_1()==1){
			funcion_1();
		}
	}
	
	if(Opc==2){
		if(funcion_2()==1){
			Programas(2);
		}	
	}
	
	if(Opc==3){
		funcion_3();
	}
	
	if(Opc==4){
		if(funcion_4()==1){
			Programas(4);
		}
	}
	
	if(Opc==5){
		funcion_5();
	}
	
	if(Opc==6){
		funcion_6();
	}
	
	if(Opc==7){
		if(funcion_7()==1){
			funcion_7();
		}
	}

	if(Opc==8){
		funcion_8();
	}
	
	if(Opc==9){
		funcion_9();
	}
	
	if(Opc==10){
		funcion_10();
	}
	
	if(Opc==11){
		if(funcion_11()==1){
			Programas(11);
		}
	}
	
	if(Opc==12){
		if(funcion_12()==1){
			Programas(12);
		}
	}
	
	if(Opc==13){
		funcion_13();
	}
	
	if(Opc==14){
		funcion_14();
	}
	
	if(Opc==15){
		if(funcion_15()==1){
			Programas(15);
		}
	}
	
	if(Opc==16){
		if(funcion_16()==1){
			Programas(16);
		}
	}
	
	if(Opc==17){
		funcion_17();
	}

	if(Opc==18){
		if(funcion_18()==1){
			Programas(18);
		}
	}
	
	if(Opc==19){
		if(funcion_19()==1){
			funcion_19();
		}
	}
	
	if(Opc==20){
		if(funcion_20()==1){
			funcion_20();
		}
	}
	
	if(Opc==21){
		if(funcion_21()==1){
			Programas(21);
		}
	}
	cout<<endl<<endl;
	Programas(Menu());
}

int main(int argc, char** argv) {
	Programas(Menu());
	return 0;
}

