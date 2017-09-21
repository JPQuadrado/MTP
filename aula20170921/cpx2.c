#include <stdio.h>

int main ()
{
	float pR, pI, resut, sub, soma;
	printf("\n DIGITE A PARTE REAL E IMAGINARIA \n");
	scanf(" %f %f ", &pR, &pI);
	sub = pR - pI;
	soma = pR + pI;
	resut = sub*soma;
	return 0;
}
