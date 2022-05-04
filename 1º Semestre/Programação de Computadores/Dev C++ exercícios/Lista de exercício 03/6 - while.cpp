// Elabore um algoritmo que imprima todos os números pares inteiros de 1 até 1000. (while)

#include <stdio.h>

int main(){
	int numero = 2;
	
	while (numero <= 1000){
		printf("%4d\n", numero);
		numero = numero + 2;
	}
	return 0;
}

