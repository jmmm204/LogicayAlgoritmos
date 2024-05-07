/* Leer un numero y obtener la tabla de multiplicacion de dicho numero */

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    int count = 1;
    while(count <= 12){
        cout << num << "X" << count << "=" << num * count << endl;
        count++;
    }
    cout << "Feliz cumpleaños Gabriela!";

    return 0;
}