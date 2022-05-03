/* Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
números a serem lidos. Em seguida, leia n números (conforme o valor informado
anteriormente) e imprima a soma e a média aritmética dos números informados. (do... while)*/ 

#include <stdio.h>

int main(){
	int contador;
	int soma = 0;
	int media;
	int numero = 1;
		
	printf("Informe o numero de entrada que servira para a quantidade de numeros das operacoes de soma e media aritmetica: ");
	scanf("%d", &contador);
	
	do{
		soma = soma + numero;
		media = soma / contador;
	}
	while (++numero <= contador);
	
	printf("A soma dos numeros entre 1 e %d e %d.\n", contador, soma);
	printf("A media aritmetica dos numeros entre 1 e %d e %d.\n", contador, media); //o resultado está sendo um pouco errado (com contador em 10) soma 55 e media aritmetica está com 5, quando era pra ser 5,50, não consegui colocar float.
	
	return 0;
	
}
