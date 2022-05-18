#include <iostream>
using namespace std;
int main(){
    int tamVector;
    cout<<"Ingresa la cantidad de posciones del arreglo:"; cin>>tamVector;
    int numeros[tamVector];
    cout << "Ingresa las " << tamVector << " posiciones del vector: ";
    for (int i=0;i<tamVector;i++){
        cin >> numeros[i];
    }
    int mayor=numeros[0], menor=numeros[0];

    for (int i=0;i<tamVector;i++){
       
        if(numeros[i] > mayor){
            mayor=numeros[i];
        }
        if(numeros[i] < menor){
            menor=numeros[i];
    }
}
    cout << "El numero mayor es " << mayor << " y el menor es " << menor << endl;

    return 0;
}

