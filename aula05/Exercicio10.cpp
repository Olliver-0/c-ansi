/*
10) Faça um programa que implemente uma calculadora simples. O programa deve 
solicitar os operandos e o operador e mostrar a entrada e o resultado. Inclua 
verificadores de erro para operadores inválidos e tentativa de divisão por zero. 
O menu será como segue:
[ 1 ] – Adição
[ 2 ] – Subtração
[ 3 ] – Multiplicação
[ 4 ] – Divisão
[ 5 ] – Fim
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float r, n1, n2;
	int op;

	// entrada
	printf("[1] - Adicao\n");
	printf("[2] - Subtracao\n");
	printf("[3] - Multiplicacao\n");
	printf("[4] - Divisao\n");
	printf("[5] - Fim\n");
	printf("\nDigite uma opcao: ");
	scanf("%i",&op);
	fflush(stdin);
	
	if(op>=1 && op<=4){
		printf("Digite 1 numero: ");
		scanf("%f",&n1);
		fflush(stdin);
		printf("Digite 2 numero: ");
		scanf("%f",&n2);
		fflush(stdin);
	}
	
	// processamento	
	switch(op){
		case 1:
			r=n1+n2;
			//saída
			printf("O resultado e : %f\n",r);
			break;
		case 2:
			r=n1-n2;
			//saída
			printf("O resultado e : %f\n",r);
			break;
		case 3:
			r=n1*n2;
			//saída
			printf("O resultado e : %f\n",r);
			break;
		case 4:
			if(n2==0){
				printf("Erro, divisao por zero\n");
			}else{
				r=n1/n2;
				//saída
				printf("O resultado e : %f\n",r);
			}	
			break;
		case 5: 
			printf("Saindo..\n");
			break;
		default:
			printf("Erro nao tem esta opcao\n");
	}

	return 0;
}