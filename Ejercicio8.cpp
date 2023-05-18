//8. Calcular la suma de los números pares del 1 al 100.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int resp;

    cout << "Suma de los numeros pares del 1 al 100: " << endl;
    cout << "Sumando..." << endl;

    for(int i=1; i<101; i++){
        if(i % 2 == 0){
        cout << resp << " + " << i;
        resp = resp + i;
        cout << " = "<< resp << endl;
        }
    }
    cout << "La suma de los numeros pares de 1 al 100 es: " << resp;

    return 0;
}