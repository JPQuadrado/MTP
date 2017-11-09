#include <stdio.h>

void soma (int d1 , int num1 , int d2 , int num2)
{
	printf(" %d / %d \n" , ((d2*num1)+(d1*num2)) , (d1*d2));
}
int main ()
{
	int a,b,c,d;
	printf("\n DIGITE DOIS NUMEROS RACIONAIS \n");
	printf("\n PRIMEIRO NUMERO : \n");
	scanf("%d/%d", &a, &b);
	printf("\n SEGUNDO NUMERO: \n");
	scanf("%d/%d", &c, &d);
	soma(b,a,d,c);
	return 0;
}
