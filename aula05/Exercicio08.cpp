/*
8) Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente. 
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int n1, n2, n3;
	
	// entrada
	printf("Digite 1 numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite 2 numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	printf("Digite 3 numero: ");
	scanf("%i",&n3);
	fflush(stdin);

	//saída
	if(n1<=n2 && n1<=n3){
		if(n2<=n3){
			printf("%i, %i, %i\n",n1,n2,n3);
		}else{
			printf("%i, %i, %i\n",n1,n3,n2);
		}
	}else if(n2<=n1 && n2<=n3){
		if(n1<=n3){
			printf("%i, %i, %i\n",n2,n1,n3);
		}else{
			printf("%i, %i, %i\n",n2,n3,n1);
		}
	}else{
		if(n1<=n2){
			printf("%i, %i, %i\n",n3,n1,n2);
		}else{
			printf("%i, %i, %i\n",n3,n2,n1);
		}
	}

	return 0;
}