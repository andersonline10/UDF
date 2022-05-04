/* Elabore um algoritmo que solicite ao usuário um número inteiro que indicará a quantidade
de vezes que o texto "Hello World!" será impresso na tela, um em cada linha. (for)  */

#include <stdio.h>
	
	int main(){
		int numero;
		
		printf("Informe a quandidade de vezes para imprimir o texto 'Hello World!': ");
		scanf("%d", &numero);
		
		for (int contador = 1; contador <= numero; contador++){
			printf("%3d - Hellow World!\n", contador);
		}
		
		return 0;
	}
