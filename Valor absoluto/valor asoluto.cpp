#include <iostream>
#include <Math.h>
using namespace std;

int main(int argc, char** argv) {
	int x = 0;
	int r = 0;
	cout<<"El programa calcula r = abs(x)^3"<<endl;
	cout<<"Digite el valor de x: ";
	cin>>x;
	r = pow(abs(x),3);
	cout<<" r = "<<r;

	return 0;
}

