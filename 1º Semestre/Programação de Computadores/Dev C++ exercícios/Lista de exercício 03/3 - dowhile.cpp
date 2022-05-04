/* Elabore um algoritmo que imprima todos os números inteiros de 1 até 100 inclusive. (usando do... while) */

#include <stdio.h>

int main(){
	int numero = 1;
	
	do {
		printf("%d\n", numero);
		
	} while (++numero <= 100);
	
	
	return 0;
	
}
