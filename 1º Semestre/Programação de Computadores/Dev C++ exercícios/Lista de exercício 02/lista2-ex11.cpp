#include <stdio.h>
#include <iostream>
using namespace std;

/*11. Elabore um algoritmo que leia o nome e o peso de duas pessoas e imprima o nome da pessoa mais pesada */

int main(){
	float peso1, peso2;
	string nome1, nome2;
	
	printf("Digite o nome da primeira pessoa: ");
	scanf("%s", &nome1);
	
	printf("Digite o peso de %s (Ex. 80): ", &nome1); //porque tenho que colocar & antes das vari�veis em alguns casos e outros n�o (tenho que colocar no string e n�o nos n�meros)
	scanf("%f", &peso1);
	
	printf("Digite o nome da segunda pessoa: ");
	scanf("%s", &nome2);
	
	printf("Digite o peso de %s (Ex. 80): ", &nome2);
	scanf("%f", &peso2);
	
	if(peso1 > peso2){
		printf("%s e mais pesado do que %s.", &nome1, &nome2);
	} 
		else if(peso1 == peso2){
			printf("%s e %s tem o mesmo peso.", &nome1, &nome2);
	} 	
		else {
		printf("%s e mais pesado do que %s.", &nome2, &nome1);
	}
	
return 0;
}
