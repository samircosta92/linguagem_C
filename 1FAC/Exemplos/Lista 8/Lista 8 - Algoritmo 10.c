/*Fazer um função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na união dos dois primeiros.*/

#include<stdio.h>


void uniao(int A[], int tamA, int B[], int tamB, int C[], int *tamC)
{
	int i,j,p,cont=0;
	for(i=0;i<tamA;i++)
	{
		C[i]=A[i];
	}
	p=tamA;
	for(i=0;i<tamB;i++)
	{
		cont=0;
		for(j=0;j<tamA;j++)
		
		{
		if(B[i]==A[j])
		{
			cont++;
		}
		}
	if(cont==0)
	{
		C[p]=B[i];
		p++;
	}
	}
	*tamC=p;
}

void main()
{
	
	int i,tC=15, A[5], B[5],C[10];
	
	for(i=0;i<5;i++)
	{
		printf("Entre com um numero: ");
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("Entre com um numero: ");
		scanf("%d",&B[i]);	
	}
	uniao(A,5,B,5,C,&tC);
	
	for(i=0;i<tC;i++)
	{
		printf("%d\n",C[i]);
			
	}
}
