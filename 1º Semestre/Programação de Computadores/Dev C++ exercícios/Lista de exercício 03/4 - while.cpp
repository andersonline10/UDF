// Elabore um algoritmo que imprima 100 vezes o texto "1- Hello World!" com o número. (usando while)

#include <stdio.h>

int main (){
	int numero = 1;
	
	while (numero <=100){
		printf("%3d - Hellow World!\n", numero);
		numero++;
		}
	return 0;
}
