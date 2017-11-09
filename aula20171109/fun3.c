#include <stdio.h>

int main ()
{
	int i = 0, k = 0;
	int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
	int n = sizeof(A)/sizeof(int);
	int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
	int m = sizeof(B)/sizeof(int);
	for(i; i < m; i++)
		for(k; k < n; k++)
			if(A[k] == B[i])
				printf("%d \n", A[k]);
}
