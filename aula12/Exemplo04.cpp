// Exemplo de função sem entrada e com saída
#include <stdio.h>
#include <stdlib.h>

// prototipo da função
void imprime_inteiro(int n);
int solicitar_inteiro(void);

int main(void){
	int n = solicitar_inteiro();
	
	// saída
	for(int i=1;i<=n;i++){
		imprime_inteiro(i);
	}
	
	return 0;
}

// função imprime_inteiro()
void imprime_inteiro(int n){
	printf("%i\n",n);
}

// função solicitar_inteiro()
int solicitar_inteiro(void){
	int numero;
	
	// entrada de dados
	printf("Digite o numero: ");
	scanf("%i",&numero);
	fflush(stdin);
	
	return numero;
}