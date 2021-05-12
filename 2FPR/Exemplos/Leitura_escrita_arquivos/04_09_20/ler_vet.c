#include <stdio.h>

void ler_arquivo(char nome[]);
void exibevetor(int num, int amp,int v[]);

void main()
{

	char nome[30];
	printf("Informe o nome do arquivo: ");
	gets(nome);
	
	ler_arquivo(nome);

}

void ler_arquivo(char nome[])
{
	FILE *pont;
	int n,a,i;
	
	pont=fopen(nome,"r");
	 
	fscanf(pont,"%d %d",&n,&a);
	int v[n];

	for(i=0;i<n;i++)
	{
		fscanf(pont,"%d",&v[i]);
	}
	
	exibevetor(n,a,v);	
	
}


void exibevetor(int num, int amp,int v[])
{
	int i;
	
	printf("%d %d\n",num,amp);
	for(i=0;i<num;i++)
	{
		printf("%d ",v[i]);
	}
}
