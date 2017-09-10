#include <stdio.h>

int main ()
{
	float V[5],media;
	for(int i = 0; i < 5; i++)
	{
		printf("Digite a %d nota do aluno \n", (i+1));
		scanf("%f",&V[i]); getchar();
	}
	media = ( 2*V[0] + 2*V[1] + 2*V[2] + 3*V[3] + 5*V[4] )/14;
	printf("A media do aluno foi %f \n", media);
	return 0;
}
