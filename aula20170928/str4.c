#include <stdio.h>
#include <ctype.h>

int main ()
{
	char fra[1000];
	int i = 0,j = 0;
	printf("\n Ola usuario digite uma frase \n");
	fgets(fra,1000,stdin);
	for(i; fra[i] != '\0'; i++)
		if(fra[i] >= 'a' && fra[i] <= 'z')
			fra[i] = toupper(fra[i]);
	for(j; fra[j] != '\0'; j++)
	{
		if(fra[j] == 'A')
		{	
			fra[j] = '4';
			printf("%c",fra[j]);
		}	
		if(fra[j] == 'E')
		{
			fra[j] = '3';
			printf("%c",fra[j]);		
		}
		if(fra[j] == 'I')
		{
			fra[j] = '1';
			printf("%c",fra[j]);
		}
		if(fra[j] == 'O')
		{
			fra[j] = '0';
			printf("%c",fra[j]);
		}
		if(fra[j] == 'S')
		{
			fra[j] = '5';
			printf("%c",fra[j]);
		}
		if(fra[j] == 'G')
		{
			fra[j] = '6';
			printf("%c",fra[j]);
		}
		else
			printf("%c", fra[j]);
	}
	return 0;
}
