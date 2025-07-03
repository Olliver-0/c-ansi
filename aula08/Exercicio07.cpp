/*
7.	Faça um programa que gere a tabuada de 1 a 10 de qualquer número. 
O usuário deve informar de qual número deseja ver a tabuada.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numero;
	char opcao;
	
	// entrada
	do{
		system("color e0");
		system("cls");
		printf("Digite um numero: ");
		scanf("%i",&numero);
		fflush(stdin);
		
		// saída
		for(int i=1;i<=10;i++){
			printf("%i x %i = %i\n",i,numero,numero*i);
		}
		printf("Deseja outra tabuada (s/n): ");
		scanf("%c",&opcao);
		fflush(stdin);
	}while(opcao == 's' || opcao =='S');
	
	return 0;
}