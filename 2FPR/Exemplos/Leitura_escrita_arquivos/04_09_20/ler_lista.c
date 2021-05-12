#include <stdio.h>

void ler_arquivo(char nome[]);
void exibelista(int quant,int num,int amp, int li[][num]);


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
	int q,n,a,i,j;
	
	pont=fopen(nome,"r");
	 
	fscanf(pont,"%d %d %d",&q,&n,&a);

	int li[q][n];

	for(i=0;i<q;i++)
	{
		for(j=0;j<n;j++)
		{
			fscanf(pont,"%d",&li[i][j]);
		}
	}
	fclose(pont);
	
	exibelista(q,n,a,li);
	

}

void exibelista(int quant,int num,int amp, int li[][num])
{
	int i,j,soma=0,soma_vet;
	float media_vet,media;
	
	
	printf("%d %d %d\n",quant,num,amp);
	
	for(i=0;i<quant;i++)
	{
		printf("vetor[%d]: ",i);
		for(j=0;j<num;j++)
		{
			printf("%d ",li[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<quant;i++)
	{
		soma_vet=0;
		media_vet=0;
		
		for(j=0;j<num;j++)
		{
			soma_vet+=li[i][j];
			soma+=li[i][j];
		}
		
		media_vet=(float)soma_vet/num;
		printf("\nMedia da linha %d: %.2f \n",i,media_vet);
		
	}
	
	media=(float)soma/(quant*num);
	printf("\nMedia de todos os valores: %.2f",media);
}


