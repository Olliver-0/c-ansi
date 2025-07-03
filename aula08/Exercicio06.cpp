/*
6.	Faça um programa que calcule o valor total investido e o custo médio por CD. 
O usuário deverá informar a quantidade de CDs e o valor para em cada um.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float custo_medio, valor_total=0, valor_cd;
	int qtd_cds;

	// entrada
	printf("Digite a quantidade de CDs: ");
	scanf("%i",&qtd_cds);
	fflush(stdin);
	for(int i=1;i<=qtd_cds;i++){
		printf("Digite o valor %i cd: ",i);
		scanf("%f",&valor_cd);
		fflush(stdin);
		valor_total+=valor_cd;
	}
	
	custo_medio = valor_total/qtd_cds;
	
	// saída
	printf("O valor total da compra e R$ %.2f\n",valor_total);
	printf("O valor medio da compra por CD e R$ %.2f\n",custo_medio);
	return 0;
}