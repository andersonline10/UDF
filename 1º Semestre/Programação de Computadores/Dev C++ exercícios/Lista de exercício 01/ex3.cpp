// Escreva um programa que solicite ao usu�rio um n�mero inteiro e ao final apresente na tela o n�mero informado da seguinte forma: "Foi informado o valor: X"

#include<stdio.h>
#include<conio.h>

int main(){
	int Numero;
	printf("Digite um numero: ");
	scanf("%d", &Numero);
	
	printf("Foi informado o valor: %d", Numero);
	getch();
	
	
}
