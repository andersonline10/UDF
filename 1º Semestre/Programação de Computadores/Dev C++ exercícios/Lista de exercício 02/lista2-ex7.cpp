/*Desenvolva um algoritmo que classifique um número inteiro fornecido pelo usuário como
par ou ímpar */

#include <stdio.h>
#include <conio.h>

int main(){
	int numeroInteiro;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numeroInteiro);
	
	if (numeroInteiro % 2 == 0 ){
		printf("O numero e par.");
	}
	
	else {
		printf("O numero e impar.");
	}

	getch();
}
