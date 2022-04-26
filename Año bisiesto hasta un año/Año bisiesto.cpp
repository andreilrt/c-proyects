#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int Gregorianio=1582;
	int anio=0;
	int c=0;
	cout<<"Ingrese un anio: ";cin>>anio;
	if(anio<=Gregorianio){
		cout<<"Dato no valido";
		exit(0);
	}
	if(anio>Gregorianio){
		while(Gregorianio<=anio){
			Gregorianio=Gregorianio+1;
	    	if(Gregorianio%400==0){
		    	cout<<Gregorianio<<endl;
		    	c=c+1;
	    	}
	    	else{
			    if(Gregorianio%4==0){
			    	if(Gregorianio%100!=0){
				    	cout<<Gregorianio<<endl;
				    	c=c+1;
				}
				
			}
		}
	}
}
 if (anio%400==0){
        cout<<endl<<"El anio "<<anio<<" es bisiesto";
    }
    else{
        if (anio%4==0){
            if (anio%100!=0){
                cout<<endl<<"El anio "<<anio<<" es bisiesto";
            }
            else{
                cout<<endl<<"El anio "<<anio<<" no es bisiesto";
            }
        }
        else{
            cout<<endl<<"El anio "<<anio<<" no es bisiesto";
        }
    }
cout<<endl<<"Hay "<<c<<" anios bisiestos desde 1582 hasta "<<anio;
	return 0;
}

