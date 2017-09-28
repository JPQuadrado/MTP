#include <stdio.h>

int main ()
{
	char fra[1000];
	int i = 0, k = 0;
	printf("\n Ola usuario, digite uma frase \n");
	fgets(fra,1000,stdin);
	for(i; fra[i] != '\0'; i++)
	{
		if(fra[i] >= 'A' && fra[i] <= 'M')
			printf("%c", fra[i]+13);
		else
			if(fra[i] >= 'N' && fra[i] <= 'Z')
				printf("%c", fra[i]-13);
		else
			if(fra[i] >= 'a' && fra[i] <= 'm')
				printf("%c", fra[i]+13);
		else
			if(fra[i] >= 'n' && fra[i] <= 'z')
				printf("%c", fra[i]+-13);
	}
	printf("\n");
	return 0;
}
