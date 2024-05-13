/* Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego encuentre y muestre el número más grande. */

#include <iostream>

using namespace std;

int main(){
	const int arreglo = 10;
	int numeros[arreglo];
	int contador = 0;
	int maximo;
	
	cout << "Ingrese 10 numeros enteros: " << endl;
	while(contador < arreglo){
		cout << "Numero " << contador + 1 << ": ";
		cin >> numeros[contador];
		contador++;
	}
	
	maximo = numeros[0];
	contador = 1;
	while(contador < arreglo){
		if(numeros[contador] > maximo){
			maximo = numeros[contador];
		}
		contador++;
	}
	
	cout << "El numero mas grande ingresado es: " << maximo << endl;
	
	return 0;
}
