//QUESTAO 2
#include<stdio.h>

void preencher(int A[], int tamA, float B[],int *tamB)
{
	 int i,j,soma=0,cont=0;
	 float media;
	 for(i=0;i<tamA;i++) 
	 {
	 	soma=0;
	 	cont=0;
		 
		for(j=i;j<tamA;j++)
		{
		
		soma+=A[j];
		cont++;
	
		
		}

		media=(float)soma/cont;
		B[i]=media;
		(*tamB)++;


	 }
 

  
}


