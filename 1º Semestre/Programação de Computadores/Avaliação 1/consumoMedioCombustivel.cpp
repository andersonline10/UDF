#include<stdio.h>
#include<conio.h>

int main(){
	float km, litros, consumo;
	printf("Informe quantos km o veiculo percorreu: ");
	scanf("%f", &km);
	printf("Informe a quantidade de combustivel usado: ");
	scanf("%f", &litros);
	consumo = km / litros;
	printf("A autonomia do veiculo e de: %0.2f km/l", consumo);
	return 0;
	getch();
}

