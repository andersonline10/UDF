/*Elabore um algoritmo que leia dois números inteiros e realize a adição; caso o resultado
seja maior que 10, imprima o quadrado do resultado, caso contrário, imprima a metade dele*/

#include <stdio.h>
#include <cmath>

int main (){
	int numero1, numero2, resultado, quadrado, metade;
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero1);
	printf("Digite outro numero inteiro: ");
	scanf("%d", &numero2);
	
	resultado = numero1 + numero2;
	quadrado = pow(resultado,2);
	metade = resultado / 2;
	
	if (resultado > 10) {
		printf("O quadrado da soma de %d e %d e: %d", numero1, numero2, quadrado);
	}
	else {
		printf("A metade da soma de %d e %d e: %d",  numero1, numero2, metade);
}

	return 0;
}


