/* Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
números a serem lidos. Em seguida, leia n números (conforme o valor informado
anteriormente) e imprima a soma e a média aritmética dos números informados. (while)*/ 

#include <stdio.h>

int main(){
	int numero, contador = 1, qtdade, soma = 0;
	float media;
	
	
	printf("Informe a quantidade de entradas de numeros para operacoes de soma e media aritmetica: ");
	scanf("%d", &qtdade);
	
	printf("Informe o 1o numero: ");
	scanf("%d", &numero);
	soma = soma + numero;
	contador++;
	
	while(contador <= qtdade){
		printf("Informe o %do numero: ", contador);
		scanf("%d", &numero);
		soma = soma + numero;
		media = (float)soma / qtdade;
		contador++;
	}
	
	printf("A soma dos %d numeros informados e %d.\n", qtdade, soma);
	printf("A media aritmetica dos %d numeros informados e de %.2f.\n", qtdade, media); 
	
	return 0;
}
