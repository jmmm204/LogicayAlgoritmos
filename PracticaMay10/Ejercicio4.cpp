/* Escribe un programa que solicite al usuario ingresar 5 números enteros, los
almacene en un arreglo y luego calcule la suma de todos los elementos del
arreglo. */

#include <iostream>

using namespace std;

int main(){
	const int arreglo = 5;
	int numeros[arreglo];
	int suma = 0;
	int contador = 0;
	
	cout << "Ingrese 5 numeros enteros: " << endl;
	while(contador < arreglo){
		cout << "Numero " << contador + 1 << ": ";
		cin >> numeros[contador];
		suma += numeros[contador];
		contador++;
	}	
	
	cout << "La suma de los numeros ingresados es: " << suma << endl;
	
	return 0;
}
