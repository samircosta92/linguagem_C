#include<stdio.h>

int somadivisores(int N)
{
	int i,soma=0;
	for(i=1;i<=N;i++)
	{
		if(N%i==0)
		{
			
			soma+=i;
		}
	}
	return soma;
}

void main()
{
	int N,soma;
	printf("Informe o valor de N: ");
	scanf("%d",&N);
	soma=somadivisores(N);
	printf("%d",soma);
	
}
