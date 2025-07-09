/* USO DE MATRIZ PARA SOMAR DUAS MATRIZES 3x3 */
#include <stdio.h>
#include <stdlib.h>

int main(void){
	// Variáveis
	int ma[3][3], mb[3][3], mr[3][3];
	
	// entrada
	printf("Digte os dados da matriz A: \n\n");
	for(int l=0;l<3;l++){
		for(int c=0;c<3;c++){
			printf("Digite os dados ma[%i][%i]: ",l,c);
			scanf("%i",&ma[l][c]);
			fflush(stdin);
		}
	}

	printf("Digte os dados da matriz B: \n\n");
	for(int l=0;l<3;l++){
		for(int c=0;c<3;c++){
			printf("Digite os dados mb[%i][%i]: ",l,c);
			scanf("%i",&mb[l][c]);
			fflush(stdin);
		}
	}
	
	// processamento
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			mr[i][j]=ma[i][j]+mb[i][j];
		}
	}
	
	// saída de dados
	printf("Os dados da matriz resultado e:\n\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%i\t",mr[i][j]);
		}
		printf("\n");
	}
	return 0;
}