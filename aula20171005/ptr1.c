#include <stdio.h>

int main ()
{
	unsigned int A = 0xFACA8421;
	int n = 0;
	unsigned char *c;
	c = ((unsigned char*) &A);
	printf("\n CONTEUDO DOS BYTTES EM DECIMAL %i \n", *(c+0));
	printf("\n CONTEUDO DOS BYTTES EM DECIMAL %i \n", *(c+1));
	printf("\n CONTEUDO DOS BYTTES EM DECIMAL %i \n", *(c+2));
	printf("\n CONTEUDO DOS BYTTES EM DECIMAL %i \n", *(c+3));	
	printf("\n O ENDEREÇO DE MEMORIA : %p \n", (c+0));
	printf("\n O ENDEREÇO DE MEMORIA : %p \n", (c+1));
	printf("\n O ENDEREÇO DE MEMORIA : %p \n", (c+2));
	printf("\n O ENDEREÇO DE MEMORIA : %p \n", (c+3));
	printf("\n O CONTEUDO EM HEXA DECIMAL E  %X \n", *(c+0));
	printf("\n O CONTEUDO EM HEXA DECIMAL E  %X \n", *(c+1));
	printf("\n O CONTEUDO EM HEXA DECIMAL E  %X \n", *(c+2));
	printf("\n O CONTEUDO EM HEXA DECIMAL E  %X \n", *(c+3));
	return 0;
}
