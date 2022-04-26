#include <iostream>
#include <string>

using namespace std;

bool ValidarNumeros(string ISBN , int Longitud){
    for(int c=0; c<Longitud; c++){
        if(ISBN[c]<48 && ISBN[c]>57){
            cout<<"Codigo ISBN erroneo, Por favor intentelo de nuevo"<<endl<<endl;
            return true;
        }
    }
    return false;
}

bool ValidarTamanos(string ISBN){
    if(ISBN.length()==10){
        if(ValidarNumeros(ISBN,9)){
            return true;
        }
        if(ISBN[9]=='x'||ISBN[9]=='X'){
            return false;
        }
        else{
            if(ISBN[9]<48 && ISBN[9]>57){
                cout<<"Codigo ISBN erroneo, Por favor intentelo de nuevo"<<endl<<endl;
                return true; 
            }
        }
        return false;
    }
    if(ISBN.length()==13){
        if(ValidarNumeros(ISBN,13)){
            return true;
        }
        return false;
    }
    else{
        cout<<"Codigo ISBN erroneo, Por favor intentelo de nuevo"<<endl<<endl;
        return true;
    }
}

void Algoritmo10(string ISBN){
    int m =10;
    int suma=0;
    if(ISBN[9]=='X'||ISBN[9]=='x'){
        for(int c=0; c<9 ;c++){
            suma += ((int)(ISBN[c])-48)*m; 
            m--;
        }
        suma += 10*m;
    }
    else{
        for(int c=0; c<10 ;c++){
            suma += ((int)(ISBN[c])-48)*m; 
            m--;
        }
    }
    cout<<suma<<endl;
    cout<<suma/11<<endl;
    if(suma % 11==0){
        cout<<"Su codigo ISBN es correcto!!! :)";
    }
    else{
        cout<<"Su codigo ISBN es incorrecto :(";
    }
    
}

void Algoritmo13(string ISBN){
    int SumaFinal = 0;
    int SumaPar = 0;
    int SumaImpar = 0;
    for(int c = 0; c<13; c++){
        if(c%2==0){
            SumaImpar+=((int)ISBN[c])-48;
        }
        else{
            SumaPar+=((int)ISBN[c])-48;
        }
    }
    SumaFinal = SumaImpar+SumaPar*3;
    if(SumaFinal%10==0){
        cout<<"Su codigo ISBN es correcto!!! :)";
    }
    else{
        cout<<"Su codigo ISBN es incorrecto :(";
    }
}

void Proceso(){
    string ISBN;
    bool Control= true;
    while(Control){
        cout<<"Bienvenid@ al programa que valida su codigo ISBN"<<endl<<endl;
        cout<<"Por favor ingrese su codigo sin espacios ni caracteres adicionales"<<endl;
        cout<<"Ingrese su codigo ISBN: ";
        cin>>ISBN;
        Control=ValidarTamanos(ISBN);
    }
    if(ISBN.length()==10){
        Algoritmo10(ISBN);
    }
    else{
        Algoritmo13(ISBN);
    }

}

int main()
{
    Proceso();
    return 0;
}

