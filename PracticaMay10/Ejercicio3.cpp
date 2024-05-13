/* Escribe un programa que solicite al usuario un número entero no negativo y
calcule su factorial. */

#include <iostream>

using namespace std;

int main(){
	int i;
	int factorial = 1;
	int contador = 1;
	
	cout << "Ingrese un numero entero no negativo: ";
	cin >> i;
	
	if(i < 0){
		cout << "El numero que ha ingresado es negativo." << endl;
	}
	
	while(contador <= i){
		factorial *= contador;
		contador ++;
	}
	
	cout << "El factorial de su numero es: " << factorial << endl;
	
	return 0;
}
