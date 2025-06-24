/*
13) Faça um programa que leia a idade de quatro alunos e apresente a mensagem 
conforme instruções: 
a) Se a média de idade dos alunos é inferior de 25, apresentar a mensagem "Turma 
Jovem"; 
b) Se a média de idade dos alunos é entre 25 e 40, apresentar a mensagem "Turma 
Adulta"; 
c) Se a média de idade dos alunos é acima de 40 anos, apresentar a mensagem 
"Turma Idosa". 
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int i1, i2, i3, i4;
	float media;
	
	// entrada
	printf("Digite a 1 idade: ");
	scanf("%i",&i1);
	fflush(stdin);
	printf("Digite a 2 idade: ");
	scanf("%i",&i2);
	fflush(stdin);
	printf("Digite a 3 idade: ");
	scanf("%i",&i3);
	fflush(stdin);
	printf("Digite a 4 idade: ");
	scanf("%i",&i4);
	fflush(stdin);	
		
	// processamento	
	media = (float)(i1+i2+i3+i4)/4;
	
	//saída
	if(media<25){
		printf("Turma jovem\n");
	}else if(media>=25 && media<=40){
		printf("Turma adulta\n");
	}else{
		printf("Turma idosa\n");
	}
		
	return 0;
}