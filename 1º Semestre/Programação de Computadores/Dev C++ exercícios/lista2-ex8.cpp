/*Elabore um algoritmo que leia um n�mero, e se ele for maior do que 20, imprimir a metade
desse n�mero, caso contr�rio, imprimir o dobro do n�mero */

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
