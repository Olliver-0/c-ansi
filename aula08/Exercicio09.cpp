/*
9.	Faça um programa que calcule e mostre a soma dos números pares entre 100 e 200 
(inclusive). O usuário deve ter a opção de repetir quantas vezes quiser esta 
operação.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int soma=0;
	char opcao;
	
	// processamento
	do{
		for(int i=100;i<=200;i++){
			if(i%2==0){
				soma+=i;
			}
		}
		printf("A soma e %i\n",soma);
		printf("Deseja repetir a operacao (s/n): ");
		scanf("%c",&opcao);
		fflush(stdin);
		
	}while(opcao=='s' || opcao =='S');
	
	return 0;
}