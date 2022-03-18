// estamos carregando a biblioteca Standard Input Output - stdio para usarmos
// os comandos print (impressao na tela) e scanf (leitura de dados)
#include<stdio.h> 
// estamos carregando a biblioteca C ON Input Output - conio para usarmos
// os comandos de aguardo de tecla (getch())
#include<conio.h>
// A seguir temos o método principal do programa

int main() {
	
	float n1, n2, media;
	printf("Digite o primeiro numero: ");
	scanf("%f", &n1);
	
	printf("Digite o segundo numero ");
	scanf("%f", &n2);
	
	media = (n1 + n2)/2;
	
	printf("\n A media = %0.2f ", media);
	getch;
	
	
}
