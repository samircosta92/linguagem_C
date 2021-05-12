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
	int i,j,soma,soma_vet,vetmenor,vetmaior,contMaior,contMenor;
	float vetMedia[quant],media_vet,media,maior=-9999,menor=9999;
	
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
	
	soma=0;
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
		vetMedia[i]=media_vet;
		printf("\nMedia do vetor %d: %.2f",i,media_vet);
	
		if(media_vet>maior)
		{
			maior=media_vet;
			vetmaior=i;
		
		}
	
		if(media_vet<menor)
		{
			menor=media_vet;
			vetmenor=i;
		}
		
	
	}
	
	media=(float)soma/(quant*num);
	
	for(i=0;i<quant;i++)
	{
		if(vetMedia[i]>media)
		{
			contMaior++;
		}
		if(vetMedia[i]<media)
		{
			contMenor++;
		}
	}
	printf("\nMedia de todos os valores: %.2f\n",media);
	printf("\nO vetor com a maior media e o V[%d]\n",vetmaior);
	printf("\nO vetor com a menor media e o V[%d]\n",vetmenor);
	printf("\nO numero de vetores com media superior a media total e %d e com media inferior e %d",contMaior,contMenor);
}


