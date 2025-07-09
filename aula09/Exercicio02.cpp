/* 2. Construa um algoritmo que leia um vetor de 5 números reais e mostre a soma, 
a multiplicação e os números.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float n[5], mult=1, soma=0;
	
	// entrada
	for(int i=0;i<5;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%f",&n[i]);
		fflush(stdin);
	}
	
	// processamento
	for(int i=0;i<5;i++){
		mult*=n[i]; // mult=mult*n[i];
		soma+=n[i]; // soma=soma+n[i];
	}
	printf("Os numeros sao: ");
	for(int i=0;i<5;i++){
		printf("%f, ",n[i]);
	}
	printf("\nA multiplicacao e %f\n",mult);
	printf("A soma e %f\n",soma);
	
	return 0;
}