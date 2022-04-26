#include <iostream>
using namespace std;

int main(int argc, char** argv) {
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
		return 0;
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
		return 0;
	}

	return 0;
}

