//Elabore um algoritmo que imprima todos os n�meros decrescentes de 100 at� 0 inclusive. (while)

#include <stdio.h>

int main(){

	int numero = 100;
	
	while ( numero >= 0 ){
		printf("%3d\n", numero);
		numero--;
	}
	
	return 0;
}
