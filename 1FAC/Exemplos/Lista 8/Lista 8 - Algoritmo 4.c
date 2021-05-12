/*Fazer uma função que armazene em um vetor
os 50 primeiros termos da seguinte sequência:
S = 1, 2, 4, 7, 11, 16, ...*/

#include<stdio.h>
void vet(int V[],int tam)
{
	int i;
	V[0]=1;	
	
	for(i=1;i<tam;i++)
	{
	
	V[i]=V[i-1]+i;
		
	}

}

void main()
{
	int vetor[50];
	vet(vetor,50);
}
