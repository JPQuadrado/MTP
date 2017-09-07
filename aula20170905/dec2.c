#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
	srand(time(0));
	int i = 0,N,X,N2,N3;
	printf("Ola usuario, digite um divisor de 8192 \n");
	scanf("%d", &N); getchar();
	if(8192%N == 0)
		i++;
	X = 1328 + (rand()%22);
	printf("Digite o resultado da soma de %d + 101 \n", X);
	scanf("%d", &N2); getchar();
	if(N2 == X + 101);
		i++;
	X = rand()%100;
	printf("Digite o resultado da multiplicacao de %d * 3 \n", X);
	scanf("%d", &N3); getchar();
	if(N3 == X*3)
		i++;
	printf("PONTUACAO FINAL: %d \n", i);
	return 0;
}
