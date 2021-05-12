#include<stdio.h>

void main()
{
	int i,a,b,c,vetor[100];
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	vetor[0]=a;
	printf("%d\n",vetor[0]);
	for(i=1;i<b;i++)
	{
		vetor[i]=vetor[i-1]+c;
		printf("%d\n",vetor[i]);
	}
	
}
