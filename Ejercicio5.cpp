//5. Solicitar al usuario que ingrese una cadena y contar cuántas vocales contiene.

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    char cadena[50];
    int a=0, e=0, i=0, o=0, u=0;
    int total;

    cout << "Escribe una cadena de texto y contare las vocales de esta: " << endl;
    cin >> cadena;

    for(int j=0; j<50; j++){
        switch (cadena[j]){
        case 'a':
        case 'A':
            a++;
            break;
        case 'e':
        case 'E':
            e++;
            break;
        case 'i':
        case 'I':
            i++;
            break;
        case 'o':
        case 'O':
            o++;
            break;
        case 'u':
        case 'U':
            u++;
            break;
        }
    }
    
    total = a+e+i+o+u;
    
    cout << "Conteo de vocales: " << endl;
    cout << "Vocal a: " << a << endl;
    cout << "Vocal e: " << e << endl;
    cout << "Vocal i: " << i << endl;
    cout << "Vocal o: " << o << endl;
    cout << "Vocal u: " << u << endl;
    cout << "Total de vocales: " << total << endl;
    

    return 0;
}
