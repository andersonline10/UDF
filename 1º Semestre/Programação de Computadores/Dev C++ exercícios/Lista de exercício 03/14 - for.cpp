/*Elabore um algoritmo que solicite ao usuário 10 números reais e ao final apresente o
maior e o menor deles. (for)*/

#include<stdio.h>

int main()

{

float numero, guarda_maior, guarda_menor;
int i;

	printf("Entre com o 1o numero real: ");
	scanf("%f", &numero);
	
	guarda_maior = numero;
	guarda_menor = numero;
	
	for(i = 1; i < 10; i++)
	{
		printf("\nEntre com o %do numero real: ",i+1);
		scanf("%f", &numero);
		
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

