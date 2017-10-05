#include <stdio.h>

int main()
{
	int vetor[] = {0,1,2,4,8,16,1025};
	unsigned char * ponteiro; // aponta para bytes
	int nbytes = sizeof(vetor);
	int i, contagem = 0; // variavel de controle e contagem
	printf ("End. inicial de vetor: %p\n, vetor");
	ponteiro = (unsigned char *) vetor;
	for (i=0; i < nbytes; i++)
	{
		if (*(ponteiro+i) == 0x00)
		contagem++;
		printf ("End.: %p, dado: %d, %X\n", ponteiro+i, ponteiro[i], *(ponteiro+i));
	}
	printf("De %d bytes, %d estao com 0x00.\n", nbytes, contagem);
	return 0;
}
