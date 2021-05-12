#include<stdio.h>

void main()
{
	int N,Q,A1;
	printf("Informe o numero de termos: ");
	scanf("%d",&N);
	printf("Informe a razão: ");
	scanf("%d",&Q);
	printf("Informe o primeiro termo: ");
	scanf("%d",&A1);
	pg(A1,Q,N);	
	
}

int pg(int a1, int q, int n)
{
	if(n==1)
	{
		printf("%d",a1);
	}
	else
	{
		
		a1=a1*q;
		pg(a1,q,n-1);
		printf("%d\n",a1);
	}
}
