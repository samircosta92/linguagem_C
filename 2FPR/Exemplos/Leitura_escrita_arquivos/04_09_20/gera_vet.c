#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void geravetor(int num,int amp, int v[]);
void exibevetor(int v[], int num);
void arquivo(int num, int amp, int v[],char nome[]);

void main()
{
	int n,a;
	char nome[30];

	printf("Informe o nome do arquivo: ");
	gets(nome);
	printf("Informe a quantidade de elementos: ");
	scanf("%d",&n);
	printf("Informe a amplitude do intervalo dos elementos: ");
	scanf("%d",&a);
	
	
	int v[n];
	
	geravetor(n,a,v);
	exibevetor(v,n);
	arquivo(n,a,v,nome);

}

void geravetor(int num,int amp,int v[])
{
	int i;
	srand(time(NULL));

	for(i=0;i<num;i++)
	{
		v[i] = rand()%amp; 
		
	}
	

}

void exibevetor(int v[],int num)
{
	int i;
	
	printf("\nVetor: ");
	
	for(i=0;i<num;i++)
	{
		printf("%d ",v[i]);
	}

}

void arquivo(int num, int amp, int v[],char nome[])
{
	int i;
	FILE *pont;
	
	pont=fopen(nome,"w");
	fprintf(pont,"%d %d\n",num,amp);
	
	for(i=0;i<num;i++)
	{
		fprintf(pont,"%d ",v[i]);
	}
	
	fprintf(pont,"\n");
	fclose(pont);
}

		

	
	
	
	
