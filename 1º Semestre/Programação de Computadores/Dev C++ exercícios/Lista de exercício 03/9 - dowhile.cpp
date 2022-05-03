/* Elabore um algoritmo que solicite ao usuário um número inteiro que indicará a quantidade
de vezes que o texto "Hello World!" será impresso na tela, um em cada linha. (do... while)  */

#include <stdio.h>

int main (){
	
	int numero;
	int contador = 1;
	
	printf("Informe a quandidade de vezes para imprimir o texto 'Hello World!': ");
	scanf("%d", &numero);
	
	do{
		printf("%3d - Hello World!\n", contador);
		}
	
	while(++contador <= numero );

	return 0;
}

