/*
1. Faça um programa que leia um número, passe este número como parâmetro 
para uma função que retorne 0 se o número for par ou 1 se o número for ímpar.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

// prototipo da função
int valida(int numero);

// função principal
int main(void){
	// variáveis
	int n;
	
	// entrada
	printf("Digite um numero: ");
	scanf("%i",&n);
	fflush(stdin);
	
	// processamento e saída
	//	if(valida(n)) printf("E impar\n"); else	printf("E par\n");

	if(valida(n)){
		printf("E impar\n");
	}else{
		printf("E par\n");
	}
	
	return 0;
}

// função valida
int valida(int numero){
	if(numero%2 == 0){
		return 0;
	}else{
		return 1;
	}
	// return n%2;
}