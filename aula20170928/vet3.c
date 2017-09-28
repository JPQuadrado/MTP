#include <stdio.h>

int main ()
{
	unsigned int vet[10], i = 0, m = 0,soma = 0,produto = 1;
	for(i; i < 10 ;i++)
	{
		printf("\n DIGITE UM VALOR PARA A POSICAO %d \n", i+1);
		scanf("%d", &vet[i]);
	}
	for(m; m < 10; m++)
	{
		soma = soma + vet[m];
		produto = produto*vet[m];
	}
	printf("\n VALOR DO SOMATORIO %d \n", soma);
	printf("\n VALOR DO PRODUTO %d \n", produto);
	return 0;
}
