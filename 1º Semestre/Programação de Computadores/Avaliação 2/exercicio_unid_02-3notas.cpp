// na linha a seguir estamos declarando a biblioteca standard Input Output
#include <stdio.h> // para usarmos fun��es de entrada e sa�da de dados

//dever de casa:
// A escola agora utiliza 3 provas;
// A escola quer parametrizar a m�dia de aprova��o nos 2 exames;
// ou seja, olicitar no inicio do programa as medias para aprova��o;

int main() {
	float Nota1, Nota2, Nota3, Media, notaAprovacaoProva, notaAprovacaoExameFinal;
	printf("Digite a primeira nota: ");
	scanf("%f", &Nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &Nota2);
	printf("Digite a terceira nota: ");
	scanf("%f", &Nota3);
	
	printf("Qual o valor minimo da media para aprovacao? ");
	scanf("%f", &notaAprovacaoProva);
	
	Media = (Nota1 + Nota2 + Nota3) / 3;
	
	if (Media >= notaAprovacaoProva) {
		printf("Aluno aprovado!!!");
	}	
	else {
		printf("\n Aluno precisa fazer o exame final!");
		printf("\n Informe a nota do exame final: ");
		float exameFinal, resultadoFinal; // posso declarar a vari�vel em qualquer lugar do c�digo
		scanf("%f", &exameFinal);
		
		printf("Qual o valor minimo da media para aprovacao no exame final? ");
		scanf("%f", &notaAprovacaoExameFinal);
		
		resultadoFinal = (Media + exameFinal)/2;	
	
	if (resultadoFinal >= notaAprovacaoExameFinal) {
		printf("Aluno aprovado no EXAME FINAL!!!");
	}	
	
	else {
		printf("Aluno reprovado no EXAME FINAL!!!");
		}
	}
}

