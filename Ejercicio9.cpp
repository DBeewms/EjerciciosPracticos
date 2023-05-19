//9. Solicitar al usuario que ingrese un número y determinar si es un número perfecto.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[]){
    int num, suma =0;

    cout << "Dime un numero y te dire si es perfecto o no: " << endl;
    cin >> num;

    for(int i = 1; i < num; i++){                      
        if (num % i == 0) {
            suma = suma + i; 
        }
    }
    if(suma == num){                          
        cout << "El numero " << num << " es perfecto";
    }else{
        cout << "El numero " << num << " NO es perfecto";

    }
    return 0;
}


    