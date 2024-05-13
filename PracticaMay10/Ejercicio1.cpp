/* Escribe un programa que solicite al usuario un número entero positivo y luego 
imprima todos los números desde 1 hasta ese número. */

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
