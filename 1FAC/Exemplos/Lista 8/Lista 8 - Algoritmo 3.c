/*Pede-se a implementação de uma função que,
dado um vetor contendo números reais,
determine se o mesmo encontra-se ordenado
de forma crescente.*/

#include<stdio.h>
#define Q 5

int crescente(int tamanho,float V[])
{
	int j,cont=0;
	
	for(j=0;j<tamanho;j++)
	{
	
		if(V[j]<V[j-1])
		{
			cont++;
		}
	}	
	if(cont==0)
	{
		return 1;
	}
	else
	{
		return 0 ;
	}
}


void main()
{
	int i,resp;
	float V[Q];

		
		for(i=0;i<Q;i++)
	{
		printf("Entre com um numero: ");
		scanf("%f",&V[i]);
	}
	resp= crescente(Q,V);
	if(resp==0)
	{
		printf("O vetor nao esta ordenado");
	}
	else
	{
		printf("O vetor esta ordenado");
	}
}
