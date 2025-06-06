/*
Uso de variáveis em C ANSI
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Minhas variáveis
	// [TIPO DA VARIÁVEL] [NOME DA VARIÁVEL];
	int idade;
	float altura;
	char inicial;
	
	// Entrada de dados
	// [NOME DA VARIÁVEL] = [CONTEÚDO DA VARIÁVEL];
	idade = 44;
	altura = 1.76;
	inicial = 'M';
	
	// Saída de dados
	// função printf();
	//printf("[TEXTO FORMATADO]",[VARIÁVEIS]);
	printf("Idade = %i\n",idade);
	printf("Altura = %f\n",altura);
	printf("Inicial = %c\n",inicial);
	
	return 0;
}