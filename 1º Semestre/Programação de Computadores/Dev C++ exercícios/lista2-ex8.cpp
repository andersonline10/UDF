/*Elabore um algoritmo que leia um número, e se ele for maior do que 20, imprimir a metade
desse número, caso contrário, imprimir o dobro do número */

#include <stdio.h>
#include <conio.h>

int main(){
	float numeroReal;
	
	printf("Digite um numero: ");
	scanf("%f", &numeroReal);
	
	if (numeroReal > 20){
		printf("A metade de %0.0f e %0.2f", numeroReal, numeroReal/2);
	}
	
	else {
		printf("O dobro de %0.0f e %0.2f", numeroReal, numeroReal*2);
	}

	getch();
}
