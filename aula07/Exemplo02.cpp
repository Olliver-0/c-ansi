// Exemplo com uso do while(), problema contar de 1 até 10.
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
	numero=1;
	while(numero<=10){
		printf("%i\n",numero);
		numero++;
	}
	
	return 0;
}