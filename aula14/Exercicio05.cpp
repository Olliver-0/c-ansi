/*
5. Faça um programa que leia uma data, passe para uma função que reajuste 
esta data em cinco dias.
R.:
*/
#include <stdio.h>
#include <stdlib.h>

void reajuste(int d, int m, int a);


int main(void){
	int dia, mes, ano;
	
	printf("Digite a data (d/m/a): ");
	scanf("%i%*c%i%*c%i",&dia,&mes,&ano);
	fflush(stdin);
	
	reajuste(dia,mes,ano);
	
	return 0;
}

void reajuste(int d, int m, int a){
	printf("A data atual e %i%/%i/%i\n",d,m,a);
	d+=5;
	if(d>31&&m==1 || d>31&&m==3 || d>31&&m==5 || d>31&&m==7 || d>31&&m==8 || d>31&&m==10){
		d-=31;
		m++;
	}else if(d>30&&m==4 || d>30&&m==6 || d>30&&m==9 || d>30&&m==11){
		d-=30;
		m++;
		/*
		    Se ( ano módulo 400 é 0 ) então
        bissexto=Verdade;
    Senão
         Se (ano módulo 4 é 0 E ano módulo 100 é diferente de 0) então 
             bissexto=Verdade;
         Senão
             bissexto=Falso;
        */
	}else if(d>29 && m==2 && (a%400 == 0 || a%4 == 0 && a%100!=0)){
		d-=29;
		m++;
	}else if(d>28 && m==2){
		d-=28;
		m++;
	}else if(d>31 && m==12){
		d-=31;
		m=1;
		a++;
	}
	printf("A data nova e %i%/%i/%i\n",d,m,a);
}
