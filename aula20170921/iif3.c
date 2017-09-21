#include <stdio.h>

int main ()
{	
	float N,i = 0, aux = 1;
	printf("Ola usuario, digite um numero inteiro \n");
	scanf("%f", &N);
	while(N - i > 0)
	{
		aux = aux*(N-i);
		i++;
	}
	printf("O fatorial de %f e %f \n", N, aux);
	return 0;
}

