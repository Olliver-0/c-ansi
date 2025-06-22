/*
1) Faça um programa que peça dois números e imprima o maior deles.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// quais são as variáveis?
	int n1, n2;
	
	// quais são as entrada de dados?
	printf("Digite 1 numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite 2 numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	// qual é a saída de dados
	if (n1==n2){
		printf("Os numeros sao iguais\n");
	}else if(n1>n2){
		printf("O primeiro numero e maior\n");
	}else{
		printf("O segundo numero e maior\n");
	}
	
	return 0;
}