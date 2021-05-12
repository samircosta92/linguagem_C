/*Faça uma função que, dado um vetor de reais,
altere todas as ocorrências do número A pelo
número B*/

#include<stdio.h>
#define Q 10
void troca(int tamanho,float a, float b, float V[])
{
	int i;
	for(i=0;i<tamanho;i++)
	{
		if(V[i]==a)
		{
			V[i]=b;
		}
		
	}
}


void main()
{
	
	int i,tamanho;
	float V[Q], A, B;

	for(i=0;i<Q;i++)
	{
		printf("Entre com um numero: ");
		scanf("%f",&V[i]);
	}
	printf("Informe o numero A: ");
	scanf("%f",&A);
	printf("Informe o numero B: ");
	scanf("%f",&B);
	troca(10,A,B,V);
	for(i=0;i<Q;i++)
	{
		printf("%.2f \n",V[i]);
	
	}

}
