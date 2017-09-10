#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int m = 100;

int ale ()
{
	int a;
	srand(time(0));
	a = rand()%m;
	return a;
}
int main ()
{
	int lim,D1,D2,D3,j = 0,resu,pont = 0,D;
	do
	{
	printf("Rodada numero %d; Pontuacao %d \n",j+1,pont);
	printf("Digite um limite \n");
	scanf("%d", &lim); getchar();
	D = lim - 10;
	D1 = ale();
	D2 = ale();
	D3 = ale();
	resu = D1 + D2 + D3;
	if(lim < 11)
		pont=pont+(11-resu);
	else
	{
		if(resu>lim)
			pont=pont-D*(resu-lim);
		else
			pont=pont+(lim-resu)/D+1;
	}
	j++;
	}while(j < 3);
	printf("Sua pontuacao final e %d \n", pont);
	return 0;
}
