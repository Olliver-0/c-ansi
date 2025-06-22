/*
2) Faça um programa que peça um valor e mostre na tela se o valor é positivo ou 
negativo.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// quais são as variáveis?
	float numero;
	
	// quais são as entrada de dados?
	printf("Digite o numero: ");
	scanf("%f",&numero);
	fflush(stdin);
	
	// qual é a saída de dados
	if(numero == 0){
		printf("O numero e neutro\n");
	}else if(numero > 0){
		printf("O numero e positivo\n");
	}else{
		printf("O numero e negativo\n");
	}
	
	return 0;
}