/*
4. Construa um algoritmo que leia um vetor de 10 caracteres, e diga quantas 
consoantes foram lidas. Imprima as consoantes.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	char c[10], aux[10];
	int qtd=0;
	
	// entrada
	for(int i=0;i<10;i++){
		printf("Digite %i caracter: ",i+1);
		scanf("%c",&c[i]);
		fflush(stdin);
	}
	
	// processamento
	for(int i=0;i<10;i++){
		if((c[i]>='a' && c[i]<='z') || (c[i]>='A' && c[i]<='Z')){
			if(c[i]!='a' && c[i]!='e' && c[i]!='i' && c[i]!='o' && c[i]!='u' &&
			c[i]!='A' && c[i]!='E' && c[i]!='I' && c[i]!='O' && c[i]!='U'){
				aux[qtd]=c[i];
				qtd++;
			}
			
		}
	}
	
	// saída
	printf("A quantidade de consoantes e %i\n",qtd);
	printf("A consoantes sao: ");
	for(int i=0;i<qtd;i++){
		printf("%c, ", aux[i]);
	}
	
	return 0;
}