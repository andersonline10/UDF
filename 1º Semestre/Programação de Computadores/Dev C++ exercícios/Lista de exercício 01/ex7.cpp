// Escreva um programa que solicite ao usuário um número inteiro e um número real e ao final apresente na tela os dois números informados formatando com duas casas decimais
// somente o número real da seguinte forma: "Voce informou os numeros N e X.YY"

#include<stdio.h>
#include<conio.h>

int main(){
	int x;
	float y;
	
	printf("Informe um numero inteiro: ");
	scanf("%d", &x);
	
	printf("Informe um numero real: ");
	scanf("%f", &y);
	
	printf("Voce informou os numeros %d e %0.2f",x, y); // como unir essa linha

	getch();
}
