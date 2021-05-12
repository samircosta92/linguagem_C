// sem paramentro sem retorno

#include<stdio.h>
void fatorial()
{
	int i,n,fat;
	printf("Informe o numero: ");
	scanf("%d",&n);
	for(fat=1,i=2;i<=n;i++)
	{
		fat*=i;
	}
	printf("%d!=%d",n,fat);
}

void main()
{
	fatorial();
}
