/*
4) Faça um programa que peça um número e se este número for par, transforme-o 
em ímpar e vice-versa.
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

	// processamento
	numero = numero + 1;
	
	//saída
	if(numero % 2){
		printf("O numero e impar, o numero novo e %i\n",numero);
	}else{
		printf("O numero e par, o numero novo e %i\n",numero);
	}
	
	return 0;
}