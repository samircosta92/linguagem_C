// com paramentro sem retorno, calcular fatorial de 1,2,3,...9 e 10

#include<stdio.h>
void fatorial(int n)
{
	int i,fat;

	for(fat=1,i=2;i<=n;i++)
	{
		fat*=i;
	}
	printf("%d!=%d\n",n,fat);
}

void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
	fatorial(i);
	}
}
