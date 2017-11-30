#include <stdio.h>
#include <stdlib.h>

typedef
struct stponto {
	int x, y;
}
ponto;

void preenche(int n, ponto * p) {
	int i;
	for (i=0; i < n; i++){
		printf("Ponto: %d\n", i+1);
		scanf("%d", &((p+i)->x));
		scanf("%d", &((p+i)->y));
	}
}

int main(){
	FILE * arquivo;
	int n; ponto * pontos;
	char nome[100];
	printf("\n QUANTIDADE DE PONTOS : \n");
	scanf("%d", &n);
	pontos = (ponto *) malloc(n*sizeof(ponto));
	preenche(n, pontos);
	printf("\n NOME DO ARQUIVO : \n ");
	scanf("%s", nome);
	arquivo = fopen (nome, "wb");
	fwrite(pontos, 2*sizeof(int), n, arquivo);
	fclose(arquivo);
	free(pontos);
	return 0;
}
	
