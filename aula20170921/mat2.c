#include <stdio.h>
#include <math.h>

int main ()
{
	float a,b,c,d;
	printf("digite dois lados do triangulo \n");
	scanf("%f %f", &b, &c); getchar();
	printf("Digite o angulo em radianos \n");
	scanf("%f", &d);
	a = sqrt(pow(b,2) + pow(c,2) - 2*b*c*cos(d));
	printf("Valor do outro lado %f \n", a);
	return 0;
}
