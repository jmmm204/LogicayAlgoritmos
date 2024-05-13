/* Escribe un programa que solicite al usuario ingresar la cantidad de calificaciones
que quiere promediar, luego ingrese esas calificaciones, las almacene en un
arreglo y calcule el promedio. */

#include <iostream>

using namespace std;

int main(){
	int cantidadCalificaciones;
	cout << "Ingrese la cantidad de calificaciones a promediar: ";
	cin >> cantidadCalificaciones;
	
	while(cantidadCalificaciones <= 0){
		cout << "La cantidad de calificaciones debe ser mayor que cero.";
		cin >> cantidadCalificaciones;
	}
	
	float calificaciones[cantidadCalificaciones];
	
	for(int i = 0; i < cantidadCalificaciones; ++i){
		cout << "Ingrese la calificacion " << (i + 1) << ": ";
		cin >> calificaciones[i];
	}
	
	float suma = 0;
	for(int i = 0; i < cantidadCalificaciones; ++i){
		suma += calificaciones[i];
	}
	
	float promedio = suma / cantidadCalificaciones;
	
	cout << "El promedio de las calificaciones es: " << promedio << endl;
	
	return 0;
}
