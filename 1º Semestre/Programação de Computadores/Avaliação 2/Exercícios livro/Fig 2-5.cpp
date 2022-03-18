/* 	Figura 2.5: fig02_05.c
	Programa de adição */
	
#include<stdio.h>

int main(){
	int inteiro1; /*primeiro número a ser informado pelo usuário*/
	int inteiro2; /*segundo número a ser informado pelo usuário */
	int soma; /* variável em que a soma será mantida */
	
	printf("Digite o primeiro inteiro\n"); /* prompt */
	scanf("%d", &inteiro1); /* lê um inteiro */
	
	printf("Digite o segundo inteiro\n"); /* prompt */
	scanf("%d", &inteiro2); /* lê um inteiro */
	
	soma = inteiro1 + inteiro2; /* atribui o total à soma */
	
	printf ("A soma e %d\n", soma); /* print soma */
	
	return 0; 
	
}
