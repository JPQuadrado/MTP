#include <stdio.h>
#include <stdlib.h>

typedef
struct stponto {
	int x, y;
}ponto;
/*
void centroide(int n, ponto * p) {
	int i;
	for (i=0; i < n; i++){
		printf("\n PONTO: %d\n", i+1);
		scanf("%d", &((p+i)->x));
		scanf("%d", &((p+i)->y));
	}
}*/

int main(){
	FILE * arquivo;
	int n; ponto * pontos;
	char nome[100];
	printf("\n NOME DO ARQUIVO PONTOS \n");
	scanf("%s", nome);
	arquivo = fopen (nome, "wb");
	fread(pontos, sizeof(ponto), n , arquivo);
	printf("%d", pontos.x);
	printf("%d", pontos.y);
	fclose(arquivo);
	return 0;
}
