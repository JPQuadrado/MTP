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
	scanf("%s",cli.nome);
	printf("\n DIGITE SUA IDADE : \n");
	scanf("%d",&cli.idade);
	if(cli.idade < 18)
	{
		printf("\n VOCE NAO POSSUI IDADE SUFICIENTE PARA CRIAR UMA CONTA \n");
		return 0;
	}
	printf("\n DIGITE SEU RG (APENAS AS PRIMEIRAS LETRAS E OS NUMEROS) (MAXIMO DE 10 CARACTERES) : \n");
	scanf("%s",cli.RG);
	if(strlen(cli.RG) > 10)
	{
		printf("\n ULTRAPASSOU O LIMITE \n");
		return 0;
	}
	printf("\n DIGITE SEU CPF (APENAS NUMEROS) (MAXIMO DE 11 CARACTERES) : \n");
	scanf("%s",cli.CPF);
	if(strlen(cli.CPF) > 11)
	{
		printf("\n ULTRAPASSOU O LIMITE \n");
		return 0;
	}
	printf("\n DIGITE SEU USUARIO (MAXIMO DE 20 CARACTERES) : \n");
	scanf("%s",cli.usuario);
	if(strlen(cli.usuario) > 20)
	{
		printf("\n ULTRAPASSOU O LIMITE \n");
		return 0;
	}
	printf("\n DIGITE SUA SENHA (4 CARACTERES): \n");
	scanf("%s",cli.senha);
	if(strlen(cli.senha) > 4)
	{
		printf("\n ULTRAPASSOU O LIMITE \n");
		return 0;
	}
	conta = fopen(cli.usuario ,"wb");
	fwrite(cli.nome, sizeof(char), sizeof(cli.nome),conta);
	fwrite(cli.idade, sizeof(int), sizeof(cli.idade),conta);
	fwrite(cli.RG, sizeof(char), sizeof(cli.RG),conta);
	fwrite(cli.CPF, sizeof(char), sizeof(cli.CPF),conta);
	fwrite(cli.usuario, sizeof(char), sizeof(cli.usuario),conta);
	fwrite(cli.senha, sizeof(char), sizeof(cli.senha),conta);
	fwrite(cli.saldo, sizeof(float), sizeof(cli.saldo),conta);
	fclose(conta);
	return 0;
}
int mostrar_conta()
{
	FILE * op;
	int id;
	char us[20],n[100],r[10],c[11];
	printf("\n BEM VINDO AO MINIBANC \n");
	printf("\n DIGITE O SEU USUARIO : \n");
	scanf("%s", us);
	op = fopen(us,"rb");
	if(op = NULL)
	{
		printf("\n CONTA NAO ENCONTRADA \n");
	}
	fseek(op, 0, SEEK_SET);
	fread(n,sizeof(char),100,op);
	fseek(op,100*sizeof(char),SEEK_SET);
	fread(id,sizeof(int),1,op);
	fseek(op,sizeof(int),SEEK_CUR);
	fread(r,sizeof(char),10,op);
	fseek(op,10*sizeof(char),SEEK_CUR);
	fread(c,sizeof(char),11,op);
	printf("\n NOME : %s \n IDADE: %d \n RG: %s \n CPF: %s \n", n, id,r,c); 
	fclose(op);
	return 0;
}
int mostrar_saldo()
{
	FILE * arq;
	float sal;
	char usi[20];
	printf("\n BEM VINDO AO MINIBANC \n");
	printf("\n DIGITE O SEU USUARIO : \n");
	scanf("%s", usi);
	arq = fopen(usi,"rb");
	if(arq == NULL)
	{
		printf("\n CONTA NAO ENCONTRADA \n");
	}
	fseek(arq,(-(sizeof(float))),SEEK_END);
	fread(sal,sizeof(float),1,arq);
	printf("\n %s : O SEU SALDO E DE : %lf REAIS \n", usi, sal);
	fclose(arq);
	return 0;
}
int inserir_din()
{
	FILE * p;
	float valor, s;
	char u[20];
	printf("\n BEM VINDO AO MINIBANC \n");
	printf("\n DIGITE O SEU USUARIO : \n");
	scanf("%s", u);
	printf("\n DIGITE O VALOR A SER DEPOSITADO: \n");
	scanf("%lf", &valor);
	p = fopen(u,"r+b");
	if(p == NULL)
	{
		printf("\n CONTA NAO ENCONTRADA \n");
	}
	fseek(p,(-(sizeof(float))),SEEK_END);
	fread(s,sizeof(float),1,p);
	s = s + valor;
	fwrite(s,sizeof(float),1,p);
	fclose(p);	
	return 0;
}
int retirar_din()
{
	FILE * p;
	double valor, s;
	char u[20];
	printf("\n BEM VINDO AO MINIBANC \n");
	printf("\n DIGITE O SEU USUARIO : \n");
	scanf("%s", u);
	printf("\n DIGITE O VALOR A SER DEPOSITADO: \n");
	scanf("%lf", &valor);
	p = fopen(u,"r+b");
	if(p == NULL)
	{
		printf("\n CONTA NAO ENCONTRADA \n");
	}
	fseek(p,(-(sizeof(float))),SEEK_END);
	fread(s,sizeof(float),1,p);
	s = s - valor;
	if(s < 0)
	{
		printf("\n A QUANTIA DE RETIRADA ULTRAPASSA SEU SALDO \n");
		fclose(p);
		return 0;
	}
	fwrite(s,sizeof(float),1,p);
	fclose(p);	
	return 0;
}
