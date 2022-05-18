#include <iostream>
using namespace std;
int main(){

    int tamVector;
    int ultimo;
    cout<<"Ingresa la cantidad de posciones del arreglo:"; cin>>tamVector;
    int numeros[tamVector];
    cout << "Ingresa las " << tamVector << " posiciones del vector: ";
    for (int i=0;i<tamVector;i++){
        cin >> numeros[i];

    }
    ultimo = numeros[tamVector-1];

   for (int i=tamVector-1;i==0;i--){
       numeros[i+1]=numeros[i];

    }
    numeros[0]=ultimo;

    for (int i=0;i<tamVector+1;i++){
        cout << numeros[i] << endl;

    }
return 0;
}
    