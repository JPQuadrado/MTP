#include <stdio.h>

int main ()
{	
	int N,i = 0, aux = 1;
	printf("Ola usuario, digite um numero inteiro \n");
	scanf("%d", &N);
	while(N - i > 0)
	{
		aux = aux*(N-i);
		i++;
	}
	printf("O fatorial de %d e %d \n", N, aux);
	return 0;
}
