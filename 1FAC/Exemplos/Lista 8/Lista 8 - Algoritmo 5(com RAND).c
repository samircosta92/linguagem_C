#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Q 10

void parimpar(int v[],int I[],int P[], int tam, int *tamI, int *tamP)
{
	int i;
	*tamP=0;
	*tamI=0;

	for (i=0;i<tam;i++)
	{
		if((v[i]%2)==0)
		{
			P[*tamP]=v[i];
			(*tamP)++;
			
		 }    
		 else
		 {
		 	I[*tamI]=v[i];
			(*tamI)++;
			
		  } 
	}
}

void main()
{
	int V[Q], I[Q], P[Q],i, tI,tP;
	srand(time(NULL));
	
	for (i=0;i<Q;i++)
	{
		V[i] = rand()%10; 
		printf("%d",V[i]);
		    
	}
	parimpar(V,I,P,Q,&tI,&tP);
	
	
	for (i=0;i<tI;i++)
	{
		printf("\n%d",I[i]);     
	}

	for (i=0;i<tP;i++)
	{
		printf("\n%d",P[i]);     
	}

}

