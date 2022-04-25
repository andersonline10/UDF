/* Elabore um algoritmo que indique se um número digitado está compreendido entre 20 e
90, ou não */

#include <stdio.h>

int main (){
	float numero;
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	if (numero >= 20 && numero <= 90) {
		printf("%0.2f esta compreendido entre 20 e 90.", numero);
	}
	else {
		printf("%0.2f nao esta compreendido entre 20 e 90.", numero);
	}
return 0;
}
