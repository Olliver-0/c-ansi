/*
5.	Construa um algoritmo que peça 2 números inteiros e um número real. 
Calcule e mostre:
a.	o produto do dobro do primeiro com metade do segundo .
b.	a soma do triplo do primeiro com o terceiro.
c.	o terceiro elevado ao cubo.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Quais são as variáveis?
	int n1, n2;
	float n3, ra, rb, rc;
	
	// Quais são as entradas de dados?
	printf("Digite 1 numero: ");
	scanf("%i",&n1);
	fflush(stdin);
	printf("Digite 2 numero: ");
	scanf("%i",&n2);
	fflush(stdin);
	printf("Digite 3 numero: ");
	scanf("%f",&n3);
	fflush(stdin);

	// Quais são os processamento dos dados?
	//a. o produto do dobro do primeiro com metade do segundo.
	ra = 2*n1+(float)n2/2;
	//b. a soma do triplo do primeiro com o terceiro.
	rb = 3*n1+n3;
	//c. o terceiro elevado ao cubo.
	rc = n3*n3*n3;
	
	// Quais são as saída de dados
	printf("a) R.: %f\n",ra);
	printf("b) R.: %f\n",rb);
	printf("c) R.: %f\n",rc);
	
	return 0;
}