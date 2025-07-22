/*
4. Faça uma função que receba como argumento os valores dos lados de um 
triângulo, a função deverá retornar 0 se triângulo for equilátero, 1 se for 
isósceles ou 2 se for escaleno.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

int triangulo(float a, float b, float c);

int main(void){
	float ladoA, ladoB, ladoC;
	
	printf("Digite o lado A: ");
	scanf("%f",&ladoA);
	fflush(stdin);

	printf("Digite o lado B: ");
	scanf("%f",&ladoB);
	fflush(stdin);
	
	printf("Digite o lado C: ");
	scanf("%f",&ladoC);
	fflush(stdin);
	
	switch(triangulo(ladoA, ladoB, ladoC)){
		case 0: 
			printf("Equilatero\n");
			break;
		case 1:
			printf("Isosceles\n");
			break;
		case 2:
			printf("Escaleno\n");
			break;
		default:
			printf("Erro nao e um triangulo\n");
	}
	
	return 0;
}

int triangulo(float a, float b, float c){
	if((a+b)>c && (a+c)>b && (b+c)>a){
		if(a==b && b==c){
			return 0;
		}else if(a==b || a==c || b==c){
			return 1;
		}else{
			return 2;
		}
	}else{
		return -1;
	}
}






