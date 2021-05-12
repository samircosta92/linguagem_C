#include<stdio.h>

void main()
{
	int num,resultado;
	
	printf("Informe o valor: ");
	scanf("%d",&num);
	resultado=fatorial(num);
	printf("O fatorial de %d eh %d",num,resultado);
}

int fatorial(int a)
{
	if(a==0)
	{
		return 1;
	}
	else
	{
		return a*fatorial(a-1);
	}
}
