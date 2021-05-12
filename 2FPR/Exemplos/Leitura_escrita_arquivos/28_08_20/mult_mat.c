#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void geramat(int num, int amp);
void multmat(int num,int amp, int matA[][num],int matB[][num]);
void exibemat(int num, int matA[][num], int matB[][num], int matC[][num]);
void arquivo(int num,int amp,int matA[][num], int matB[][num], int matC[][num]);

void main()
{
	int a,n;
	
	printf("Informe a ordem da matriz quadrada: ");
	scanf("%d",&n);
	printf("Informe a amplitude dos valores: ");
	scanf("%d",&a);
	
	geramat(n,a);
	
}
	
void geramat(int num, int amp)	
	
{
	int i,j,matA[num][num],matB[num][num];
	srand(time(NULL));
	
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			matA[i][j]=rand()%amp;
			matB[i][j]=rand()%amp;
			
		}
	}
	
	multmat(num,amp,matA,matB);
	
}

void multmat(int num,int amp,int matA[][num], int matB[][num])
{
	int i,j,k,soma=0,aux,matC[num][num];
	
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
		
			for(k=0;k<num;k++)
			{
				aux=matA[i][k]*matB[k][j];
				soma+=aux;
		
			}
			matC[i][j]=soma;
			soma=0;
		}
	
		
	}
	
	exibemat(num,matA,matB,matC);
	arquivo(num,amp,matA,matB,matC);
}

void exibemat(int num, int matA[][num], int matB[][num], int matC[][num])
{
	int i,j;
	
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			printf("%4d",matA[i][j]);
			
		}
		printf("\n\n");
	}

	printf("*\n\n");
	
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			printf("%4d",matB[i][j]);
			
		}
		printf("\n\n");
	}
	
	printf("=\n\n");
	
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			printf("%4d",matC[i][j]);
			
		}
		printf("\n");
	}
	
}	

void arquivo(int num,int amp,int matA[][num], int matB[][num], int matC[][num])
{
	int i,j;
	FILE *pont;
	
	pont=fopen("Mult_Mat.dat","a");
	fprintf(pont,"%d %d\n",num,amp);
	
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			fprintf(pont,"%4d",matA[i][j]);
			
		}
		fprintf(pont,"\n");
	}
	
	fprintf(pont,"\n");

	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			fprintf(pont,"%4d",matB[i][j]);
			
		}
		fprintf(pont,"\n");
	}
	
	fprintf(pont,"\n");
	
	for(i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			fprintf(pont,"%4d",matC[i][j]);
			
		}
		fprintf(pont,"\n");
	}
	fprintf(pont,"\n");
	fclose(pont);
}
	
	
	


