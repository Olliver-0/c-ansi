/*
9. Construa um algoritmo que leia uma matriz quadrada de ordem 4. Leia uma 
constante K, multiplique a diagonal principal por esta constante e imprima a matriz
multiplicada.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

#define T 4

int main(void){
	// variáveis 
	float m[T][T], k;
	
	// entrada
	for(int i=0;i<T;i++){
		for(int j=0;j<T;j++){
			printf("Digite [%i][%i]: ",i,j);
			scanf("%f",&m[i][j]);
			fflush(stdin);
		}
	}
	printf("Digite o valor de k: ");
	scanf("%f",&k);
	fflush(stdin);
	
	
	// processamento
	for(int i=0;i<T;i++) m[i][i]*=k;
	
	// saída
	printf("A matriz resultado e: \n\n");
	for(int i=0;i<T;i++){
		for(int j=0;j<T;j++){
			printf("%f\t",m[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
