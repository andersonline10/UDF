// Escreva um programa que solicite ao usuário dois números inteiros e ao final apresente na tela os dois números informados da seguinte forma: "Voce informou os numeros X e Y"


#include<stdio.h>
#include<conio.h>

int main(){
	int X, Y;
	printf("Digite um numero: ");
	scanf("%d", &X);
	printf("Digite outro numero: ");
	scanf("%d", &Y);
	
	
	printf("Voce informou os numeros %d ", X); //como unier a linha 15 com a linha 16
	printf("e %d", Y);
	getch();
}


