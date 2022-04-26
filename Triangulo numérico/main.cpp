#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int i,j,numero;
    cout<<"Ingrese numero"<<endl;
    cin>>numero;
    
    cout<<endl;
    for( i=1;i<=numero; i++){
        for(j=1; j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    
    return 0;
}

