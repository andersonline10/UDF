// Escreva um programa que solicite ao usu�rio um n�mero real e ao final apresente na tela o n�mero informado formatado com duas casas decimais da seguinte forma:
// "Voce informou o numero X.YY"

#include<stdio.h>
#include<conio.h>

int main(){
	float X;
	printf("Digite um numero real: ");
	scanf("%f", &X);
	printf("Voce informou o numero: %0.2f", X);
	getch();
}
