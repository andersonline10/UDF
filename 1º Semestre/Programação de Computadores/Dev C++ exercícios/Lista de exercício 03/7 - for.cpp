// Elabore um algoritmo que imprima todos os números ímpares de 1000 até 0. (for)

#include <stdio.h>

int main(){
	
	for (int i = 999; i >= 0; i = i - 2){
		printf("%4d\n", i);
	}
	return 0;
}
