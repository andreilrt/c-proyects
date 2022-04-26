#include <iostream>
using namespace std;

int main(int argc, char** argv) {
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
			exit(0);
		}	
		}
	else{
		exit(0);
	}
	return 0;
}



