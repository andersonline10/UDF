/* Elabore um algoritmo que leia um número inteiro e imprima uma das mensagens: é múltiplo
de 3, ou, não é múltiplo de 3  */

#include<stdio.h>
#include<conio.h>

int main(){


	int numeroInteiro;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numeroInteiro);
	
		
	if (numeroInteiro % 3 ==0) {
		printf("O numero digitado e multiplo de 3");
	} 
	
	else  {
		printf("O numero digitado nao e multiplo de 3");
		}
		
	getch();
	
}


