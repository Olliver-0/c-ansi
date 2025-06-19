/*
7.	Construa um programa que converta metros para centímetros.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Quais são as variáveis?
	float m;
	// Quais são as entradas de dados?
	printf("Digite o valor em metros: ");
	scanf("%f",&m);
	fflush(stdin);

	// Quais são os processamento dos dados?
	// Quais são as saída de dados
	printf("O valor em centimetros e %.2f cm\n",m*100);
	
	return 0;
}