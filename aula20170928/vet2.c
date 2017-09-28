#include <stdio.h>

int main ()
{	
	int i = 0,k = 0,j = 0,m = 0,vet[10],aux,w=9;
	printf("\n DIGITE 10 NUMEROS \n");
	for(i; i < 10; i++)
	{
		printf("DIGITE O NUMERO PARA A POSICAO %d \n",  i+1);
		scanf("%d", &vet[i]); getchar();
	}
	printf("O VETOR DIGITADO FOI \n ");
	for(k;k < 10; k++)
		printf("%d  ",vet[k]);
	printf("\n");
	printf("O VETOR INVERTIDO E \n");
	for(j ;j < w; j++,w--)
	{	
		aux = vet[j];
		vet[j] = vet[w];
		vet[w] = aux;
	}
	for(m;m < 10; m++)
		printf("%d  ",vet[m]);
	printf("\n");
	return 0;
}
