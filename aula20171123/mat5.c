#include <stdio.h>
#include "matriz.h"

int main ()
{
	Matriz A, B, A1;
	int n;
	printf("\n DIGITE A ORDEM DA MATRIZ A \n");
	scanf("%d", &n);
	printf("\n PREENCHENDO MATRIZ A : \n");
	A = criarMatriz(n,n);
	preencherMatriz(A);
	printf("\n PREENCHENDO VETOR B : \n");
	B = criarMatriz(n,1);
	preencherMatriz(B);
	A1 = inversa(A);
	printf("\n AS INCOGNITAS SAO : \n");
	imprimirMatriz(multiplicaMat(A1,B));
	destruirMatriz(A);
	destruirMatriz(B);
	destruirMatriz(A1);
	return 0;
}
