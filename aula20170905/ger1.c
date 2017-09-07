#include <stdio.h>

int main ()
{
	int X,cont = 0;
	printf("Ola usuario, digite um numero inteiro \n");
	scanf("%d", &X);
	for(int k = 2; k <= X; k++)
		if(X%k == 0)
			cont++;
	if(cont == 1)
		printf("O numero %d e PRIMO \n", X);
	else
		printf("O numero %d e um NAO PRIMO \n",X);
	return 0;
}
