// Dado dois número qual é o maior (números não pode ser iguais)
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numero1, numero2;
	
	// entrada
	printf("Digite o 1 numero: ");
	scanf("%i",&numero1);
	fflush(stdin);
	printf("Digite o 2 numero: ");
	scanf("%i",&numero2);
	fflush(stdin);
	
	// processamento e saída
	if (numero1 > numero2){
		printf("O numero maior e %i\n",numero1);
	}else{
		printf("O numero maior e %i\n",numero2);
	}
	
	return 0;
}