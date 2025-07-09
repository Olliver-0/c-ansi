/*
7. Construa um algoritmo que leia duas matrizes 5x5 e gere uma terceira matriz 
com a subtração dos elementos correspondentes de a e b.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main(void){
	// Variáveis
	int a[TAM][TAM], b[TAM][TAM], r[TAM][TAM];
	
	// entrada
	printf("Digite dados da matriz A: \n\n");
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			printf("Digite [%i][%i]: ",i,j);
			scanf("%i",&a[i][j]);
			fflush(stdin);
		}
	}
	
	printf("\nDigite dados da matriz B: \n\n");
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			printf("Digite [%i][%i]: ",i,j);
			scanf("%i",&b[i][j]);
			fflush(stdin);
		}
	}
	
	// processamento
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			r[i][j]=a[i][j]-b[i][j];
		}
	}
	
	// saída
	printf("\nO resultado e : \n\n");
	for(int i=0;i<TAM;i++){
		for(int j=0;j<TAM;j++){
			printf("%i\t",r[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}