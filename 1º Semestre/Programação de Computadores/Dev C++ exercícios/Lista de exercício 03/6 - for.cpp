// Elabore um algoritmo que imprima todos os números pares inteiros de 1 até 1000. (for)

#include <stdio.h>

int main (){
	
	for(int i = 2; i <= 1000; i = i + 2){
		printf("%4d\n", i);
	}
	return 0;
}
