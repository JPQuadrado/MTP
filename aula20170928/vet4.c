#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{	
	srand(time(0));
	int vet[1000],i = 0,num,max = 0,min = 9;
	printf("\n DIGITE UM NUMERO ENTRE 1 E 1000 \n");
	scanf("%d", &num);
	for(i; i < num; i++)
	{
		vet[i] = rand()%10;
		if(vet[i]>max)
			max = vet[i];
		if(vet[i]<min);
			min = vet[i];
	}
	printf("\n O MAXIMO E : %d \n", max);
	printf("\n O MINIMO E : %d \n", min);
	return 0;
}
