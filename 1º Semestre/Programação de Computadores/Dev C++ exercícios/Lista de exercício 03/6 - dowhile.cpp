// Elabore um algoritmo que imprima todos os n�meros pares inteiros de 1 at� 1000. (do... while)

#include <stdio.h>

int main(){
	int numero = 2;
	
	do{
		printf("%4d\n", numero);
	} 
	
	while ((numero=numero+2) <= 1000);
	
	return 0;
}
