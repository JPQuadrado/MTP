#include <stdio.h>
#include "matriz.h"

int main ()
{
	Matriz A;
	int n;
	double d;
	printf("\n DIGITE A ORDEM DA MATRIZ \n");
	scanf("%d", &n);
	A = criarMatriz(n,n);
	preencherMatriz(A);
	d = determinante(A);
	printf("\n O DETERMINANTE E : %lf \n", d);
	destruirMatriz(A);
	return 0;
}
