/*
10. Construa um algoritmo que leia um vetor de 20 elementos e coloque-os em 
ordem crescente.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

#define T 5

int main(void){
	// variáveis
	int n[T], aux;
	
	// entrada
	for(int i=0;i<T;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%i",&n[i]);
		fflush(stdin);
	}
	// processamento
	/*
	for(int j=T-1;j>=0;j--){
		for(int i=0;i<j;i++){
			if(n[i]>n[i+1]){
				aux=n[i];
				n[i]=n[i+1];
				n[i+1]=aux;
			}
		}
	}
	*/
	for(int i=0;i<T;i++){
		for(int j=0;j<T;j++){
			if(n[i]<n[j]){
				aux=n[i];
				n[i]=n[j];
				n[j]=aux;
			}
		}
	}
	
	// saída
	printf("Os numero sao: ");
	for(int i=0;i<T;i++){
		printf("%i, ",n[i]);
	}
	
	return 0;
}