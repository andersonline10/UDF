// Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela se o
// número informado é maior que dez, se é menor que dez, ou se é igual a dez

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
	float X;
	printf("Digite um numero real: ");
	scanf("%2f", &X);
	
	if (X == 10)
    printf("O numero e igual a 10\n");
  else
    if (X > 10)
      printf("Valor maior que 10\n");
    else
      printf("Valor e menor que 10\n");

}
