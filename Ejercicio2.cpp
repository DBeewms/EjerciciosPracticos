//2. Solicitar al usuario que ingrese un número y determinar si es positivo o negativo.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Ingresa un numero y te dire si es positivo o negativo: " << endl;
    cin >> num;

    if(num>0){
        cout << "El numero " << num << " es positivo" << endl;
    }else if(num<0){
        cout << "El numero " << num << " es negativo" << endl;
    }else{
        cout << "El numero es 0";
    }

    return 0;
}



   

