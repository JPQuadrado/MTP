#include <stdio.h>
#include <string.h>

int inverte(char F[], int i)
{
	if(F[i]!='\0')
	printf("%c%c", F[i], inverte(F,i+1));
	return 0;
}
int main ()
{
	char frase[140];
	printf("\n DIGITE UMA FRASE \n");
	fgets(frase,140,stdin);
	inverte(frase,0);
	printf("\n");
	return 0;
}
