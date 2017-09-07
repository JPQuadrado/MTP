#include <stdio.h>

int main ()
{
	int N1;
	printf("Ola usuario, digite um numero inteiro \n");
	scanf("%d", &N1);
	if(N1%2 == 0)
	{
		printf("O numero digitado e PAR \n");
		if(N1%3 == 0)
			printf("O numero e multiplo de 3 \n");
		if(N1%7 == 0)
			printf("O numero e multiplo de 7 \n");
	}
	else
	{
		printf("O numero e IMPAR \n");
		if(N1%5 == 0)
			printf("O numero e multiplo de 5 \n");
	}
	return 0;
}
