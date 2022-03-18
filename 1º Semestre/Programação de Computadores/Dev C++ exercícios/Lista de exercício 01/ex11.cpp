// Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela o
// numero informado e na linha de baixo o dobro deste número da seguinte forma:
// Numero -> X
// Dobro deste numero -> Y

#include <stdio.h>
#include <conio.h>

int main() {
	float X;
	printf("Digite um numero real: ");
	scanf("%f", &X);
	printf("O numero informado foi %0.2f", X);
	printf("\n O dobro desse numero e %0.2f", X*2);
	
}
