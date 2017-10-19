#include <stdio.h>
#include <math.h>

float DELT(float a, float b, float c)
{
	return ((b*b)+(-4*a*c));
}
int main ()
{
	float a,b,c,delta;
	printf("\n SABENDO DA FUNCAO A*(x*x) + B*x + C , DIGITE \n");
	printf("\n DIGITE O VALOR DE A \n");
	scanf("%f", &a);
	printf("\n DIGITE O VALOR DE B \n");
	scanf("%f", &b);
	printf("\n DIGITE O VALOR DE C \n");
	scanf("%f", &c);
	delta = sqrt(DELT(a,b,c));
	if(delta < 0)
		printf("\n NAO EXISTE RAIZ \n");
	if(delta > 0)
	{
		printf("\n RAIZ NUMERO 1 : %f  \n", ((0-b)-(delta/2*a)));
		printf("\n RAIZ NUMERO 2 : %f  \n", ((0-b)+(delta/2*a)));
	}
	if(delta == 0)
		printf("\n RAIZ UNICA : %f \n", ((0-b)/2*a));
	return 0; 
}
