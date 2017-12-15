#include "banco.h"
#include <stdio.h>

int main ()
{
	int K = 0, esc;
	printf("\n BEM VINDO AO MINIBANC \n");
	printf("\n VEJA A SEGUIR TODAS AS FERRAMENTAS A SUA DISPOSICAO \n");
	while(K != 1)
	{
		printf("\n 1 - CRIAR CONTA \n 2 - MOSTRAR CONTA \n 3 - MOSTRAR SALDO \n 4 - INSERIR DINHEIRO \n 5 - RETIRAR DINHEIRO \n 6 - EXTRATO \n 7 - REMOVER CONTA \n 8 - SAIR \n");
		scanf("%d", &esc);
		switch(esc)
		{
			case 1:
				K = criar_conta();
				if(K = 0)
					printf("\n CONTA CRIADA COM SUCESSO \n");
				if(K != 0)
					printf("\n ERRO \n");
				break;
			case 2:
				K = mostrar_conta();
				break;
			case 3:
				K = mostrar_saldo();
				break;
			case 4:
				K = inserir_din();
				break;
			case 5:
				K = retirar_din();
				break;
			case 8:
				K = 1;
				break;
		}	
	}
	return 0;
}
