/* Elabore um algoritmo que leia um n�mero inteiro e imprima uma das mensagens: � m�ltiplo
de 3, ou, n�o � m�ltiplo de 3  */

// Refazer o exerc�cio anterior, solicitando antes o m�ltiplo a ser testado

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


