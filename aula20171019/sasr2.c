#include <stdio.h>

int parC ()
{
	int i = 1;
	for(i; i <= 20; i++)
		if(i%2 == 0)
			printf("%d ", i);
	return 0;
}
int imparC ()
{
	int i = 1;
	for(i; i <= 20; i++)
		if(i%2 != 0)
			printf("%d ", i);
	return 0;
}
int main ()
{
	char escolha;
	printf("\n DIGITE 1 PARA VER NUM. IMPARES E 2 PARA NUM PARES \n");
	scanf("%s", &escolha); getchar();
	switch (escolha)
	{
		case '1':
		{
			imparC();
			break;
		}
		case '2':
		{
			parC();
			break;	
		}
	}
	return 0;
}
