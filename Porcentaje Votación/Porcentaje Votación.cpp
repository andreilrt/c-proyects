#include <iostream>
using namespace std;
int main()
{
    float v1 = 0;
    float v2 = 0;
    float v3 = 0;
    float tot = 0;
    float p = 0;
    cout<<"Digite los votos por el candidato 1: "; cin>>v1;
    cout<<"Digite los votos por el candidato 2: "; cin>>v2;
    cout<<"Digite los votos por el candidato 3: "; cin>>v3;
    tot = v1+v2+v3;
    cout<<"El porcentaje del candidato 1 es: "
    <<100*v1/tot<<endl
    <<"El porcentaje del candidato 2 es: "
    <<100*v2/tot<<endl
    <<"El porcentaje del candidato 3 es: "
    <<100*v3/tot<<endl;
    if (v1>v2){
        if (v1>v3){
            cout<<"El ganador es el candidato 1.";
            return 0;
        }
        if (v3>v1){
            cout<<"El ganador es el candidato 3.";
            return 0;
        }
    }
    if (v2>v1){
        if (v2>v3){
            cout<<"El ganador es el candidato 2.";
            return 0;
        }
        if (v3>v2){
            cout<<"El ganador es el candidato 3.";
            return 0;
        }
    }
    if (v3>v1){
        cout<<"El ganador es el candidato 3.";
    }
    else{
        cout<<"No hay ganador.";
    }
    return 0;
}


