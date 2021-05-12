//sem parametro, sem retorno calcular fatorial 10 numeros
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
	printf("%d!=%d\n",n,fat);
}

void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
	fatorial();
	}
}
