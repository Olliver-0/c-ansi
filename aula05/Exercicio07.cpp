/*
7) Faça um programa que verifique se uma letra digitada é vogal ou consoante.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	char l;
	
	// entrada
	printf("Digite um caracter: ");
	scanf("%c",&l);
	fflush(stdin);

	//saída
	if(l>='a' && l<='z' || l>='A' && l<='Z'){
		/*
		if(l>='a' && l<='z'){
			l=l-32; // l=l-('a'-'A');
		}
		*/
		switch(l){
			case 'a': case 'e': case 'i': case 'o': case 'u':
			case 'A': case 'E': case 'I': case 'O': case 'U':
				printf("E uma vogal\n");
				break;
			default:
				printf("E uma consoante\n");
		}
	}else{
		printf("Nao uma letra\n");
	}

	return 0;
}