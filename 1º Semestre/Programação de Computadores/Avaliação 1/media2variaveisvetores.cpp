// estamos carregando a biblioteca Standard Input Output - stdio para usarmos
// os comandos print (impressao na tela) e scanf (leitura de dados)
#include<stdio.h> 
// estamos carregando a biblioteca C ON Input Output - conio para usarmos
// os comandos de aguardo de tecla (getch())
#include<conio.h>
// A seguir temos o m�todo principal do programa

int main() {
  float Nota[10], Resultado, Media;
  
  printf("Digite a primeira nota: ");
  scanf("%f", &Nota[10]);
  printf("Digite a segunda nota: ");
  scanf("%f", &Nota[10]);
  printf("Digite a terceira nota: ");
  scanf("%f", &Nota[10]);
  
  // A seguir estamos calculando a somat�ria das tr�s notas // alerta: a soma nao est� dando certo ao executar
  Resultado = Nota[10] + Nota[10] + Nota[10];
  
  // A seguir estamos calculando a m�dia das tr�s notas
  Media = (Nota[10] + Nota[10] + Nota[10])/3;
  
  // A seguir estamos apresentando o resultado
  printf("\n A Soma = %0.2f" ,Resultado);
  printf("\n A Media = %0.2f" ,Media);
  getch();
}
