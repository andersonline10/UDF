/*Elabore um algoritmo que solicite ao usu�rio 10 n�meros reais e ao final apresente o
maior e o menor deles. (while)*/

#include<stdio.h>

int main()

{

float numero, guarda_maior, guarda_menor;
int i = 1;

	printf("Entre com o 1o numero real: ");
	scanf("%f", &numero);
	
	guarda_maior = numero;
	guarda_menor = numero;
	
	
	while (i < 10){
		printf("\nEntre com o %do numero real: ",i+1);
		scanf("%f", &numero);
		i++;
		
		if(numero > guarda_maior)
		guarda_maior = numero;
		else
			if(numero < guarda_menor)
			guarda_menor = numero;
	}
	
	
	printf("\nO menor numero entrado e: %.2f", guarda_menor);
	printf("\nO maior numero entrado e: %.2f", guarda_maior);
	
	return 0;
	
	}
