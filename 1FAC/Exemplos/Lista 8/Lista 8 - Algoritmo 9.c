/*Implementar a função de inserção de
determinado elemento em um vetor ordenado
crescentemente (dica: utilizar a função do item
08 para auxiliar).*/

#include<stdio.h>
#define Q 5

int adicionar(int N, int V[])
{
	int j,i;
	
	for(i=0;i<Q;i++)
	{
		
		if(V[i]>N)
		{
			for(j=(Q-1);j>=i;j--)
			{
				V[j+1]=V[j];
			}
			V[i]=N;
			return 1;	
		}
		
	}
	V[Q-1]=N;

	return 0;
	

	
}

void main()
{
	int i,num,cont,V[Q],tam=0,resp;
	
	
	for(i=0;i<4;i++)
	{
		printf("Entre com um numero: ");
		scanf("%d",&V[i]);
	}
	printf("Informe um numero para adicionar: ");
	scanf("%d",&num);
	
	resp=adicionar(num,V);
	
	for(i=0;i<Q;i++)
	{
		printf("%d",V[i]);
		
}
	

}
