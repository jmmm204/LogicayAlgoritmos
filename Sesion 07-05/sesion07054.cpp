/* Mostrar los primeros 300 numeros pares */

#include <iostream>

using namespace std;

int main()
{
    int i = 0, cont = 0;
    while(i <= 300)
    {
        i++;
        if(i %2 == 0)
        {
            cont ++;
            cout << cont << " " << i << endl;
        }
    }
    return 0;
}