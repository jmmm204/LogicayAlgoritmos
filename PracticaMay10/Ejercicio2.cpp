/* Escribe un programa que pida al usuario ingresar n�meros enteros positivos y
calcule la suma de todos los n�meros ingresados hasta que el usuario ingrese un
n�mero negativo. */

#include <iostream>

using namespace std;

int main(){
	int i;
	int suma = 0;
	
	cout << "Ingrese numeros enteros positivos (ingrese un numero negativo cuando desee finalizar): \n";
	
	while(true){
		cout << "Ingrese un numero entero positivo: ";
		cin >> i;
	
	if(i < 0){
		break;
	}
	
	suma += i;
}
	cout << "La suma de los numeros ingresados es: " << suma << endl;
	
	return 0;
}

