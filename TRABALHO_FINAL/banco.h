#include <stdio.h>
#include <string.h>

typedef struct tipo_cliente
	{
	char nome[100];
	int idade;
	char RG[11]; //Com letra porem sem '-' e sem '.'
	char CPF[12]; // sem o '-'
	char usuario[20];
	char senha[5];
	float saldo;
	float retirado;
	int contRET;
	float inserido;
	int contINS;
	}cliente;
int criar_conta ()
{
	FILE * conta;
	int y = 0;
	cliente cli;
	cli.saldo = 0;
	cli.retirado = 0;
	cli.inserido = 0;
	cli.contINS = 0;
	cli.contRET = 0;
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
	char us[20], senha[5];
	int i = 0;
	FILE * op;
	cliente k;
	printf("\n BEM VINDO AO MINIBANC \n");
	printf("\n DIGITE O SEU USUARIO : \n\n");
	scanf("%s", us);
	op = fopen(us,"rb");
	if(op == NULL)
	{
		printf("\n CONTA NAO ENCONTRADA \n");
		return 0;
	}
	fread(&k,sizeof(cliente),1,op);
	fclose(op);
	printf("\n TOTAL DE 3 TENTATIVAS");
	while(i != 3)
	{
		printf("\n DIGITE SUA SENHA (%d TENTATIVA) \n",(i+1));
		scanf("%s", senha);
		if(strcmp(senha,k.senha) == 0)
		{
			printf("\n NOME : %s \n IDADE: %d \n RG: %s \n CPF: %s \n", k.nome,k.idade,k.RG,k.CPF); 
			return 0;
		}
		i++;		
	}
	if(i == 3)
			printf("\n TENTATIVAS TOTAIS ALCANCADAS, TENTE DEPOIS \n");

	return 0;
}
int mostrar_saldo()
{
	FILE * arq;
	cliente cla;
	char usi[20];
	char senha[5];
	int i = 0;
	printf("\n BEM VINDO AO MINIBANC \n");
	printf("\n DIGITE O SEU USUARIO : \n");
	scanf("%s", usi);
	if(fopen(usi,"rb") != 0)
	{
		arq = fopen(usi,"rb");
		fread(&cla,sizeof(cliente),1,arq);
		fclose(arq);
		printf("\n TOTAL DE 3 TENTATIVAS");
		while(i != 3)
		{
			printf("\n DIGITE SUA SENHA (%d TENTATIVA) \n",(i+1));
			scanf("%s",senha);
			if(strcmp(senha,cla.senha) == 0)
			{
				printf("\n  %s : O SEU SALDO E DE : %.2f REAIS \n", cla.usuario, cla.saldo);
				return 0;
			}		
			i++;	
		}
		if(i == 3)
			printf("\n TENTATIVAS TOTAIS ALCANCADAS, TENTE DEPOIS \n");
	}
	else
		printf("\n CONTA NAO ENCONTRADA \n");	
	return 0;
}
int inserir_din()
{
	FILE * p;
	cliente cle;
	float valor;
	char u[20],senha[5];
	int i = 0;
	printf("\n BEM VINDO AO MINIBANC \n");
	printf("\n DIGITE O SEU USUARIO : \n");
	scanf("%s", u);
	if(fopen(u,"rb") != 0)//SE FOSSE W DIRETO ELE IRIA CRIAR UM DO ZERO
	{
		p = fopen(u,"rb");
		fread(&cle,sizeof(cliente),1,p);
		fclose(p);
		printf("\n TOTAL DE 3 TENTATIVAS");
		while(i != 3)
		{
			printf("\n DIGITE SUA SENHA (%d TENTATIVA) \n",(i+1));
			scanf("%s",senha);
			if(strcmp(senha,cle.senha) == 0)
			{
				printf("\n DIGITE O VALOR A SER DEPOSITADO: \n");
				scanf("%f", &valor);
				cle.saldo = cle.saldo + valor;
				cle.inserido = cle.inserido + valor;		
				cle.contINS++;
				p = fopen(u,"wb");
				fwrite(&cle,sizeof(cliente),1,p);
				fclose(p);
				return 0;
			}
			i++;		
		}
		if(i == 3)
			printf("\n TETATIVAS TOTAIS ALCANCADAS, DINHEIRO NAO DEPOSITADO \n");
	}
	else
		printf("\n CONTA NAO ENCONTRADA \n");
	return 0;
}
int retirar_din()
{
	FILE * p;
	cliente clo;
	float valor;
	char u[20], senha[5];
	int i = 0;
	printf("\n BEM VINDO AO MINIBANC \n");
	printf("\n DIGITE O SEU USUARIO : \n");
	scanf("%s", u);
	if(fopen(u,"rb") != 0) //SE FOSSE W DIRETO ELE IRIA CRIAR UM DO ZERO
	{
		p = fopen(u,"rb");
		fread(&clo,sizeof(cliente),1,p);
		fclose(p);
		printf("\n TOTAL DE 3 TENTATIVAS");
		while(i != 3)
		{
			printf("\n DIGITE SUA SENHA (%d TENTATIVA) \n",(i+1));
			scanf("%s",senha);
			if(strcmp(senha,clo.senha) == 0)
			{
				printf("\n DIGITE O VALOR A SER RETIRADO: \n");
				scanf("%f", &valor);
				clo.saldo = clo.saldo - valor;
				clo.retirado = clo.retirado + valor;
				clo.contRET++;
				if(clo.saldo < 0)
				{
					printf("\n ESSA TRANSAÇÃO NÃO PODE SER EFETUADA \n");
					return 0;
				}
				else
				{
					p = fopen(u,"wb");
					fwrite(&clo,sizeof(cliente),1,p);
					fclose(p);
					return 0;
				}	
			}	
			i++;
		}
		if(i == 3)
			printf("\n TETATIVAS TOTAIS ALCANCADAS, DINHEIRO NAO RETIRADO \n");	
	}
	else
		printf("\n CONTA NAO ENCONTRADA \n");
	return 0;
}
int extrato()
{
	FILE * A;
	char u[20],senha[5];
	int i = 0;
	cliente cli;
	printf("\n DIGITE SEU USUARIO \n");
	scanf("%s",u);
	if(fopen(u,"rb") != 0)
	{
		A = fopen(u,"rb");
		fread(&cli,sizeof(cliente),1,A);
		fclose(A);
		printf("\n TOTAL DE 3 TENTATIVAS");
		while(i != 3)
		{
			printf("\n DIGITE SUA SENHA (%d TENTATIVA)\n",(i+1));
			scanf("%s", senha);
			if(strcmp(senha,cli.senha) == 0)
			{			
				printf("\n RETIRADO O TOTAL DE : %.2f EM %d VEZES \n", cli.retirado, cli.contRET);
				printf("\n INSERIDO O TOTAL DE : %.2f EM %d VEZES \n", cli.inserido, cli.contINS);
				return 0;
			}
			i++;
		}
		if(i == 3)
			printf("\n TETATIVAS TOTAIS ALCANCADAS, TENTE DEPOIS\n");
	}
	else
	{
		printf("\n CONTA NÃO ENCONTRADA \n");
	}
	return 0;
}
int remove_conta()
{
	int i = 3;
	FILE * op;
	cliente L;
	char usi[20], senha[5];
	printf("\n DIGITE SEU USUARIO \n");
	scanf("%s", usi);
	if(fopen(usi,"r") != NULL)
	{
		op = fopen(usi,"r");
		fread(&L,sizeof(cliente),1,op);
		fclose(op);
		printf("\n TOTAL DE 3 TENTATIVAS");
		while(i != 0)
		{
			printf("\n PARA DELETAR SUA CONTA, DIGITE A SENHA: (%d  TENTATIVAS) \n", i);
			scanf("%s", senha);
			if(strcmp(senha,L.senha) == 0)
			{
				i = 0;
				remove(usi);
				printf("\n CONTA REMOVIDA \n");
				return 0;
			}
			else
				i--;
		}
		if(i == 0)
			printf("\n TETATIVAS TOTAIS ALCANCADAS, CONTA NAO REMOVIDA \n");
	}
	else
		printf("\n CONTA NAO ENCONTRADA \n");
	return 0;
}
