#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int N=0;
	cout<<"Ingrese su nota final: ";cin>>N;
	if(N<=0){
		cout<<"Reprobado";
		exit(0);
	}
	else{
		if(N<5){
			cout<<"Reprobado";
		    exit(0);	
		}
		else{
			if(N<6.5){
				cout<<"Aprobado";
				exit(0);
			}
			else{
				if(N<8.5){
					cout<<"Notable";
					exit(0);
				}
				else{
					if(N<9.5){
						cout<<"Sobresaliente";
						exit(0);
					}
					else{
						cout<<"Matricula de honor";
					}
				}
			}
		}
	}
	return 0;
}



