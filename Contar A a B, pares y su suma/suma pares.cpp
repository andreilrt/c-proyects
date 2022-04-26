#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int a = 0;
    int b = 0;
    int p = 0;
    cout<<"Ingrese el primer numero: ";
    cin>>b;
    cout<<"Ingrese el segundo numero: ";
    cin>>a;
    if (a<=b){
        cout<<"Datos invalidos.";
    }
    else{
        while(a>=b){
            if(b%2==0){
                p++;
            }
            if(b%2!=0){
                i+=b;
            }
            b++;
        }
        cout<<"Hay "<<p<<" numeros pares.";
        cout<<"\nLa suma de los numeros impares es "<<i<<".";
        cout<<"\nProceso exitoso!!! :)";
    }
    return 0;
}





