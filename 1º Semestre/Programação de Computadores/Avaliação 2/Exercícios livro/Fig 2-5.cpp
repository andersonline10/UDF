/* 	Figura 2.5: fig02_05.c
	Programa de adi��o */
	
#include<stdio.h>

int main(){
	int inteiro1; /*primeiro n�mero a ser informado pelo usu�rio*/
	int inteiro2; /*segundo n�mero a ser informado pelo usu�rio */
	int soma; /* vari�vel em que a soma ser� mantida */
	
	printf("Digite o primeiro inteiro\n"); /* prompt */
	scanf("%d", &inteiro1); /* l� um inteiro */
	
	printf("Digite o segundo inteiro\n"); /* prompt */
	scanf("%d", &inteiro2); /* l� um inteiro */
	
	soma = inteiro1 + inteiro2; /* atribui o total � soma */
	
	printf ("A soma e %d\n", soma); /* print soma */
	
	return 0; 
	
}
