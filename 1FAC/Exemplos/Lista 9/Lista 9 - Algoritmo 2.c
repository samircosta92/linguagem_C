#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int contido(int A[], int B[], int tam1, int tam2)
{
	int i,j,contAB=0,contBA=0;
	for(i=0;i<tam1;i++)
	{
		for(j=0;j<tam2;j++)
		if(A[i]==B[j])
		{
			contAB++;
		}
	 } 
	 for(i=0;i<tam2;i++)
	{
		for(j=0;j<tam1;j++)
		if(B[i]==A[j])
		{
			contBA++;
		}
	 } 
	if(tam1==contAB)
	{
		return 1;
	}
	else
	{
		if(tam2==contBA)
		{
			return 2;
		}
		else{
			return 0;
		}
	}
	
	
}

void main()
{
	int i, n1,n2,resp;
	printf("Determine o tamanho do vetor A: ");
	scanf("%d",&n1);
	printf("Determine o tamanho do vetor B: ");
	scanf("%d",&n2);
	int A[n1], B[n2];
	srand(time(NULL));
	for(i=0;i<n1;i++)
	{
		printf("Digite um valor: ");
		scanf("%i",&A[i]);
		
	}
	for(i=0;i<n2;i++)
	{
		printf("Digite um valor: ");
		scanf("%i",&B[i]);
	}
	resp=contido(A,B,n1,n2);
	printf("%d",resp);
}
