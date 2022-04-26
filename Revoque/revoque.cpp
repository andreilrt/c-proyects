#include <iostream>
using namespace std;

int main(int argc, char** argv) {
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
		return 0;
	}
	cout<<"Digite el alto de la pared en metros: ";
	cin>>h;
	if(h<=0){
		cout<<"Dato invalido."<<endl;
	}
	area = l*h;
	if(area*arena==1){
		cout<<"La cantidad de arena necesaria es "<<area*arena<<" metro cubico.";
	}
	else{
		cout<<"La cantidad de arena necesaria es "<<area*arena<<" metros cubicos.";
	}

	return 0;
}

