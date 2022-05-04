// Elabore um algoritmo que imprima 100 vezes o texto "1- Hello World!" com o número. (usando do... while)

#include <stdio.h>

int main(){
	int numero = 1;
	
	do{
		printf("%3d - Hello World!\n", numero);
	} while (++numero <=100);
	
	return 0;
}
