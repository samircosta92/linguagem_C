#include<stdio.h>


void matriz(int M[5][5],int l,int c)
{
	int i,j,k;
	FILE *pont;
	for(i=0;i<l;i++)
	{
		
		for(j=0;j<c;j++)
		{
			
			for(k=i;k<(l+c);k++)
			{
				M[i][j]=k+1;
				j++;
			}
		
		}
	
	}
	pont=fopen("arquivo_3.dat","w");
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			
			printf("%d ",M[i][j]);
			fprintf(pont,"%d ",M[i][j]);
	
		}
		printf("\n");
		fprintf(pont,"\n");
	}
	
}


void main()
{
	int M[5][5];
	
	matriz(M,5,5);
}
