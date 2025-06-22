// Seleção de idades 16 pode votar e 18 pode ter carteira de motorista

#include <stdio.h>
#include <stdlib.h>

int main(void){
	// quais são as variáveis?
	int idade;

	// quais são as entrada de dados?
	printf("Digite a idade: ");
	scanf("%i",&idade);
	fflush(stdin);
	
	// qual é a saída de dados
	switch(idade){
		case 16:
			printf("Pode votar\n");
			break;
		case 18:
			printf("Pode tira carteira de motorista\n");
			break;
		default: 
			printf("Nao tenho esta idade cadastrada\n");
	}
	
	return 0;
}