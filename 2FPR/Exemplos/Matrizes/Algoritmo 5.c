#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void vetor(int M[10][8], int l, int c);
void main()
{
	int mat[10][8],i,j;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		for(j=0;j<8;j++)
		{
			mat[i][j] = rand()%10;
		}
	}
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<8;j++)
		{
		printf("%d  ",mat[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");	
	vetor(mat,10,8);	
}

void vetor(int M[10][8], int l, int c)
{
	int i,j,V[8],soma=0;
	
	for(i=0;i<c;i++)
	{
		soma=0;
		for(j=0;j<l;j++)
		{
			soma+=M[j][i];
		}
		V[i]=soma;
	}
	
	for(i=0;i<8;i++)
	{
		printf("V[%d]= %d\n",i,V[i]);
	}
		


	
}


