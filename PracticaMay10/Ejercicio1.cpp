/* Escribe un programa que solicite al usuario un n�mero entero positivo y luego 
imprima todos los n�meros desde 1 hasta ese n�mero. */

#include <iostream>

using namespace std;

int main(){
	int i;
	int contador;
	contador = 1;
	cout << "Ingrese un numero entero positivo: ";
	cin >> i;
	if(i <= 0){
		cout << "El numero que ha ingresado no es positivo." << endl;
	}
	
	while(contador <= i){
		cout << contador << endl;
		contador++;
	}
	
	
	return 0;
}
