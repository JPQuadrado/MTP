#include <stdio.h>
#include <math.h>

int main ()
{
	double Resu, soma, subP1, subP2, X1, X2, Y1, Y2;
	printf("\n DIGITE AS COORDENADAS DO PONTO 1 \n");
	scanf("%lf %lf", &X1 , &Y1);
	printf("\n DIGITE AS COORDENADAS DO PONTO 2 \n");
	scanf("%lf %lf", &X2 , &Y2);
	subP1 = pow((X2 - X1), 2.0);
	subP2 = pow((Y2 - Y1), 2.0);
	soma = subP1 + subP2 ;
	Resu = sqrt(soma);
	printf("O resutado e %lf \n", Resu);
	return 0;
}
