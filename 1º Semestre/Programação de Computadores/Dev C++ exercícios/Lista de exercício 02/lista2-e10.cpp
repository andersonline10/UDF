/*O sistema de avaliação de determinada disciplina é composto por três provas. A primeira
prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. Considerando que a
média para aprovação é 6.0, faça um algoritmo para calcular a média final de um aluno
desta disciplina e dizer se o aluno foi aprovado ou não*/

#include <stdio.h>

int main(){
	float nota1, nota2, nota3, media;
	printf("Digite a Nota 1: ");
	scanf("%f", &nota1);
	printf("Digite a Nota 2: ");
	scanf("%f", &nota2);
	printf("Digite a Nota 3: ");
	scanf("%f", &nota3);

	media = (nota1*2 + nota2*3 + nota3*5)/(2+3+5);
	
	if (media >= 6){
		printf("Media do aluno: %.2f", media);
		printf("\nAluno Aprovado!");
	}
	else {
		printf("Media do aluno: %.2f", media);
		printf("\nAluno Reprovado!");
	}
	
	return 0;
}
