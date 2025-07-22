// Exemplo de função com entrada e sem saída
#include <stdio.h>
#include <stdlib.h>

// prototipo da função
void imprime_inteiro(int n);

int main(void){
	// variáveis
	int numero;
	
	// entrada de dados
	printf("Digite o numero: ");
	scanf("%i",&numero);
	fflush(stdin);
	
	// saída
	for(int i=1;i<=numero;i++){
		imprime_inteiro(i);
	}
	
	return 0;
}

// função imprime_inteiro()
void imprime_inteiro(int n){
	printf("%i\n",n);
}
