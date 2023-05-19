//12. Calcular la suma de los dígitos de un número ingresado por el usuario.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num, suma = 0;
    cout << "Dime un numero para sumar sus digitos" << endl;
    cin >> num;

    while(num > 0){
        suma = suma + num % 10;
        num = num/10;
    }

    cout << "La suma de los digitos es igual a: " << suma << endl;
    return 0;
}
