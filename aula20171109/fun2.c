#include <stdio.h>

void pree (int num1, int num2)
{
	printf("\n QUOCIENTE DA DIVISAO: %d \n", num1/num2);
	printf("\n RESTO DA DIVISAO: %d \n", num1%num2);
}
int main ()
{
	int n1,n2;
	printf("\n DIGITE O PRIMEIRO NUMERO \n");
	scanf("%d",&n1); getchar();
	printf("\n DIGITE O SEGUNDO NUMERO \n");
	scanf("%d",&n2); getchar();
	pree(n1,n2);	
	return 0;
} 
