#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<string.h>

#define N 50

double media(double *a, double n)
{
	int i=0;
	double media=0;
	for(i=0;i<n;i++)
	{
		media=media+a[i];
	}
	media=(media/n);
	printf("\n MEDIA : %lf \n",media);
	return media;
}
void desvio(double *a, double n,double x)
{
	int i=0;
	double l=0;
	for(i=0; i<n;i++)
	{
	l=l+pow((x-a[i]),2);
	}
	l=sqrt(l/n-1);
	printf("\n DESVIO PADRAO : %lf \n",l);
}

void tamanho(double *a, double k)
{
	int i=0;
	double ma=0,me=0;
	ma=a[0];
	for(i=0; i<k; i++)
	{
		if(a[i]>ma)
		{
		 	ma=a[i];
		}
	}
	me=a[0];
	for(i=0; i<k; i++)
	{
		if(a[i]<me)
		{
 			me=a[i];
		}
	}
	printf("MAIOR: %lf \n MENOR %lf \n",ma,me);
}

int main()
{
	int g;
	printf("DIGITE: \n1-NOVO ARQUIVO \n2-ACRESENTAR \n3-LER \n0-SAIR\n");
	do{
	scanf("%d",&g);
	switch(g)
	{
	case 1:
	{
		srand(time(0));
		FILE * arquivo;
		int i=0;
	    double d;
	    double v[N];
	    char str[N];
	    fflush(stdin);
	    printf("\n NOME DO ARQUIVO \n");
	    scanf("%s", str);
	    fflush(stdin);
		printf("\n QUANTIDADE DE NUMEROS A SER GERADOS \n");
	    scanf("%lf",&d);
		for(i=0; i<d;i++)
		{
			v[i]= rand() % 100;
		}
		printf("%lf",v[0]);
	  arquivo = fopen(str, "wb");

    		if(arquivo)
    		{
    			fwrite(v, sizeof(double), d, arquivo);
    			fclose(arquivo);
    		}
    		else {fprintf(stderr, "\n ERRO !\n");}
		    break;
	}
	case 2:
	{
		srand(time(0));
		int u=0;
		double f,cv;
		double vet2[N];
		char str1[N];
		fflush(stdin);
		printf("\n NOME DO ARQUIVO \n");
		scanf("%s", str1);
		fflush(stdin);
		printf("\n QUANTIDADE DE NUMEROS A SER GERADOS\n");
		scanf("%lf",&f);
		FILE * continuacao;
		for(u=0; u<f;u++)
		{
			vet2[u]= rand() % 100;
		}
		printf("%lf",vet2[0]);
		continuacao=fopen(str1,"a+b");
		if(continuacao)
		{
			fwrite(vet2, sizeof(double),f, continuacao);
			fclose(continuacao);
		}
		else {fprintf(stderr, "\n ERRO \n");}
	break;
	}
	case 3:
	{
		int h=0;
		double cv,xi;
		double P[N];
		char str3[N];
		fflush(stdin);
		printf("\n NOME DO ARQUIVO\n");
		scanf("%s", str3);
		printf("\n DIGITE A QUANTIDADE DE PONTOS\n");
		scanf("%lf",&cv);
		FILE * arquivof;
		arquivof=fopen(str3,"rb");
		if(arquivof)
		{
			fread(P, sizeof(double),cv, arquivof);
			fclose(arquivof);
		}
		else {
			fprintf(stderr, "\n ERRO \n");
		break;
		}
		for(h=0; h<cv; h++)
		{
			printf("%lf\n", P[h]);
		}
	xi=media(P,cv);
	desvio(P,cv,xi);
	tamanho(P,cv);
	break;
	}
}
}
while(g!= 0);
return 0;
}
