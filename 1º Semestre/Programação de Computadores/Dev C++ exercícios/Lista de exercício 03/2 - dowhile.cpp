/* Elabore um algoritmo que imprima na tela um por linha o texto "Hello World!" 10 vezes. (usando do. while.) */

#include <stdio.h>

int main()
{
	int contador = 1;
	
	do{
		printf("Hellow World\n");
	} while (++contador <= 10);
	
	return 0;
}
