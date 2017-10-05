#include <stdio.h>

int main ()
{
	int vet[4] = {0}, i = 0, k = 0;
	char *p;
	for(i ; i < 4; i++)
	{
		printf("\n ESCREVA NO VETOR[%d] : ", i+1);
		scanf("%d", &vet[i]);
	}
	p = (char*)vet;
	for(k ; k < sizeof(vet); k++)
		printf("%c ", *(p+k));
	return 0;
}
