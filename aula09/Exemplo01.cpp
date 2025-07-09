/* EXEMPLO VETOR QUE SOMA NUMEROS */
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numeros[10];
	
	// entrada
	for(int i=0;i<10;i++){
		printf("Digite %i numero: ",i+1);
		scanf("%i",&numeros[i]);
		fflush(stdin);
	}
	
	// processamento
	int soma=0;
	for(int i=0;i<10;i++) soma+=numeros[i];
	
	// saída
	printf("A soma e : ");
	for(int i=0;i<9;i++){
		printf("%i + ",numeros[i]);
		
	}
	printf("%i = %i\n-",numeros[9],soma);
	
	return 0;
}