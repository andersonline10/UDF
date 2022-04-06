/* Elabore um algoritmo que leia um número inteiro e imprima uma das mensagens: é múltiplo
de 3, ou, não é múltiplo de 3  */

// Refazer o exercício anterior, solicitando antes o múltiplo a ser testado

#include<stdio.h>
#include<conio.h>

int main(){


	int numeroInteiro, multiplo;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numeroInteiro);
	
	printf("Qual e o multiplo a ser testado? ");
	scanf("%d", &multiplo);
	
		
	if (numeroInteiro % multiplo == 0) {
		printf("\n O numero digitado e multiplo de %d", multiplo);
		
	} 
	
	else  {
		printf("\n O numero digitado nao e multiplo de %d", multiplo);
		}
		
	getch();
	
}


