/*
8. Construa um algoritmo que leia uma matriz quadrada de ordem 3. Leia uma 
constante K, diminui a diagonal principal por esta constante e imprima a matriz 
do resultado.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis 
	int m[3][3], k;
	
	// entrada
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("Digite [%i][%i]: ",i,j);
			scanf("%i",&m[i][j]);
			fflush(stdin);
		}
	}
	printf("Digite o valor de k: ");
	scanf("%i",&k);
	fflush(stdin);
	
	
	// processamento
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j){
				m[i][j]-=k;
			}
		}
	}
	
	// saída
	printf("A matriz resultado e: \n\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%i\t",m[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}