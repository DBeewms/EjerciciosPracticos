//4. Escribir un programa que determine si un número ingresado por el usuario es primo.

#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int num, contador = 0;
	
	cout << "Dime un numero: " << endl;
    cin >> num;
	
	for(int i=1; i <= num; i++){
		if(num % i ==0){
			contador++;
		}
	}
	
	if(contador > 2){
		cout << "El numero " << num << " NO es primo" << endl;
	}
	else{
		cout << "El numero " << num << " es primo" << endl;
	}
	
	return 0;
}
