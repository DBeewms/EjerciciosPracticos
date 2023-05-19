//13. Imprimir los números impares del 1 al 50 en orden descendente.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Imprimiendo numeros impares desde el 50 hasta 1..." << endl;
    for(int i=50; i>0; i--){
        if(i % 2 != 0){
        cout << i << endl;
        }
    }
    return 0;
}
