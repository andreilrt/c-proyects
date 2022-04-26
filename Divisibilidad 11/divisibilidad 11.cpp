#include <iostream>
using namespace std;
//mod11 menor 21
//numero entre 999999 y 9999999
int main(int argc, char** argv) {
	int a = 0;
	int b = 0;
	cout<<"Digite un numero: ";
	cin>>a;
	if (a<=999999){
		cout<<"\nUps, esta fuera del rango :(";
		return 0;
	}
	if (a>9999999){
		cout<<"\nUps, esta fuera del rango :(";
		return 0;
	}
	b = (a%10)+b;
	a = a/10;
	b = -(a%10)+b;
	a = a/10;
	b = (a%10)+b;
	a = a/10;
	b = -(a%10)+b;
	a = a/10;
	b = (a%10)+b;
	a = a/10;
	b = -(a%10)+b;
	a = a/10;
	b = (a%10)+b;
	a = a/10;
	if (b==0){
		cout<<"\nEl numero es divisible entre 11";
		return 0;
	}
	if (b==11){
		cout<<"\nEl numero es divisible entre 11";
		return 0;
	}
	if (b==11){
		cout<<"\nEl numero es divisible entre 11";
		return 0;
	}
	if (b==22){
		cout<<"\nEl numero es divisible entre 11";
		return 0;
	}
	if (b==33){
		cout<<"\nEl numero es divisible entre 11";
		return 0;
	}
	else{
		cout<<"\nEl numero NO es divisible entre 11";
	}
	return 0;
}

