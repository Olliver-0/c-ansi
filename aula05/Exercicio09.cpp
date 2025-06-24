/*
9) Faça um programa que peça três notas de um aluno e calcule a média. Analisar a 
média e imprimir uma das mensagens a seguir:
a) A mensagem "Aprovado", se a média for maior ou igual a 7, com a respectiva 
média alcançada; 
b) A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média 
alcançada; 
c) A mensagem "Aprovado com Distinção", se a média for igual a 10
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float n1, n2, n3, media;
	
	// entrada
	printf("Digite 1 nota: ");
	scanf("%f",&n1);
	fflush(stdin);
	printf("Digite 2 nota: ");
	scanf("%f",&n2);
	fflush(stdin);
	printf("Digite 3 nota: ");
	scanf("%f",&n3);
	fflush(stdin);

	// processamento
	media = (n1+n2+n3)/3;
	
	//saída
	if(media == 10){
		printf("Aprovado com distincao\n");
	}else if(media >= 7){
		printf("Aprovado\n");
	}else{
		printf("Reprovado\n");
	}

	return 0;
}