/*
5.	Faça um programa que calcule o número médio de alunos por turma. 
Para isto, peça a quantidade de turmas e a quantidade de alunos para cada turma.
As turmas não podem ter mais de 40 alunos..
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float media;
	int qtd_turmas, qtd_alunos, soma=0;
	
	// entrada
	printf("Digite a quantidade de turmas: ");
	scanf("%i",&qtd_turmas);
	fflush(stdin);
	for(int i=1;i<=qtd_turmas;i++){
		printf("Digite quantidade de alunos na turma %i: ",i);
		scanf("%i",&qtd_alunos);
		fflush(stdin);
		if(qtd_alunos<=40){
			soma+=qtd_alunos;
		}else{
			printf("Erro. Nao pode ter turma maior que 40 alunos\n");
			i--;
		}
		
	}
	
	// processamento
	media=(float)soma/qtd_turmas;
	
	printf("A media por turma e %.2f\n aluno(s)",media);
	
	return 0;
}