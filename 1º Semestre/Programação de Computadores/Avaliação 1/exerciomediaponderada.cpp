// media aritmética ponderada
// 1a nota peso 1, 2a nota peso 2, 3a nota peso 3

#include<stdio.h> 
#include<conio.h>

int main() {
  float Nota1, Nota2, Nota3, Resultado, MediaPonderada;
  
  printf("Digite a primeira nota: ");
  scanf("%f", &Nota1);
  printf("Digite a segunda nota: ");
  scanf("%f", &Nota2);
  printf("Digite a terceira nota: ");
  scanf("%f", &Nota3);
  
  // A seguir estamos calculando a somatória das três notas
  Resultado = Nota1 + Nota2 + Nota3;
  
  // A seguir estamos calculando a média das três notas
  MediaPonderada = (Nota1*1 + Nota2*2 + Nota3*3)/(1+2+3);
  
  // A seguir estamos apresentando o resultado
  printf("\n A Soma = %0.2f" ,Resultado);
  
  printf("\n A Media Ponderada = %0.2f" ,MediaPonderada);
  getch(); // comando pra dar tempo de o usuário ler.
  
  
}
