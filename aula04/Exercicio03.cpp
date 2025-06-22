/*
3) Faça um programa que peça um número e imprima se o número é par ou ímpar.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// quais são as variáveis?
	int numero;

	// quais são as entrada de dados?
	printf("Digite o numero: ");
	scanf("%i",&numero);
	fflush(stdin);
	
	// qual é a saída de dados
	if(numero%2 == 0){
		printf("O numero e par\n");
	}else{
		printf("O numero e impar\n");
	}
	
	return 0;
}