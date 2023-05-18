//3. Calcular el factorial de un número ingresado por el usuario utilizando un bucle.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long num;
    long factorial;

    factorial = 1;

    cout << "Dime un numero y te dare su factorial: " << endl;
    cin >> num;

    for(long i = 1; i<=num; i++){
        factorial = factorial * i;
    }
    cout << factorial;

    return 0;
}
