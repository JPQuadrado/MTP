#include <stdio.h>

void preencher()
{
	FILE *arquivo;
	float altura; char nome[100]; int idade;
	printf("\n NOME : \n");
	scanf("%s", nome);
	printf("\n IDADE : \n");
	scanf("%d", &idade);
	printf("\n ALTURA (METROS) : \n");
	scanf("%f", &altura);
	arquivo = fopen("info.txt", "w");
	fprintf(arquivo, "%s\n %d\n %f\n", nome , idade , altura);
	fclose(arquivo);
}
void imprimir()
{
	FILE * arquivo;
	char nome[100]; int idade; float altura;
	arquivo = fopen("info.txt", "r");
	fscanf(arquivo, "%s\n %d\n %f\n", nome, &idade, &altura);
	fclose(arquivo);
	fprintf(stdout, "\n NOME: %s\n IDADE : %d\n ALTURA : %f metros \n", nome, idade, altura);
}
int main ()
{
	int k = 0; char esc;
	while(k == 0)
	{	
	printf("\n DIGITE 'a' PARA ADICIONAR DADOS, 'b' PARA VER O ARQUIVO .txt; PARA SAIR DIGITE 'e' \n");
	scanf("%c", &esc);
	switch (esc)
	{
		case 'a':
			preencher();
		break;
		case 'b':
			imprimir();
		break;
		case 'e':
			k++;
		break;
	}	
	}	
	return 0;
}
