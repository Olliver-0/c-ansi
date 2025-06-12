/*
3. Construa um algoritmo que peça a temperatura em graus Fahrenheit (ºF), 
transforme e mostre na tela a temperatura em graus Celsius (ºC). C=5*(F-32)/9
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Quais são as variáveis?
	float c, f;
	
	// Quais são as entradas de dados?
	printf("Digite o valor em graus Fahrenheit: ");
	scanf("%f",&f);
	fflush(stdin);
	
	// Quais são os processamento dos dados?
	c=5*(f-32)/9;
	
	// Quais são as saída de dados
	printf("A temperatura em graus Celsius e %.1f\n",c);
	
	return 0;
}