/*Elabore um algoritmo que leia um n?mero de entrada que indicar? a quantidade de
registros a serem lidos (N). Em seguida algoritmo deve solicitar o nome e idade de N
pessoas e ao final apresentar o nome da pessoa mais velha. (for)*/

#include <stdio.h>


	int main (){
	char nome[30], nome_velho[30];
	int idade, idade_velho = 1, contador;
	
	printf("Informe a quantidade de registros: ");
	scanf("%d", &contador);
	
	
	for (int i=1; i <= contador; i++){
		printf("Informe o nome: ");
		scanf("%s", &nome);
		printf("Informe a idade: ");
		scanf("%d", &idade);
		
	if (idade > idade_velho){
		idade_velho = idade;
		for (int j=0; j<30; j++)
			nome_velho[j] = nome[j];
	}
	}
	printf("\nO nome da pessoa mais velha e %s.", nome_velho);  // o nome da pessoa n?o est? saindo no resultado
   	printf("\nSua idade e %d.\n", idade_velho);
   	
   	return 0;

	
}
