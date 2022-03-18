// Escreva um programa que solicite ao usuário o nome de uma verdura e uma fruta de sua
// preferencia e ao final apresente na tela as informações digitadas pelo usuário da seguinte
// forma: "Voce gosta de AAAAAAA e BBBBBBB"

#include <stdio.h> //posso suprimir essa bibl.? funcionou sem
#include <conio.h> //posso suprimir essa bibl.? funcionou sem
#include <string> // verificar essa bibl. posso suprimir? funcionou sem
#include <iostream>
using namespace std;

int main(){
	string verdura, fruta;
	printf("Digite o nome de uma verdura de sua preferencia: ");
	scanf("%s", &verdura);
	printf("Digite o nome de uma fruta de sua preferencia: ");
	scanf("%s", &fruta);
	
	printf("\n A verdura de sua preferencia e %s", &verdura); //A verdura está aparecendo errada no resultado
	printf("\n A fruta de sua preferencia e %s", &fruta);
}
