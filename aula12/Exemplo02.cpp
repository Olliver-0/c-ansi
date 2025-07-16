// Exemplo função com entrada e com saída de dados
#include <stdio.h>
#include <stdlib.h>

// prototipo de função
int soma(int n1, int n2);

int main(void){
	// variáveis
	int numero1, numero2, resultado;
	
	// entrada
	printf("Digite 1 numero: ");
	scanf("%i",&numero1);
	fflush(stdin);
	printf("Digite 2 numero: ");
	scanf("%i",&numero2);
	fflush(stdin);
	
	// processamento
//	resultado = soma(numero1,numero2);
	
	// saída
	printf("O resultado e %i\n",soma(numero1,numero2));
	
	return 0;
}

int soma(int n1, int n2){
	int r;
	r=n1+n2;
	return r;
}