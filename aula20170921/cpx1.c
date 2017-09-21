#include <stdio.h>

int main ()
{
	float real, imag;
	printf("DIGITE A PARTE REAL E A IMAGINARIA \n");
	scanf("%f %f", &real, &imag);
	printf("A SOMA E \n :");
	printf("%f + %f*i \n", real , imag);
	return 0;
}
