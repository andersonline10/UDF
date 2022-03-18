// Escreva um programa que solicite ao usuário um número inteiro e ao final apresente na tela o número informado da seguinte forma: "Foi informado o valor: X"

#include<stdio.h>
#include<conio.h>

int main(){
	int Numero;
	printf("Digite um numero: ");
	scanf("%d", &Numero);
	
	printf("Foi informado o valor: %d", Numero);
	getch();
	
	
}
