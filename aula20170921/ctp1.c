#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ()
{
	int a, i = 0, c;
	printf("\n Inicio do programa \n");
	char frase[250];
	fgets(frase, 250, stdin);
	for(i ; i < strlen(frase); i++)
		printf("%c",toupper(frase[i]));
	printf("\n");
	return 0;
}
