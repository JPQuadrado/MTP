#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int arte (int l, int c)
{
	int ale, i = 0, j = 0, g;
	char caracteres[] = ": $ # $ : 4 b . ' :. : $ # $: 4b. ':.", artes[l][c];
	g = strlen(caracteres);
	for(i; i < l; i++)
	{
		for(j = 0; j < c; j++)
		{
			ale = rand()%(g + 1);
			artes[i][j] = caracteres[ale];
			printf("%c", artes[i][j]);
		}	
		printf("\n");
	}	
	printf("\n");
	return 0;
}
int main ()
{
	int L, C;
	srand(time(0));
	printf("\n DIGITE UM VALOR PARA QUANTIDADE DE LINHAS \n");
	scanf("%d", &L); getchar();
	printf("\n DIGITE UM VALOR PARA QUANTIDADE DE COLUNAS \n");
	scanf("%d", &C); getchar();	
	arte(L,C);
	return 0;
}
