#include <iostream>
using namespace std;
int main(void){
    int anio = 0;
    cout<<"Digite un anio: ";
    cin>>anio;
    if (anio%400==0){
        cout<<"El anio es bisiesto.";
    }
    else{
        if (anio%4==0){
            if (anio%100!=0){
                cout<<"El anio es bisiesto";
            }
            else{
                cout<<"El anio no es bisiesto";
            }
        }
        else{
            cout<<"El anio no es bisiesto";
        }
    }
    return 0;
}




