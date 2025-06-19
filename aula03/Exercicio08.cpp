/*
8.	Construa um programa que peça dois números, calcule e mostre a soma 
dos mesmos.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Quais são as variáveis?
	int n1, n2, s;

	// Quais são as entradas de dados?
	printf("Digite 1 numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite 2 numero: ");
	scanf("%i",&n2);
	fflush(stdin);

	// Quais são os processamento dos dados?
	s=n1+n2;
	
	// Quais são as saída de dados
	printf("A Soma e %i\n",s);
	
	return 0;
}