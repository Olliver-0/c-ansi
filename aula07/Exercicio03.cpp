/*
3.	Faça um programa que leia dez números inteiros e calcule a diferença entre o 
maior e o menor número do conjunto.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numero, maior, menor;
	
	// entrada
	for(int i=1;i<=10;i++){
		printf("Digite %i numero: ",i);
		scanf("%i",&numero);
		if(i==1){
			maior=numero;
			menor=numero;
		}else{
			if(numero>maior){
				maior=numero;
			}
			if(numero<menor){
				menor=numero;
			}
		}
	}
	
	// processamento e saída
	printf("A diferenca e %i\n",maior-menor);
	return 0;
}