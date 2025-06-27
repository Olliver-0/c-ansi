// Exemplo com uso do do .. while(), problema contar de 1 até 10.
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	int numero;
	
	// processo e saída
	//for([inicio];[critério];[contador]){
	//}
	/*
	for(numero=1;numero<=10;numero++){
		printf("%i\n",numero);
	}
	*/
	
	//while([critério]){
	//}
	numero=1;
	printf("while\n");
	while(numero<=10){
		printf("%i\n",numero);
		numero++;
	}
	
	// do{
	//
	// while([critério]);
	numero=1;
	printf("\ndo .. while\n");
	do{
		printf("%i\n",numero);
		numero++;
	}while(numero<=10);
	
	return 0;
}