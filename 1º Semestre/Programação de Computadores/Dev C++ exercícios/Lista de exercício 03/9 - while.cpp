/* Elabore um algoritmo que solicite ao usu�rio um n�mero inteiro que indicar� a quantidade
de vezes que o texto "Hello World!" ser� impresso na tela, um em cada linha. (while)  */

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
