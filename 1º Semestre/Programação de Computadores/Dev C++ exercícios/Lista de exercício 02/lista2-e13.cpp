/* Elabore um algoritmo que leia dois n�meros e imprima qual � maior, qual � menor, ou se
s�o iguais */

#include <stdio.h>

int main (){
	float numero1, numero2;
	printf("Digite o primeiro numero: ");
	scanf("%f", &numero1);
	printf("Digite o segundo numero: ");
	scanf("%f", &numero2);
	
	if (numero1 > numero2) {
		printf("O numero %0.2f e maior que o numero %0.2f", numero1, numero2);
}
		else if (numero1 < numero2) {
			printf("O numero %0.2f e menor que o numero %0.2f", numero1, numero2); //porque preciso colocar no caso dos strings e no n�mero n�o? 
	}
		else {
			printf("O numero %0.2f e igual ao numero %0.2f", numero1, numero2);
	}
return 0;
}
