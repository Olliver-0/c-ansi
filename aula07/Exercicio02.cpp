/*
2.	Faça um programa que peça dois números inteiros e gere os números pares que 
estão no intervalo entre eles.
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int n1, n2;
	
	// entrada
	printf("Digite 1 numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite 2 numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	
	// saída e processamento
	if(n1<n2){
		for(int i=n1+1;i<=n2-1;i++){
			if(i%2==0) printf("%i, ",i);
		}	
	}else{
		for(int i=n1-1;i>=n2+1;i--){
			if (i%2==0) printf("%i, ",i);
		}	
	}
	
	return 0;
}