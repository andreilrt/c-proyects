#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	float capital=0.0;
	float interes = 0.02;
	float capital1 = 0.0;
	int ano = 1;
	cout<<"Digite el capital que va invertir: ";
	cin>>capital;
	if(capital<0){
		return 0;
	}
	capital1 = capital;
	while(ano<=12){
		capital=capital*interes+capital;
		ano++;
	}
	cout<<"Su ganancia sera de: "<<capital-capital1;

	return 0;
}

