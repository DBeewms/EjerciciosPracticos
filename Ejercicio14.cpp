//14. Solicitar al usuario que ingrese un número y verificar si es un número Armstrong.

#include <math.h>
#include <iostream>
using namespace std;
 
int main(){
    int num, temp, contador = 0, suma = 0;
    int auxiliar;

    cout << "Ingresa un numero y te dire si es un numero de Armstrong o no: "<< endl;
    cin >> num;
    
    temp = num;
    
    while(temp){
        temp = temp / 10;
        contador++;
    }

    temp = num;

    while(temp){
        auxiliar = temp % 10;
        suma = suma + pow(auxiliar, contador);
        temp = temp / 10;
    }
    
    if (suma == num){
        cout << num << " es un numero de Armstrong" << endl;
    }else{
        cout << num << " NO es un numero de Armstrong" << endl;
    }

    return 0;
}