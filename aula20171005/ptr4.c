#include <stdio.h>

int main ()
{
	double n1, n2, soma;
	printf("\n DIGITE DOIS NUMEROS \n");
	scanf("%lf %lf", &n1, &n2); getchar();
	printf("\n O NUMERO %.3lf ESTA NO END. %p \n O NUMERO %.3lf ESTA NO END %p \n", n1, &n1, n2, &n2);
	soma = n1 + n2;
	printf("\n A SOMA DE %.3lf + %.3lf E IGUAL A %.3lf E SEU END E %p \n", n1,n2,soma,&soma);
	return 0;
}
