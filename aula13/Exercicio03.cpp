/*
3. Fazer um programa que possibilite várias opções de cálculos a partir de um 
menu. O programa chamará a função correspondente a cada cálculo.
[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50
[ b ] S = 1/1 - 2/2 + 3/3 -..........- 10/10
[ c ] S = 1000/1 - 997/2 + 994/3.........
[ d ] S = 480/10 - 475/11 + 470/12 - .......
[ f ] FIM
Obs.: Nas opções [c] e [d] fazer os cálculos para os 20 primeiros termos.
R.:
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// prototipo das funções
void fa(void);
void fb(void);
void fc(void);
void fd(void);

int main(void){
	// variáveis
	char op;
	
	// entrada
	do{
		system("cls");
		printf("[ a ] S = 1/1 + 3/2 + 5/3+........+ 99/50\n");
		printf("[ b ] S = 1/1 - 2/2 + 3/3 -.......- 10/10\n");
		printf("[ c ] S = 1000/1 - 997/2 + 994/3.........\n");
		printf("[ d ] S = 480/10 - 475/11 + 470/12 - ....\n");
		printf("[ f ] FIM\n");
		printf("Digite uma opcao: ");
		scanf("%c",&op);
		fflush(stdin);
		
		switch(op){
			case 'a':
				fa();
				break;
			case 'b':
				fb();
				break;
			case 'c':
				fc();
				break;
			case 'd':
				fd();
				break;
			case 'f':
				break;
			default: 
				printf("Erro! Nao tem esta opcao\n");
		}
		system("pause");
		//getch();
	}while(op!='f');
	
	return 0;
}

void fa(void){
	float r=0;
	printf("S = 1/1 + 3/2 + 5/3+........+ 99/50\n");
	for(int i=1, j=1;i<=99;i+=2,j++){
		r+=(float)i/j;
	}
	printf("S = %f\n",r);
	
}
void fb(void){
	float r=0;
	printf("S = 1/1 - 2/2 + 3/3 -.......- 10/10\n");
	for(int i=1, j=1;i<=10;i++,j++){
		if(i%2==1){
			r+=(float)i/j;
		}else{
			r-=(float)i/j;
		}
	}
	printf("S = %f\n",r);	
}
void fc(void){
	float r=0;
	printf("S = 1000/1 - 997/2 + 994/3.........\n");
	for(int i=1000, j=1, cont=1; cont<=20; i-=3,j++,cont++){
		if(j%2==1){
			r+=(float)i/j;
		}else{
			r-=(float)i/j;
		}
	}
	printf("S = %f\n",r);	
}
void fd(void){
	float r=0;
	printf("S = 480/10 - 475/11 + 470/12 - ....\n");
	for(int i=480, j=10, cont=1; cont<=20; i-=5,j++,cont++){
		if(j%2==0){
			r+=(float)i/j;
		}else{
			r-=(float)i/j;
		}
	}
	printf("S = %f\n",r);	
}