/* Elabore um algoritmo que solicite ao usuário um número inteiro que indicará a quantidade
de vezes que o texto "Hello World!" será impresso na tela, um em cada linha. (while)  */

#include <stdio.h>

int main(){

	int numero, contador = 1;

	printf("Informe a quantidade de vezes para imprimir o texto 'Hello World': ");
	scanf("%d", &numero);	

	while(contador <= numero){
		printf("%3d - Hello World!\n", contador);
		contador++;
		}
	return 0;
	
}
