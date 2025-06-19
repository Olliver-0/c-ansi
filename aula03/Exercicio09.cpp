/*
9.	Construa um programa que peça as 4 notas bimestrais e mostre a média.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Quais são as variáveis?
	float n1, n2, n3, n4, m;

	// Quais são as entradas de dados?
	printf("Digite 1 nota: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Digite 2 nota: ");
	scanf("%f",&n2);
	fflush(stdin);
	printf("Digite 3 nota: ");
	scanf("%f",&n3);
	fflush(stdin);
	printf("Digite 4 nota: ");
	scanf("%f",&n4);
	fflush(stdin);

	// Quais são os processamento dos dados?
	m=(n1+n2+n3+n4)/4;

	// Quais são as saída de dados
	printf("A media e %.2f\n",m);

	return 0;
}