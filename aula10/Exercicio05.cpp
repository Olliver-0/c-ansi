/*
5. Construa um algoritmo que leia um vetor de 15 palavras e mostre-os na ordem 
inversa.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main(void){
	//variaveis
	char palavras[TAM][30];
	
	// entrada
	for(int i=0;i<TAM;i++){
		printf("Digite %i palavra: ",i+1);
		gets(palavras[i]);
		fflush(stdin);
	}
	
	// saída
	for(int i=TAM-1;i>=0;i--){
		printf("%s\n",palavras[i]);
	}
	
	return 0;
}