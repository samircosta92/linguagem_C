/*Implementar uma função que, dado um vetor
de reais, troque o 1º e o 2º elementos, em
seguida o 3º e o 4º elementos e assim
sucessivamente, até se chegar ao final do vetor.*/

#include<stdio.h>
#define Q 5
void troca(int tamanho, float V[] )
{
	float aux;
	int i;
	
	for(i=0;(i+1)<tamanho;i++)
	{
		
	if(i%2==0)
	{
		aux=V[i];
		V[i]=V[i+1];
		V[i+1]=aux;
		
	}
	
}
	
}


void main()
{
	float V[Q];
	int i;

	for(i=0;i<Q;i++)
	{
		
		printf("Entre com um numero: ");
		scanf("%f",&V[i]);
		
	}
	troca(Q,V);
	for(i=0;i<Q;i++)
	{
	printf("%.2f\n",V[i]);
	}
}
