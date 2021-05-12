/*Fazer um função que, dados dois vetores A e B
com números inteiros, gerar o vetor C que
consiste na intersecção dos dois primeiros.*/

#include<stdio.h>
void inter(int t1, int t2, int *A, int *B)
{
	int j,i,C[t1];
	for(i=0;i<t1;i++)
	{
		for(j=0;j<t2;j++)
		{
			if(A[i]==B[j])
			{
				C[i]=A[i];
				printf("%d\n",C[i]);
			}
		
		}
		
	}
	
}

void main()
{
	
	int t1,t2,A[5] = {1,2,3,4,2}; 
	int B[5] = {10,2,3,4,6};
	t1=sizeof(A)/sizeof(int);
	t2=sizeof(B)/sizeof(int);
	
	inter(5,5,A,B);

}
