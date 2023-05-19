//4. Escribir un programa que determine si un número ingresado por el usuario es primo.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;

    cout << "Dime un numero y te dire si es primo: " << endl;
    cin >> num;

    if(num % 2 == 0){
        cout << "El numero " << num << " NO es primo" << endl;
    }else{
        if(num % num == 0){
            cout << "El numero " << num << " es primo" << endl;
        }
    }
    
    return 0;
}

