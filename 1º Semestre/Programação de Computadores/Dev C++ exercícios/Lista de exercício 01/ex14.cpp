// Escreva um programa que solicite ao usuário dois números reais e ao final apresente na
// tela o produto dos dois números informados da seguinte forma: "O produto dos numeros N
// e X corresponde a Y"

#include<stdio.h>
#include<conio.h>

int main(){
	float N, X;
	printf("Digite o numero real N: ", N);
	scanf("%f", &N);
	printf("Digite o numero real X: ", X);
	scanf("%f", &X);
	
	printf("O produto dos numeros reais N e X e %0.2f :", N*X);
	
}
