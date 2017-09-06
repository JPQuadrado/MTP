#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	srand(time(0));
	int x, y;
	x = rand()%100;
	printf("O numero sorteado foi %i entre 0 - 99 \n", x);
	y = 101 + rand()%(294 - 101);// () -> ?
	printf("O numero sorteado foi %i entre 101 e 293 \n", y);
	return 0;
}
