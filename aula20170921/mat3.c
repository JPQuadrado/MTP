#include <stdio.h>
#include <math.h>

int main ()
{
	double resultado, base, numero;
	printf("\n DIFITE UM NUMERO PARA O CALCUO DO LOG \n\n");
	scanf("%lf", &numero); getchar();
	printf("\n DIGITE UM VALOR PARA A BASE DO LOG \n");
	printf("\n A BASE DEVE SER DIFERENTE DE '0'\n\n");
	scanf("%lf", &base); getchar();
	resultado = (log(numero)/log(base));
	printf("\n O RESULTADO E %.3lf \n", resultado);
	return 0;
}
