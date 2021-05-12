//av2-Q2
//dado um vetor A com quantA elementos e um vetor B vazio, preencher o vetor B com os numeros do vetor A, mas em ordem crescente
#include<stdio.h>

void main()
{
	int A[10]={10,2,4,6,1,9,0,8,5,7};
	int B[10];
	int quantA=10;
	int quantB=0;
	
	funcaoBraddock(A,B,&quantA,&quantB);
}

void funcaoBraddock(int A[],int B[],int *quantA,int *quantB)
{
	int i,j,k,aux1,menor,pos=0,aux[*quantA],TAM=*quantA;
	
	
	//preencher vetor auxiliar para guardar os valores do vetor A
	for(j=0;j<*quantA;j++)
	{
		aux[j]=A[j];
	}
	
	
	
	while(*quantB<TAM)
	{
		//variavel menor comeca sendo o primeiro valor do vetor
		menor=A[0];
		
		//salvando pra comparar depois q procurar um menor dentro do for, se caso nao achar um menor
		aux1=A[0];
		
		//achar o menor  dentro do vetor A
		for(i=0;i<*quantA;i++)
		{
			if(A[i]<menor)
			{
				menor=A[i];
				pos=i;
			}
		}
		//se nao achar é pq ta na posicao 0 o menor
		if(menor==aux1)
		{
			pos=0;
		}
		
		//colocando no vetor B
		B[*quantB]=menor;
		(*quantB)++;
		
		//removendo do vetor A pra nao achar o mesmo valor quando voltar a procurar la dentro
		for(k=pos;k<*quantA;k++)
		{
			A[k]=A[k+1];
		}
		(*quantA)--;		
	}
	//apos o fim do preenchimento do vetor B, devolver os elementos do vetor A q estao no vetor auxiliar e o tamanho
	//devolvendo o tamanho pro Vetor A
	(*quantA)=TAM;
	
	//devolvendoos elementos originais
	for(j=0;j<TAM;j++)
	{
		A[j]=aux[j];
	}
}
