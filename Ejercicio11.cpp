//11. Solicitar al usuario que ingrese una cadena y determinar si es un palíndromo.

#include <iostream>
#include <string.h>


using namespace std;

#define TAM 40

int main() {
    char palindromo[TAM];
    int longitud;
    int inicio = 0, fin;

    cout << "Ingrese una palabra:" << endl;
    cin.getline(palindromo, TAM);

    longitud = strlen(palindromo);

    for (fin = longitud - 1; palindromo[fin] == palindromo[inicio] && fin >= 0; inicio++, fin--)
        ;

    if (inicio == longitud) {
        cout << "Es un palindromodromo" << endl;
    } else {
        cout << "No es palindromodromo" << endl;
    }

    return 0;
}