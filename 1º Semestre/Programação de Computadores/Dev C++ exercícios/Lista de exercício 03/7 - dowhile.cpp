// Elabore um algoritmo que imprima todos os n�meros �mpares de 1000 at� 0. (do...while)

#include <stdio.h>

int main(){
	int numero = 999;
	
	do{
		printf("%4d\n", numero);
	}
	while ((numero = numero - 2) >= 0);
	
	return 0;
}

