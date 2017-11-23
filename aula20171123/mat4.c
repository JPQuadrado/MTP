#include <stdio.h>
#include "matriz.h"

int main()
{
	Matriz A, B;
	int nlin, ncol,nlinB, ncolB;
	printf("\n MATRIZ A : Entre com o numero de linhas e o numero de colunas: ");
	scanf("%d", &nlin); 
	scanf("%d", &ncol);
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);
	printf("\n MATRIZ B : Entre com o numero de linhas e o numero de colunas: ");
	scanf("%d", &nlinB); 
	scanf("%d", &ncolB);
	B = criarMatriz(nlinB, ncolB);
	preencherMatriz(B);
	if(ncol == nlinB)
		imprimirMatriz(multiplicaMat(A,B));
	else
		printf("\n nao e possivel \n");
	destruirMatriz(A);
	destruirMatriz(B);
	return 0;
}
