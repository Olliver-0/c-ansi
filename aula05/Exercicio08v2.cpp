/*
8) Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente. 
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int n1, n2, n3, aux;
	
	// entrada
	printf("Digite 1 numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite 2 numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	printf("Digite 3 numero: ");
	scanf("%i",&n3);
	fflush(stdin);

	// processamento
	if(n1>n2){
		aux=n1;	n1=n2; n2=aux;
	}
	if(n1>n3){
		aux=n1; n1=n3; n3=aux;
	}
	if(n2>n3){
		aux=n2; n2=n3; n3=aux;
	}

	// saída
	printf("%i, %i, %i\n",n1,n2,n3);
	
	return 0;
}