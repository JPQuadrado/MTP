#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media (float * v, int q)
{	
	int j = 0;
	float soma;
	while(j < q)
	{
		soma = soma + v[j];
		j++;
	}
	return soma/q;
}
float desvio(float * k, int q, float j)
{
	int l = 0;
	float soma = 0;
	while(l < q)
	{
		soma = soma + pow(j - k[l], 2);
		l++;
	}	
	return sqrt(soma/(q-1));
}
int main()
{
	int n,i;
	float *pont, m, d;
	printf("\n DIGITE A QUANTIDADE DE DADOS \n");
	scanf("%d", &n);
	pont = malloc(n*sizeof(float));
	for(i = 0; i < n; i++)
	{
		printf("\n %d NUMERO \n", i+1);
		scanf("%f", &pont[i]);
	}
	m = media(pont,n);
	printf("\n A media e: %f \n", m);
	d = desvio(pont,n,m);
	printf("\n O desvio padrao e: %f \n", d);
	free(pont);
	return 0;
}
