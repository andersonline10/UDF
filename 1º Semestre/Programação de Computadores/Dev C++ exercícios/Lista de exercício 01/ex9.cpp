// Escreva um programa que solicite ao usuário o nome de sua cor preferida e ao final
// apresente na tela a cor informada pelo usuário da seguinte forma: "Voce gosta da cor AAA"

#include <stdio.h> //posso suprimir essa bibl.? funcionou sem
#include <conio.h> //posso suprimir essa bibl.? funcionou sem
#include <string> // verificar essa bibl. posso suprimir? funcionou sem
#include <iostream> //verificar essa bibl.
using namespace std;

int main() {
	string color;
	printf("Qual a sua cor preferida? ");
	scanf("%s", &color);
	
	printf("Voce gosta da cor: %s ", &color);

}
