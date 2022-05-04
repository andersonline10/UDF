// Elabore um algoritmo que imprima todos os números ímpares de 1000 até 0. (while)

#include <stdio.h>

int main(){
	int numero = 999;
	
	while(numero >= 0){
		printf("%4d\n", numero);
		numero = numero - 2;
	}
	return 0;
}
