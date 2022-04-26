#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int numero1=0;
	int numero2=0;
	int resultado=0;
    cout<<"Ingrese el primer numero: ";
	cin>>numero1;
	cout<<"Ingrese el segundo numero: ";
	cin>>numero2;
	cout<<endl;
	while(numero1>0)
	{
		if(numero1%2!=0){
			resultado=resultado+numero2;
		}
		cout<<"\t|\t"<<numero1<<"\t|\t"<<numero2<<"\t|\t"<<endl;
		numero1=numero1/2;
		numero2=numero2*2;
	}
	cout<<endl<<"El resultado es "<<resultado;
	
	return 0;
}



