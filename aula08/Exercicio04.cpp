/*
4.	Faça um programa que calcule e mostre a média bimestral da turma. 
O usuário deve informar a quantidade de notas, bem como cada nota.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float media, soma=0, nota;
	int qtd;
	
	// entrada
	printf("Digite a quantidade de notas: ");
	scanf("%i",&qtd);
	fflush(stdin);
	for(int i=1;i<=qtd;i++){
		printf("Digite %i nota: ",i);
		scanf("%f",&nota);
		fflush(stdin);
		soma+=nota;
	}
	
	// processamento
	media=soma/qtd;
	
	// saída 
	printf("A media e %.2f",media);

	return 0;
}