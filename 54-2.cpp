/* Llenar un vector con 100 numeros aleatorios*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main(){
    float numeros[100];
   
    srand(time(0));
    for(int i=0;i<100;i++){
      numeros[i]= rand()%100;
      cout << numeros[i] << endl;
    }
    
}