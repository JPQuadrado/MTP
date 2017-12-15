#include <stdio.h>
#include <string.h>

typedef struct tipo_cliente
	{
	char nome[100];
	int idade;
	char RG[10]; //Com letra porem sem '-' e sem '.'
	char CPF[11]; // sem o '-'
	char usuario[20];
	char senha[4];
	float saldo;
	}cliente;
int criar_conta ()
{
	FILE * conta;
	int y = 0;
	cliente cli;
	cli.saldo = 0;
	printf("\n SIGA AS INSTRUÇOES \n");
	printf("\n DIGITE SEU NOME : \n");
	scanf("%s", cli.nome);
	printf("\n DIGITE SUA IDADE : \n");
	scanf("%d",&cli.idade);
	if(cli.idade < 18)
	{
		printf("\n VOCE NAO POSSUI IDADE SUFICIENTE PARA CRIAR UMA CONTA \n");
		return 2;
	}
	printf("\n DIGITE SEU RG (APENAS AS PRIMEIRAS LETRAS E OS NUMEROS) (MAXIMO DE 10 CARACTERES) : \n");
	scanf("%s",cli.RG);
	if(strlen(cli.RG) > 10)
	{
		printf("\n ULTRAPASSOU O LIMITE \n");
		return 2;
	}
	printf("\n DIGITE SEU CPF (APENAS NUMEROS) (MAXIMO DE 11 CARACTERES) : \n");
	scanf("%s",cli.CPF);
	if(strlen(cli.CPF) > 11)
	{
		printf("\n ULTRAPASSOU O LIMITE \n");
		return 2;
	}
	printf("\n DIGITE SEU USUARIO (MAXIMO DE 20 CARACTERES) : \n");
	scanf("%s",cli.usuario);
	if(strlen(cli.usuario) > 20)
	{
		printf("\n ULTRAPASSOU O LIMITE \n");
		return 2;
	}
	printf("\n DIGITE SUA SENHA (4 CARACTERES): \n");
	scanf("%s",cli.senha);
	if(strlen(cli.senha) > 4)
	{
		printf("\n ULTRAPASSOU O LIMITE \n");
		return 2;
	}
	conta = fopen(cli.usuario ,"wb");
	fwrite(&cli, sizeof(cliente),1,conta);
	fclose(conta);
	return 0;
}
int mostrar_conta()
{
	char us[20];
	FILE * op;
	cliente k;
	printf("\n BEM VINDO AO MINIBANC \n");
	printf("\n DIGITE O SEU USUARIO : \n");
	scanf("%s", us);
	op = fopen(us,"rb");
	fread(&k,sizeof(cliente),1,op);
	printf("\n NOME : %s \n IDADE: %d \n RG: %s \n CPF: %s \n", k.nome,k.idade,k.RG,k.CPF); 
	fclose(op);
	return 0;
}
int mostrar_saldo()
{
	FILE * arq;
	cliente cli;
	char usi[20];
	printf("\n BEM VINDO AO MINIBANC \n");
	printf("\n DIGITE O SEU USUARIO : \n");
	scanf("%s", usi);
	arq = fopen(usi,"rb");
	if(arq == NULL)
	{
		printf("\n CONTA NAO ENCONTRADA \n");
	}
	fread(&cli,sizeof(cliente),1,arq);
	printf("\n %s : O SEU SALDO E DE : %lf REAIS \n", cli.usuario, cli.saldo);
	fclose(arq);
	return 0;
}
int inserir_din()
{
	FILE * p;
	cliente cli;
	float valor;
	char u[20];
	printf("\n BEM VINDO AO MINIBANC \n");
	printf("\n DIGITE O SEU USUARIO : \n");
	scanf("%s", u);
	printf("\n DIGITE O VALOR A SER DEPOSITADO: \n");
	scanf("%f", &valor);
	p = fopen(u,"r+b");
	if(p == NULL)
	{
		printf("\n CONTA NAO ENCONTRADA \n");
	}
	fread(&cli,sizeof(cliente),1,p);
	cli.saldo = cli.saldo + valor;
	fwrite(&cli,sizeof(cliente),1,p);
	fclose(p);	
	return 0;
}
int retirar_din()
{
	FILE * p;
	cliente cli;
	float valor;
	char u[20];
	printf("\n BEM VINDO AO MINIBANC \n");
	printf("\n DIGITE O SEU USUARIO : \n");
	scanf("%s", u);
	printf("\n DIGITE O VALOR A SER DEPOSITADO: \n");
	scanf("%f", &valor);
	p = fopen(u,"r+b");
	if(p == NULL)
	{
		printf("\n CONTA NAO ENCONTRADA \n");
	}
	fread(&cli,sizeof(cliente),1,p);
	cli.saldo = cli.saldo - valor;
	if(cli.saldo < 0)
	{
		printf("\n ESSA TRANSAÇÃO NÃO PODE SER EFETUADA \n");
		return 0;
	}
	fwrite(&cli,sizeof(cliente),1,p);
	fclose(p);	
	return 0;
}
