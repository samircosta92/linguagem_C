#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void transposta(int M[8][5],int l, int c);
void main()
{
	int mat [8] [5],i,j;
	srand(time(NULL));
	for(i=0;i<8;i++)
	{
		for(j=0;j<5;j++)
		{
			mat[i][j] = rand()%10;
		}
	}
	
	for(i=0;i<8;i++)
	{
		for(j=0;j<5;j++)
		{
		printf("%d  ",mat[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");	
	transposta(mat,8,5);	
}

void transposta(int M[8][5], int l, int c)
{
	int i,j,T[c][l];
	FILE *pont;
	for(i=0;i<c;i++)
	{
		for(j=0;j<l;j++)
		{
			T[i][j] = M[j][i];
		}
	}
	
	for(i=0;i<c;i++)
	{
		for(j=0;j<l;j++)
		{
		printf("%d  ",T[i][j]);
		}
		printf("\n");
	}	
	//arquivo
	pont=fopen("arquivo_1.dat","w");
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			fprintf(pont,"%d  ",M[i][j]);
		}
			fprintf(pont,"\n");
	}
	fprintf(pont,"\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<l;j++)
		{
			fprintf(pont,"%d  ",T[i][j]);
		}
			fprintf(pont,"\n");
	}
	
	
}






