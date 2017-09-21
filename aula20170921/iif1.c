#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	srand(time(0));
	int i;
	float prob,alea,cont = 0;
	printf("\n INSIRA A PROBABILIDADE DE 0 A 1 \n");
	scanf("%f", &prob);
	for(i = 0; i < 1000; i++)
	{
		alea = (rand()%11);
		alea = alea/10;
		if(alea < prob)
			cont++;
	}
	printf("\n A probabilidade foi menor %.1f vezes \n", cont);
	return 0;
}
