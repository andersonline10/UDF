// Escreva um programa que solicite ao usuário a temperatura em graus Celsius e ao final apresente a temperatura correspondente em graus Farenheit. F = Celsius * 1.8 + 32

#include<stdio.h>
#include<conio.h>

int main(){
	int C, F;
	printf("Qual a temperatura em Celcius? ");
	scanf("%d", &C);
	F = C*1.8 +32;
	printf("A temperatura em Farenheit e: %d", F);
	getch();
}
