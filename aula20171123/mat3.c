#include <stdio.h>
#include "matriz.h"

int main ()
{
	Matriz A, inv;
	int n;
	double d;
	printf("\n DIGITE A ORDEM DA MATRIZ \n");
	scanf("%d", &n);
	A = criarMatriz(n,n);
	preencherMatriz(A);
	inv = inversa(A);
	imprimirMatriz(inv);
	destruirMatriz(A);
	destruirMatriz(inv);
	return 0;
}
