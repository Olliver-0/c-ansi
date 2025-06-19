/*
10.	Uma firma contrata um encanador a 250,00 por dia. Crie um programa que 
solicite o número de dias trabalhados pelo encanador e imprima a quantia 
líquida que deverá ser paga, sabendo-se que são descontados 8% para o 
Imposto de Renda.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Quais são as variáveis?
	int dias;
	float salario;

	// Quais são as entradas de dados?
	printf("Digite a quantidade de dias: ");
	scanf("%i",&dias);
	//fflush(stdin);
	
	// Quais são os processamento dos dados?
	salario=250*dias*0.92; // (250*dias)-(250*dias)*0.08;

	// Quais são as saída de dados
	printf("O Salario: R$ %.2f\n",salario);

	return 0;
}