// Elabore um algoritmo que imprima a soma dos 100 primeiros números inteiros positivos. (for)

#include <stdio.h>

int main(){
	int soma = 0;
	
	for(int i = 1; i <= 100; i++){
		soma = soma + i;
	}
	printf("A soma e %4d", soma);
	
	return 0;
}
