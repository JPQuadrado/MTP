#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A, At;
	int nlin, ncol;
	printf("Entre com o numero de linhas e o numero de colunas: ");
	scanf("%d", &nlin); 
	scanf("%d", &ncol);
	A = criarMatriz(nlin, ncol);
	preencherMatriz(A);
	imprimirMatriz(A);
	At = transposta(A);
	imprimirMatriz(At);
	destruirMatriz(A);
	destruirMatriz(At);
	return EXIT_SUCCESS;
}
