// Elabore um algoritmo que imprima a soma dos 100 primeiros números inteiros positivos. (while)

#include <stdio.h>

int main(){
	int numero = 1;
	int soma = 0;
	
	while(numero<=100){
		soma = soma + numero;
		numero = numero + 1;
	}
	
	printf("A soma e %4d.", soma);
}
