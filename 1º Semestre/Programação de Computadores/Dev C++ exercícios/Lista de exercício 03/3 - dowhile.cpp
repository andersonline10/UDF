/* Elabore um algoritmo que imprima todos os n�meros inteiros de 1 at� 100 inclusive. (usando do... while) */

#include <stdio.h>

int main(){
	int numero = 1;
	
	do {
		printf("%d\n", numero);
		
	} while (++numero <= 100);
	
	
	return 0;
	
}
