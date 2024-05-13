/* Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego cuente y muestre la cantidad de números pares
e impares */

#include <iostream>

using namespace std;

int main(){
	const int arreglo = 10;
	int numeros[arreglo];
	int contadorPares = 0;
	int contadorImpares = 0;
	int i = 0;
	
	cout << "Ingrese 10 numeros enteros: " << endl;
	while(i < arreglo){
		cout << "Numero " << (i + 1) << ": ";
		cin >> numeros[i];
	
	if(numeros[i] % 2 == 0){
		contadorPares++;
	}else{
		contadorImpares++;
	}
	
	i++;
}

cout << "Cantidad de numeros pares: " << contadorPares << endl;
cout << "Cantidad de numeros impares: " << contadorImpares << endl;
	
	return 0;
} 
