#include<stdio.h>

void main()
{
	int N,V;
	printf("Informe o valor de N: ");
	scanf("%d",&N);
	printf("Informe o valor de V: ");
	scanf("%d",&V);
	multiplos(N,V-1);
	
}

int multiplos(int n, int v)
{
	
	if(v%n==0)
	{
		if(v==0)
		{
			printf("\n%d\n",v);
			return 0;
		}
		
		multiplos(n,v-1);
		printf("%d\n",v);
	}
	else
	{
		multiplos(n,v-1);
	}
	
}
	
