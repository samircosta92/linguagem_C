/*Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A.*/


#include<stdio.h>
#define Q 10

int quant(int n, int tamanho, int V[])
{
	int j,cont=0;
	
	for(j=0;j<tamanho;j++)
	{
		if(V[j]==n)
		{
			cont++;
		}
	}
	

	return cont;
}

void main()

{
	int i,num,cont,V[Q];

	for(i=0;i<Q;i++)
	{
		printf("Entre com um numero: ");
		scanf("%d",&V[i]);
	}
	printf("Informe um numero para verificar: ");
	scanf("%d",&num);
	cont=quant(num,10,V);
	printf("O numero de ocorrencias do numero %d e %d vezes ",num,cont);
}
