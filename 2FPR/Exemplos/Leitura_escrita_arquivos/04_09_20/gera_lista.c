#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geralista(int quant,int num, int amp, int v[num],char nome[]);
void escreve_cabecalho(int quant, int num, int amp,char nome[]);
void escreve_lista(int quant,int num,int v[num],char nome[]);

void main()
{
	int n,a,q;
	char nome[30];
	
	printf("Informe o nome do arquivo: ");
	gets(nome);
	printf("Informe o numero de listas: ");
	scanf("%d",&q);
	printf("Informe o numero de elementos: ");
	scanf("%d",&n);
	printf("Informe a amplitude: ");
	scanf("%d",&a);
	
	int v[n];
	
	escreve_cabecalho(q,n,a,nome);
	geralista(q,n,a,v,nome);
	
	
}

void ler_cabecalho(int quant, int num, int amp,char nome[])
{
	FILE *pont;
	pont=fopen(nome,"a");
	
	fprintf(pont,"%d %d %d\n",quant,num,amp);
	fclose(pont);
}

void geralista(int quant,int num, int amp, int v[num],char nome[])
{
	int i,cont=0;
	srand(time(NULL));
	
	while(cont!=quant)
	{
	
		for(i=0;i<num;i++)
		{
			v[i]=rand()%amp;
		}
		escreve_lista(quant,num,v,nome);
		cont++;
	
	}

}



void escreve_lista(int quant,int num,int v[num],char nome[])
{
	int i;
	FILE *pont;
	pont=fopen(nome,"a");
	
	for(i=0;i<num;i++)
	{
		fprintf(pont,"%4d ",v[i]);
	}
	fprintf(pont,"\n");
	fclose(pont);
}


