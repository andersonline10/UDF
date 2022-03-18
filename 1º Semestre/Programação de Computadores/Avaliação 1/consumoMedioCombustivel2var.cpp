#include<stdio.h>
#include<conio.h>

int main(){
	float km, litros;
	printf("Informe quantos km o veiculo percorreu: ");
	scanf("%f", &km);
	printf("Informe a quantidade de combustivel usado: ");
	scanf("%f", &litros);
	km = km/litros; //forma mais elegante do que colocar a formula no printf pq eu guardo essa variável e não preciso recalcular no futuro
	printf("A autonomia do veiculo e de: %0.2f km/l", km);
	return 0;
	getch();
}

