#include <iostream>

using namespace std;

int main(){
	int num, *ptr, i = 0;
	ptr = &num;
	cout << "Dime un numero: ";
	scanf("%d", &num);
	
	while(i <= 12){
		printf("%i * %i = %i\n", i, *ptr, i* *ptr);
		i++;	
	}
	return 0;
}
