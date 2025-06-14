/*
4.	Construa um algoritmo que peça uma temperatura em graus Celsius (ºC), 
transforme e mostre na tela a temperatura em graus Fahrenheit (ºF).
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Quais são as variáveis?
	float c, f;
	
	// Quais são as entradas de dados?
	printf("Digite o valor em graus Celsius: ");
	scanf("%f",&c);
	fflush(stdin);
	
	// Quais são os processamento dos dados?
	//c=5*(f-32)/9;
	f=9*c/5+32;
	
	// Quais são as saída de dados
	printf("A temperatura em graus Fahrenheit e %.1f\n",f);
	
	return 0;
}