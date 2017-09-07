#include <stdio.h>

int main ()
{
	int B, P, aux = 1, i = 0;
	printf("Ola usuario digite um numero \n");
	scanf("%d", &B);
	printf("Agora, digite a potecia desejada \n");
	scanf("%d", &P);
	do
	{
		aux = aux*B;
		i++;

	}while(i != P);
	printf("O resultado obtido e %d \n", aux);
	return 0;
}
