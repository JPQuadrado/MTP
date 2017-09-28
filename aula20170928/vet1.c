#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	srand(time(0));
	int vet[10000], num, i = 0,soma = 0, cont = 0;
	float media;
	printf("\n DIGITE UM NUMERO INTEIRO POSITIVO \n");
	scanf("%d", &num); getchar();
	for(i ; i < 10000 ; i++)
	{
		vet[i] = rand()%(num+1);
		soma = soma + vet[i];
		cont++;
	}
	media = soma/cont;
	printf("\n A MEDIA E : %.2f \n", media);
	return 0;
}
