// Elabore um algoritmo que solicite ao usu�rio um n�mero real e ao final imprima na tela se o
// n�mero informado � maior que dez, se � menor que dez, ou se � igual a dez

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
