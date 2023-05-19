//15. Generar una tabla de multiplicar para un número ingresado por el usuario.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Dime un numero y te dare su tabla de multiplicar: " << endl;
    cin >> num;

    for(int i = 1; i<=12; i++){
        cout << num << " * " << i << " = " << num*i<< endl;
    }
    return 0;
}
