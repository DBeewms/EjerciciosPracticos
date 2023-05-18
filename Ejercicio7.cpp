//7. Solicitar al usuario que ingrese dos números y mostrar el máximo común divisor (MCD) de ambos.

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2, temp1, temp2, respuesta;
    cout << "Escribe un numero: " << endl;
    cin >> num1;
    cout << "Escribe otro numero: " << endl;
    cin >> num2;

    temp1 = max(num1, num2);
    temp2 = min(num1, num2);
    
    do{
        respuesta = temp2;
        temp2 = temp1 % temp2;
        temp1 = respuesta;
    }while(temp2 != 0);

    cout << "El maximo comun divisor de " << num1 << " y " << num2 << " es " << respuesta << endl;

    return 0;
}

