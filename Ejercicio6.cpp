//6. Imprimir la serie de Fibonacci hasta el número 1000.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int primerTermino = 0, segundoTermino = 1, numSiguiente = 0;

    cout << "Serie de Fibonacci hasta el numero 1000: " << endl;

    cout << primerTermino << endl;

    numSiguiente = primerTermino + segundoTermino;

    while(numSiguiente < 1000){
        
        cout << numSiguiente << endl;
        
        primerTermino = segundoTermino;
        segundoTermino = numSiguiente;
        numSiguiente = primerTermino + segundoTermino;
    }
    return 0;
}