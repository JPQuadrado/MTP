#include <stdio.h>
#include <string.h>

int l = 0;

void normaliza (char k[])
{
	for(l ; k[l] != '\0' ; l++)
		if(k[l] >= 'a' && k[l] <= 'z')
			k[l] = k[l] - ('a'-'A');
}

int main ()
{
	char frase[1000],bomd[] = "BOM DIA", tch[] = "TCHAU",cont1= 0,cont2 = 0;
	int a,j = 0;
	printf("\n OLA USUARIO, DIGITE UMA FRASE \n");
	fgets(frase,1000,stdin);
	a = strlen(frase);
	printf("\n Tamanho da string : %d \n", a);
	normaliza(frase);
	for(j; j != '\0'; j++)
	{
		if(frase[j] == bomd[j])
			cont1++;
		if(frase[j] == tch[j])
			cont2++;
	}
	if(cont1 == 7)
		printf("Bom dia pra voce tambem \n");
        else
        {
	if(cont2 == 5)
		printf("Saindo? Que pena ... \n");
	else
		printf("Voce quis dizer : %s \n", frase);
        }
	return 0;
}

