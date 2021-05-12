#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Q 10
void contar(int v[], int tam)
{
	int i,j,cont=0,aux;
	printf("Vetor: ");
	for(i=0;i<tam;i++)
	{
		printf("%d",v[i]);
	}
	for(i=0;i<tam;i++)
	{
		cont=0;
		aux=v[i];
		for(j=0;j<tam;j++)
		{
			if(v[j]==aux)
			{
				cont++;
			}
			
	 }
		printf("\n%d : %d vezes\n",v[i],cont);
 }
	
}

void main()
{
	int i,v[Q];
	srand(time(NULL));
	for(i=0;i<Q;i++)
	{
		v[i] = rand()%10;
	}
	contar(v,Q);
}
