#include<stdio.h>
#include<stdlib.h>

void ler_mat(char nomeA[], char nomeB[]);
void somamat(char nomeS[],int C,int L,int matA[L][C], int matB[L][C]);
void arq_soma(char nomeS[], int L,int C, int matC[L][C]);
void multmat(char nomeM[],int CA,int CB,int LA,int matA[LA][CA], int matB[CA][CB]);
void arq_mult(char nomeM[],int L,int C,int matD[L][C]);

void main()
{
	char nomeA[30], nomeB[30];
	
	printf("Informe o nome do primeiro arquivo: ");
	gets(nomeA);
	printf("Informe o nome do segundo arquivo: ");
	gets(nomeB);
	
	ler_mat(nomeA,nomeB);
	
}

void ler_mat(char nomeA[], char nomeB[])
{
	FILE *pontA,*pontB;
	int LA,CA,AA,LB,CB,AB,i,j;
	char nomeS[30],nomeM[30];
	
	pontA=fopen(nomeA,"r");
	pontB=fopen(nomeB,"r");
	
	fscanf(pontA,"%d %d %d",&LA,&CA,&AA);
	fscanf(pontB,"%d %d %d",&LB,&CB,&AB);
	
	int matA[LA][CA];
	int matB[LB][CB];
	
	for(i=0;i<LA;i++)
	{
		for(j=0;j<CA;j++)
		{
			fscanf(pontA,"%d",&matA[i][j]);
		}
	}
	
	fclose(pontA);
	
	for(i=0;i<LB;i++)
	{
		for(j=0;j<CB;j++)
		{
			fscanf(pontB,"%d",&matB[i][j]);
		}
	}
	fclose(pontB);

	if(LA==LB && CA==CB)
	{
		printf("Informe o nome do arquivo soma: ");
		gets(nomeS);
		printf("A soma sera arquivada!\n");
		somamat(nomeS,CA,LA,matA,matB);
	}
	else
	{
		printf("Nao e possivel somar as matrizes!\n");
	}
	
	if(CA==LB)
	{		
		printf("Informe o nome do arquivo multiplicacao: ");
		gets(nomeM);
		printf("A multiplicacao sera arquivada!");
		multmat(nomeM,CA,CB,LA,matA,matB);
	}
	else
	{
		printf("Nao e possivel multiplicar as matrizes!\n");
	}
}

void somamat(char nomeS[],int C,int L,int matA[L][C], int matB[L][C])
{
	int i,j,matC[L][C];
	
	for(i=0;i<L;i++)
	{
		for(j=0;j<C;j++)
		{
			matC[i][j]=matA[i][j]+matB[i][j];
		}	
	}
	
	arq_soma(nomeS,L,C,matC);
}

void arq_soma(char nomeS[], int L,int C, int matC[L][C])
{
	int i,j;	
	FILE *pontC;
	pontC=fopen(nomeS,"w");
	
	for(i=0;i<L;i++)
	{
		for(j=0;j<C;j++)
		{
			fprintf(pontC,"%4d ",matC[i][j]);
		}
		fprintf(pontC,"\n");
	}
	fclose(pontC);
}

void multmat(char nomeM[],int CA,int CB,int LA,int matA[LA][CA], int matB[CA][CB])
{
	int i,j,k,soma=0,aux,matD[LA][CB];
	
	for(i=0;i<LA;i++)
	{
		for(j=0;j<CB;j++)
		{
		
			for(k=0;k<CA;k++)
			{
				aux=matA[i][k]*matB[k][j];
				soma+=aux;
		
			}
			matD[i][j]=soma;
			soma=0;
		}
	
	}
	
	arq_mult(nomeM,LA,CB,matD);

}

void arq_mult(char nomeM[],int L,int C,int matD[L][C])
{
	int i,j;	
	FILE *pontD;
	pontD=fopen(nomeM,"w");
	
	for(i=0;i<L;i++)
	{
		for(j=0;j<C;j++)
		{
			fprintf(pontD,"%4d ",matD[i][j]);
		}
		fprintf(pontD,"\n");
	}
	fclose(pontD);
}

	
	
