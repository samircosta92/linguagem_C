//QUESTAO 2
#include<stdio.h>

void preencher(int A[], int tamA, int B[],int *tamB)
{
	 int i,j,soma=0;
	 for(i=0;i<tamA;i++) 
	 {
	 	for(j=0;j<tamA;j++)
		{
		
		
		 soma+=A[i];
		 B[j]=soma;
		 (*tamB)++;
		
		
		}
	 }
 

  
}

void main()
{
	int i,tB=0;
	int vetA[5]={1,2,3,4,5};
	int vetB[5];
	
	
	preencher(vetA,5,vetB,&tB);
	for(i=0;i<tB;i++)
	{
		printf("%d",vetB[i]);	
	}
	
}

