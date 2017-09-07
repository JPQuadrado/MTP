#include <stdio.h>

int main ()
{
	float A,B,H;
	printf("Digite a medida da base \n");
	scanf("%f", &B); getchar();
	printf("Digite a medida da altura \n");
	scanf("%f", &H); getchar();
	A = (B*H)/2;
	printf("A area do trinagulo e %f \n",A);
	return 0;
}
