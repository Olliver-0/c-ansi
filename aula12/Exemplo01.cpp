// Uso de função sem entra e sem saída
#include <stdio.h>
#include <stdlib.h>

/*
[tipo saída de dados] [nome da função]([tipo da entrada de dados]);
*/
void limpatela(void);

int main(void){
	// variáveis
	int numero;
	char opcao;
	
	// entrada de dados
	do{
		limpatela(); // chamada da função limpatela();
		printf("Digite um numero: ");
		scanf("%i",&numero);
		fflush(stdin);
		for(int i=1;i<=10;i++) printf("%i x %i = %i\n",numero, i, numero*i);
		printf("Quer outra tabuada (s/n): ");
		scanf("%c",&opcao);
		fflush(stdin);
	}while(opcao=='s');
	
	return 0;
}

void limpatela(void){
	system("cls");
}