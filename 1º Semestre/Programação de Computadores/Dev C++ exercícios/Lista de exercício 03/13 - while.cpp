/* Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
registros a serem lidos (N). Em seguida algoritmo deve solicitar o sexo (M/F) e idade de N
pessoas e ao final apresentar a média de idade de ambos os gêneros catalogados. (while) */ 

#include <stdio.h>

int  main(){
	int contador=1, sexo, idade, pessoas, rodada=1, soma_idade_masc = 0, soma_idade_fem = 0, soma_sexo_masc = 0, soma_sexo_fem = 0;
	
	printf("Informe a quantidade de pessoas: ");
	scanf("%d", &contador);
	
	while(rodada <= contador){
		printf("Informe o sexo da %da pessoa (1-masculino 2-feminino): ", rodada);
		scanf("%d", &sexo);
		printf("Informe a a idade da %da pessoa: ", rodada);
		scanf("%d", &idade);
		rodada++;
		
		if (sexo == 1){	
			soma_idade_masc = soma_idade_masc + idade;
			soma_sexo_masc = soma_sexo_masc + sexo;
		}
		else {	
			soma_idade_fem = soma_idade_fem + idade;
			soma_sexo_fem = soma_sexo_fem + sexo/2;
		}
	}
	
	printf("\nA media da idade do sexo masculino e de: %d.", soma_idade_masc/soma_sexo_masc);
	printf("\nA media da idade do sexo feminino e de: %d.", soma_idade_fem/soma_sexo_fem);
	
	return 0;
}
