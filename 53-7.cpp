/*Suma y promedio de un vector de 5 posiciones*/

#include <iostream>
using namespace std;
int main(){
    float numeros[5];
    float suma=0, promedio=0;

    for(int i=0;i<5;i++){
        cout << "Ingresa el numero en la posicion " << i <<" del vector: "; cin>>numeros[i];
        suma+=numeros[i];        
    }
    cout << "La suma de todas las posiciones es:" << suma << endl;
    cout << "El promedio del vector es:" << suma/5 << endl;
}