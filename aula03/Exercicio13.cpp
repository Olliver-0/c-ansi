/*
13.	Construa um algoritmo que peça o salário bruto mensal de um funcionário, 
calcule e apresente os valores conforme modelo abaixo:

Salário Bruto		: R$ 
(-) IR        (15%)	: R$
(-) INSS      (11%)	: R$
(-) Sindicato ( 3%)	: R$
Salário líquido		: R$

Obs.: Descontos = IR + INSS + Sindicato
Salário Líquido = Salário Bruto – Descontos
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Quais são as variáveis?
	float salario;

	// Quais são as entradas de dados?
	printf("Digite o salario bruto: ");
	scanf("%f",&salario);
	fflush(stdin);
	
	// Quais são os processamento dos dados?
	// Quais são as saída de dados
	printf("Salario Bruto        : R$ %.2f\n",salario);
	printf("(-) IR        (15%%) : R$ %.2f\n",salario*0.15);
	printf("(-) INSS      (11%%) : R$ %.2f\n",salario*0.11);
	printf("(-) Sindicato ( 3%%) : R$ %.2f\n",salario*0.03);
	printf("Salario liquido      : R$ %.2f\n",salario*0.71);

	return 0;
}