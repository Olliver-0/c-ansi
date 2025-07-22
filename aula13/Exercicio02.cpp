/*
2. Faça uma função que desenhe linhas de caracteres na tela, a função 
receberá como argumento o tipo de caractere e o número de linhas que deverá 
imprimir.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

// prototipo da função
void desenha(int n, char c);

int main(void){
	// variáveis
	char caracter;
	int linha;
	
	// entrada
	printf("Digite a quantidade de linhas: ");
	scanf("%i",&linha);
	fflush(stdin);
	printf("Digite o caracter: ");
	scanf("%c",&caracter);
	fflush(stdin);
	
	// saída
	desenha(linha,caracter);
	
	return 0;
}

// função desenha
void desenha(int n, char c){
	for(int linha=1;linha<=n;linha++){
		for(int coluna=1;coluna<=77+16;coluna++){
			printf("%c",c);
		}
		printf("\n");
	}
}