/* Elabore um algoritmo que solicite ao usu�rio uma palavra e um n�mero inteiro que
indicar� a quantidade de vezes que a palavra digitada ser� impressa na tela, um em cada
linha. (for) */

#include <stdio.h>

int main(){
	char palavra[30];
	int numero;
	
	printf("Informe uma palavra: ");
	scanf("%s", &palavra);
	
	printf("Informe a quantidade de vezes que essa palavra sera impressa na tela: ");
	scanf("%d", &numero);
	
	for (int contador = 1; contador <= numero; contador++){
		printf("%3d - %s\n", contador, palavra);
	}
	return 0;
}
