//10. Imprimir los primeros 100 números primos.

#include <iostream>
using namespace std;

bool esPrimo(int num);

bool esPrimo(int num){
    bool marcador;
    if (num != 1 && num != 0){
        for(int i = 2; i <= num; i++){
            if(num % i == 0){
                if(num == i){
                    marcador = true;
                }else{
                    marcador = false;
                    return marcador;
                }
            }
        }
        
    }else{
        marcador = false;
    }
    return marcador;
}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Ingresa el numero limite: " << endl;
    cin >> num;

    cout << "Imprimiendo los primeros 100 numeros primos..." << endl;
    for(int i = 1; i <= num; i++){
        if(esPrimo(i)){
            cout << i << endl;
        }
    }

    return 0;
} 