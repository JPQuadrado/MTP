#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dados()
{
	return rand()%6 + 1;
}
int main ()
{
	srand(time(0));
	int dado1, dado2, dado3, dado4, dado5, soma, n = 0;
	do
	{	
		dado1 = dados();
		dado2 = dados();
		dado3 = dados();
		dado4 = dados();
		dado5 = dados();
		soma = dado1 + dado2 + dado3 + dado4 + dado5;
		printf("%d " , soma);
		if(soma <= 23 && soma >= 18)
		{
			printf("\n VOCE GANHOU \n");
			n = 3;
		}
		else
			n++;
		printf("\n VOCE POSSUI %d TENTATIVAS \n", 3-n);
	}while(n < 3);
	printf("\n SUAS TENTATIVAS ACABARAM \n");	
	return 0;
}
