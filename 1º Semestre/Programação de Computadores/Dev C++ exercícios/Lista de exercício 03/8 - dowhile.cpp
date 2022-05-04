// Elabore um algoritmo que imprima a soma dos 100 primeiros números inteiros positivos. (do..while) 

#include <stdio.h>

int main(){
	int numero = 1;
	int soma = 0;
	
	do{
		soma = soma + numero;
	}
	
	while (++numero <= 100);
	
	printf("A soma e %3d", soma);
	
	return 0;
}
