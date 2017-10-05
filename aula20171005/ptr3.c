#include <stdio.h>

int main()
{
	int vetor[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
	unsigned char * indicador; // aponta para bytes
	int nbytes = sizeof(vetor); //recebe a quantidade de bytes que tem o vetor
	int i, contagem = 0;
	printf ("End. inicial de vetor: %p\n, vetor");
	indicador = (unsigned char *) vetor;
	for (i=0; i < nbytes; i++)
	{
		if (*(indicador+i) != 0)
		contagem++;
		printf ("End.: %p, dado: %d, %X\n", indicador+i, indicador[i], *(indicador+i));
	}
	printf("De %d bytes, %d estao com um bit igual a 1.\n", nbytes, contagem);
	return 0;
}
