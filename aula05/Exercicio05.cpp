/*
5) Faça um programa que peça um número e informe se o número é inteiro ou 
quebrado.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float numero;

	// entrada
	printf("Digite o numero: ");
	scanf("%f",&numero);
	fflush(stdin);
	
	//saída
	if((int)numero == numero){
		printf("Numero inteiro\n");
	}else{
		printf("Numero quebrado\n");
	}

	return 0;
}