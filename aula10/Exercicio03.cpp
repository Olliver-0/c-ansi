/*
3. Construa um algoritmo que leia um vetor de 10 números reais e mostre-os na 
ordem inversa.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float numeros[10];
	
	// entrada
	for(int i=0;i<10;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%f",&numeros[i]);
		fflush(stdin);
	}
	
	// saída
	for(int i=9;i>=0;i--){
		printf("%f, ",numeros[i]);
	}
	
	return 0;
}