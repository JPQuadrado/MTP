#include <stdio.h>
#include <stdlib.h>

int MDC(int A, int B)
{
	int mdc = 1;
	if (A==B || B == 0)
		mdc = A;
	else
	{
	if (	A == 0)
		mdc = B;
	else
	{
	if(A%2==0 && B%2!=0)
		mdc=MDC(A/2,B);
	else
	{
	if(A%2!=0 && B%2==0)
		mdc=MDC(A,B/2);
	else
	{
	if(A%2==0 && B%2==0)
		mdc=2*MDC(A/2,B/2);
	else
	{
	if(A>B)
		mdc=MDC((A-B)/2,B);
	else
	{
	if(A<B)
		mdc=MDC((B-A)/2,A);
	}}}}}}
	return mdc;
}
int soma(int n1, int n2, int d1, int d2)
{
	int A,B;
	if(d1==0 || d2==0)
		printf("\n ERRO \n");
	else
	{
		A = n1*d2+d1*n2;
		B = d1*d2;
		printf("\n A DIVISAO E : %d/%d \n",A/MDC(A,B),B/MDC(A,B));
	}
	return 0;
}
int main ()
{
	int n1,n2,d1,d2;
	printf("\n DIGITE O PRIMEIRO NUMERO : (d/n) \n");
	scanf("%d/%d",&n1,&d1);
	printf("\n DIGITE O SEGUNDO NUMERO : (d/n) \n");
	scanf("%d/%d",&n2,&d2);
	soma(n1,n2,d1,d2);
	return 0;
}















