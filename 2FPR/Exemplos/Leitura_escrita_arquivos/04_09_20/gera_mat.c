#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geramat(int li,int col, int amp, int mat[][col],char nome[]);
void arquivo(int li,int col, int amp, int mat[][col],char nome[]);

void main()
{
	int L,C,A;
	char nome[30];
	
	printf("Informe o nome do arquivo: ");
	gets(nome);
	printf("Informe o numero de linhas: ");
	scanf("%d",&L);
	printf("Informe o numero de colunas: ");
	scanf("%d",&C);
	printf("Informe a amplitude: ");
	scanf("%d",&A);
	
	int mat[L][C];
	
	geralista(L,C,A,mat,nome);
	arquivo(L,C,A,mat,nome);

}

void geramat(int li,int col, int amp, int mat[][col],char nome[])
{
	int i,j;
	
	srand(time(NULL));
	
	for(i=0;i<li;i++)
	{
		for(j=0;j<col;j++)
		{
			mat[i][j]=rand()%amp;
		}
	}
	
}

void arquivo(int li,int col, int amp, int mat[][col],char nome[])
{
	int i,j;
	FILE *pont;

	pont=fopen(nome,"w");
	fprintf(pont,"%d %d %d\n",li,col,amp);
	
	for(i=0;i<li;i++)
	{
		for(j=0;j<col;j++)
		{
			fprintf(pont,"%d ",mat[i][j]);		
		}	
		fprintf(pont,"\n");		
	}	
	fclose(pont);
	
	
}
