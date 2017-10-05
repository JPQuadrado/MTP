#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	srand(time(0));
	int n = 0, i = 0 , esc, vet[1000],cont = 0;
	unsigned char *p;
	for(i ; i < 1000; i++)
		vet[i] = rand()%32768;
	p = (unsigned char *) vet;
	printf("\n DIGITE UM NUMERO ENTRE 0 E 255 \n");
	scanf("%d", &esc); getchar();
	for(n ; n < sizeof(vet); n++)
		if(vet[n] == esc)
		{
			cont++;		
			printf("\n END: %p \n DADO: %d \n",&p,vet[n]);		
		}		
	printf("\n NUMERO %d TEM %d BYTES LOCALIZADOS \n", esc, cont);
	return 0;
}
