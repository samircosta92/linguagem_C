/*Dados um vetor de reais (cujos elementos
est�o ordenados crescentemente) e um
n�mero x, retornar a posi��o da primeira
ocorr�ncia de x (caso encontre-se no vetor) ou
a posi��o na qual deveria estar (caso contr�rio)*/

#include<stdio.h>
#define Q 5

int posicao(int n, int tamanho, int V[])
{
	int j;
	
	for(j=0;j<tamanho;j++)
	{
		if(V[j]==n)
		{
			
			return j;
		}
		if((n>V[j])&&(n<V[j+1]))
		{
			
			return j+1;
			
		}
	}
	

	
}

void main()
{
	int i,num,cont,V[Q],tamanho,posi,resp;

	
	for(i=0;i<Q;i++)
	{
		printf("Entre com um numero: ");
		scanf("%d",&V[i]);
	}
	printf("Informe um numero para verificar: ");
	scanf("%d",&num);
	
	resp=posicao(num,Q,V);
	
	printf("A posicao do numero ou a que deveria estar e %d ",resp);
}
