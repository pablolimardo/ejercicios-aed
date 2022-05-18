#include <iostream>
using namespace std;
int main(){
int tamVector;
cout<<"Ingresa la cantidad de posciones del arreglo:"; cin>>tamVector;
char caracteres[tamVector];
cout << "Ingresa las " << tamVector << " posiciones del vector: ";
for (int i=0;i<tamVector;i++){
    cin >> caracteres[i];

}
cout << endl;
cout << "Orden Inverso:"<<endl;
for(int i=(tamVector-1);i>=0;i--){
    cout << caracteres[i] << endl;
}
    
}