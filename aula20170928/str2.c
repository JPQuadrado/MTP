#include <stdio.h>

int main ()
{
	int V = 0, C = 0, D = 0, E = 0, i = 0,k=0;
	char frase[1000];
	printf("Ola usuario, digite uma frase \n");
	fgets(frase,1000,stdin);
	for(i; frase[i] != '\0'; i++)
		if(frase[i] <= 'z' && frase[i] >= 'a')
			frase[i] = frase[i] - ('a'- 'A');
	for(k; frase[k] != '\0'; k++)
	{
		if(frase[k] <= 'Z' && frase[k] >= 'A')
		{
			if(frase[k] == 'A' || frase[k] == 'E' || frase[k] == 'I' || frase[k] == 'O' || frase[k] == 'U')
				V++;
			else
				C++;
		}			
		if(frase[k] <= '9' && frase[k] >= '0')
			D++;
		if(frase[k] == ' ')
			E++;
	}	
	printf("\n V: %d \n C: %d \n D: %d \n E: %d \n", V, C, D, E);
	return 0;
}
