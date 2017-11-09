#include <stdio.h>

int  soma (int VET[],int i, int n)
{
	if(i == (n-1))
		return VET[i];
	else
		return VET[i]+soma(VET,i+1,n);
}
int main ()
{
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31}, som;
	int N = sizeof(A)/sizeof(int);
	som = soma(A,0,N);
	printf("%d \n", som);
}
