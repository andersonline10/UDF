/* Elabore um algoritmo que leia um n�mero de entrada que indicar� a quantidade de
n�meros a serem lidos. Em seguida, leia n n�meros (conforme o valor informado
anteriormente) e imprima a soma e a m�dia aritm�tica dos n�meros informados. (while)*/ 

#include <stdio.h>

int main(){
	int numero = 1;
	int soma = 0;
	int contador;
	int media;
		
	printf("Informe o numero de entrada que servira para a quantidade de numeros das operacoes de soma e media aritmetica: ");
	scanf("%d", &contador);
	
	while(numero <= contador){
		soma = soma + numero;
		media = soma / contador;
		numero++;
		
	}
	
	printf("A soma dos numeros entre 1 e %d e %d.\n", contador, soma);
	printf("A media aritmetica dos numeros entre 1 e %d e %d.\n", contador, media); //o resultado est� sendo um pouco errado (com contador em 10) soma 55 e media aritmetica est� com 5, quando era pra ser 5,50, n�o consegui colocar float.
	
	return 0;
}
