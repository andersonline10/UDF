// Reescrever o programa anterior nº 9 apresentando o quadrado e o cubo do número informado

#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
	float X, Quadrado, Cubo;
	printf("Digite um numero real: ");
	scanf("%f", &X);
	Quadrado = pow(X,2); //deu erro nessa parte 
	Cubo = pow(X,3);
	printf("O numero digitado ao quadrado e %0.2f\n", Quadrado);
	printf("O numero digitado ao cubo e %0.2f", Cubo);
}
