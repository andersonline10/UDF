// Escreva um programa que solicite ao usu�rio dois n�meros inteiros e ao final apresente
// na tela a soma dos dois n�meros informados da seguinte forma: "O numeros N e X
// somados correspondem a Y"

#include <stdio.h>
#include <conio.h>

int main(){
	int N, X;
	printf("Digite o numero inteiro N: ");
	scanf("%d", &N);
	printf("Digite o numero inteiro X: ");
	scanf("%d", &X);
	
	printf("Os numeros inteiros N e X somados correspondem a: %d", N+X);
	
}
