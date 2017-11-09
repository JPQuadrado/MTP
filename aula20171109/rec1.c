#include <stdio.h>

int  soma (int VET[], int n)
{
	int i = n-1;
	if(i >= 0)
	return VET[i] + soma(VET,i);
}
int main ()
{
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31}, som;
	int N = sizeof(A)/sizeof(int);
	som = soma(A,N);
	printf("%d \n", som);
}
