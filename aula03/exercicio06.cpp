/*
6.	Construa um programa que calcule a área de um círculo.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Quais são as variáveis?
	float r, a;
	
	// Quais são as entradas de dados?
	printf("Digite o raio do circulo: ");
	scanf("%f",&r);
	fflush(stdin);

	// Quais são os processamento dos dados?
	a=r*r*3.14;

	// Quais são as saída de dados
	printf("A area e %f\n",a);
	
	return 0;
}