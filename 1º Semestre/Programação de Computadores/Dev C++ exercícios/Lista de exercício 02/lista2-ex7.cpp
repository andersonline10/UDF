/*Desenvolva um algoritmo que classifique um n�mero inteiro fornecido pelo usu�rio como
par ou �mpar */

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
