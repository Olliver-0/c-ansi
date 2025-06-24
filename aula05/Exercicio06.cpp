/*
6) Faça um programa que verifique se a letra digitada for: F ou M e imprima uma 
mensagem: masculino, feminino ou sexo inválido.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	char sexo;

	// entrada
	printf("Digite o sexo (f/m): ");
	scanf("%c",&sexo);
	fflush(stdin);

	//saída
	switch(sexo){
		case 'f':
		case 'F':
			printf("Feminino\n");
			break;
		case 'm': case 'M':
			printf("Masculino\n");
			break;
		default:
			printf("Sexo invalido\n");
	}

	return 0;
}