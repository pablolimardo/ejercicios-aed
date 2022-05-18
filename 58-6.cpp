#include <iostream>
using namespace std;
int main(){

    int tamVector;
    bool ascendente=false, descendente=false;
    cout<<"Ingresa la cantidad de posciones del arreglo:"; cin>>tamVector;
    int numeros[tamVector];
    cout << "Ingresa las " << tamVector << " posiciones del vector: ";
    for (int i=0;i<tamVector;i++){
        cin >> numeros[i];

    }
    for (int i=0;i<tamVector-1;i++){
       if(numeros[i]<numeros[i+1]){
           ascendente=true;
       }
         if(numeros[i]>numeros[i+1]){
           descendente=true;
        }
    }
    if(ascendente==true && descendente==false){
        cout << "Estan ordenados de forma ascendente" << endl;
    }else if(ascendente==false && descendente==true){
        cout << "Estan ordenados de forma descendente" << endl;
    }else{
        cout << "Estando desordenados"<< endl;
    }

    return 0;
}