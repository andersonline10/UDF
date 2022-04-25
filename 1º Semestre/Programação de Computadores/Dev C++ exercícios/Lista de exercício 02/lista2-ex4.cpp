// Elabore um algoritmo que solicite ao usuário um número real e ao final imprima na tela se o
// número informado é positivo, negativo ou nulo (zero)

#include<stdio.h>
#include<conio.h>

int main(){
	float X;
	printf("Digite um numero real: ");
	scanf("%2f", &X);
	
	if (X > 0){
		printf("O numero informado e positivo.\n");
}
	else 
		if (X < 0){
			printf("O numero e negativo.");
		}
		else{
			printf("O numero e nulo.\n");
		}
	getch();
	
}
