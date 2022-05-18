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
    for (int i=0;i<tamVector/2;i++){

        cout << numeros[i];
        cout << numeros [(tamVector -1) - i];
        

    }
    cout<<endl;

    return 0;
}

