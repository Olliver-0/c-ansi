/*
3) Faça um programa que peça um número e imprima se o número é par ou ímpar.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numero;
	
	// entrada
	printf("Digite o numero: ");
	scanf("%i",&numero);
	fflush(stdin);
	
	// processamento e saída
	if(numero % 2){
		printf("O numero e impar\n");
	}else{
		printf("O numero e par\n");
	}
	
	return 0;
}