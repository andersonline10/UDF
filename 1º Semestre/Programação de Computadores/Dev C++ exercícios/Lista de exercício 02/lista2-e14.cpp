/*Escreva um programa em linguagem C que solicite ao usuário a média para aprovação
em um curso e em seguida solicite ao usuário o nome, sexo e as 03 notas do aluno e ao
final imprima a frase: "O aluno XXXXX foi aprovado com media YY" considerando o gênero
do(a) aluno(a) e se foi aprovado(a) ou reprovado(a)*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main (){
	string nome; //se usar char no final o sistema só printa a primeira letra do nome do aluno
	float media, notaAprov, nota1, nota2, nota3;
	int sexo;
	
	printf("Qual a media para a aprovacao? ");
	scanf("%f", &notaAprov);
	
	printf("\nInforme o nome do(a) aluno(a): ");
	scanf("%s", &nome);
	
	printf("\nDigite 1 para masculino ou 2 para feminino: ");
	scanf("%d", &sexo);
	
	printf("\nInforme a Nota1: ");
	scanf("%f", &nota1);
	
	printf("\nInforme a Nota2: ");
	scanf("%f", &nota2);
	
	printf("\nInforme a Nota3: ");
	scanf("%f", &nota3);
	
	media = (nota1 + nota2 + nota3)/3;
	
	if (sexo == 1 && media >= notaAprov)  {
		printf("O aluno %s foi aprovado com media %.2f.", &nome, media); //dúvida em relação a ter que usar & antes da variável string (nome) e não precisa na váriavel de número (media)
	}
	else if (sexo == 1 && media < notaAprov) {
		printf("O aluno %s foi reprovado com media %.2f.", &nome, media);
	}
	else if (sexo == 2 && media >= notaAprov) {
		printf("A aluna %s foi aprovada com media %.2f.", &nome, media);
	}		
	else {
		printf("A aluna %s foi reprovada com media %.2f.", &nome, media);
		}		
return 0;

}
