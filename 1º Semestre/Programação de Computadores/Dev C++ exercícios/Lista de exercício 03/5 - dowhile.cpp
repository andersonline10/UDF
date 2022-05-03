//Elabore um algoritmo que imprima todos os números decrescentes de 100 até 0 inclusive. (do...while)

#include <stdio.h>

int main(){
	int numero = 100;
	
	
	do{
		printf("%3d\n", numero);
		} while(--numero >= 0);
	
	return 0;
}


