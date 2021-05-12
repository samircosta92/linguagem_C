/*QUESTÃO 07: Desenvolver uma função que remova determinado elemento
(todas as suas ocorrências) de um vetor de float. Ao final,
retornar o número de remoções realizadas.*/
#include<stdio.h>
#define Q 5

int remover(float V[], float N, int *quant)
{
	int i,j,cont=0;
	for(i=0;i<(*quant);)
	{
		if(V[i]==N)
		{
			for(j=i;j<(*quant);j++)
			{
				V[j]=V[j+1];
				
				
			}
		cont++;
		(*quant)--;
		}
		else
		{
			i++;
		}
	}
	return cont;
}
	


int main(){
	
	int i,quant,resp;
	float v[Q];
	float num;
	quant=Q;
	
	printf("Digite valores para preencher o vetor: \n");
	for(i=0;i<Q;i++)
	{
		scanf("%f",&v[i]);
	}
	
	printf("Digite o numero a ser removido : \n");
	scanf("%f",&num);
	
	resp=remover(v,num,&quant);
	for(i=0;i<quant;i++)
	{
		printf("%.2f ", v[i]);
	}
	printf("O numero %.2f foi removido %d vez(es)",num,resp);
}
