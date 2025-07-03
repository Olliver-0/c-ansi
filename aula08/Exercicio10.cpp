/*
10.	Faça um programa que peça dois números inteiros (base e expoente), 
calcule e mostre o primeiro número elevado ao segundo número.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int n1, n2, r=1;
	
	// entrada
	printf("Digite base: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite o expoente: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	// processamento
	for(int i=1; i<=n2;i++){
		r*=n1;
	}
	
	// saída
	printf("O resultado e %i\n",r);
	
	return 0;
}