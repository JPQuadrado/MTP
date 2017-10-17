#include <stdio.h>

int parC (int vet[20], int par[20])
{
	int i = 0,n = 0,vet[20],par[20];
	for(i; i < 20; i++)
		if(vet[i]%2 == 0)
		{
			par[n] == vet[i];
			n++;
		}
	return 0;
}
int imparC (int vet[20], int impar[20])
{
	int i = 0,n = 0,vet[20],impar[20];
	for(i; i < 20; i++)
		if(vet[i]%2 != 0)
		{
			impar[n] == vet[i];
			n++;
		}
	return 0;
}
int main ()
{
	char escolha;
	int vinte[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}, park[20] = {0}, impark[20] = {0},n = 0,m = 0,a = 0, b = 0,parC(vinte,park),imparC(vinte,impark);
	printf("\n DIGITE 1 PARA VER NUM. IMPARES E 2 PARA NUM PARES \n");
	scanf("%s", &escolha); getchar();
	b = imparC(vinte,impark);
	a = parC(vinte,park);
	switch (escolha)
	{
		case '1':
		{
			printf("\n NUMEROS IMPARES \n");
			for(n; n < 20; n++)
				if(impark[n] != 0)
					printf("%d ", impark[n]);
			break;	
		}
		case '2':
		{
			printf("\n NUMEROS PARES \n");
			for(m; m < 20; m++)
				if(park[m] != 0)
					printf("%d ", park[m]);
			break;	
		}
	}
	return 0;
}
