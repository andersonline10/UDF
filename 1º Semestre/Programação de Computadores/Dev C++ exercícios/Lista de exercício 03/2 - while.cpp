/* Elabore um algoritmo que imprima na tela um por linha o texto "Hello World!" 10 vezes. (usando while) */

#include <stdio.h>

int main(){
	int contador = 1;
	
	while (contador <= 10) {
	printf("Hello World\n");	
	contador = contador + 1;
	}
	
	return 0;
}
