#include<stdio.h>
#include<conio.h>

int main() {
	float Nota1, Nota2;
	printf("Digite a primeira nota: ");
	scanf("%f", &Nota1);
	printf("Digite a segunda nota: ");
	scanf("%f", &Nota2);
	
	printf("A Soma = %0.2f \n", Nota1 + Nota2);
	printf("A media = %0.2f \n", (Nota1 + Nota2)/2);
	getch();
	
}
