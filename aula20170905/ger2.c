#include <stdio.h>

int main ()
{
	int N, aux = 0, i;
	printf("Ola usuario, digite um numero inteiro \n");
	scanf("%d", &N); getchar;
	for(i = 1; i < N; i++)
		if(N%i == 0)
			aux = aux + i;
	if(aux == N)
		printf("O NUMERO %d E PERFEITO \n", N);
	else
		printf("O NUMERO %d E NAO PERFEITO \n", N);
	return 0;
}
