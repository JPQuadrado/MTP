#include <stdio.h>
#include "matriz.h"

int main()
{
	Matriz A, ad;
	double cof, men;
	int nlin, ncol;
	printf("Entre com o numero de linhas e o numero de colunas: ");
	scanf("%d", &nlin); 
	scanf("%d", &ncol);
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);
	cof = cofator(A,nlin,ncol);
	men = menor(A,nlin,ncol);
	ad = criarMatriz(nlin, ncol);
	ad = adjunta(A);
	printf("\n O COFATOR E : %lf \n", cof);
	printf("\n O MENOR E : %lf \n", men);
	printf("\n A MATRIZ ADJUNTA E : \n");
	imprimirMatriz(ad);
	destruirMatriz(A);
	destruirMatriz(ad);
	return 0;
}
