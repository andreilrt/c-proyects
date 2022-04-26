#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int numero=0;
    int res=0;
	cout<<"Digite un numero: ";cin>>numero;
	cout<<numero;
	res=numero%2,0;
	if(res==0){
		cout<<"El numero es par :)";
	}
    else{
	    cout<<"El numero es impar :)";
	}
	return 0;
}

