/* Escribe un programa que solicite al usuario ingresar 5 números enteros, los
almacene en un arreglo y luego los ordene en forma ascendente utilizando el
algoritmo de ordenamiento de burbuja. */

#include <iostream>

using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    const int size = 5;
    int numbers[size];

    cout << "Ingrese 5 numeros enteros:" << endl;
    int i = 0;
    while (i < size) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numbers[i];
        ++i;
    }

    bubbleSort(numbers, size);

    cout << "Numeros ordenados en forma ascendente:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
