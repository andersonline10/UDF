// Elabore um algoritmo que imprima todos os n�meros �mpares de 1000 at� 0. (for)

#include <stdio.h>

int main(){
	
	for (int i = 999; i >= 0; i = i - 2){
		printf("%4d\n", i);
	}
	return 0;
}
