/* Implementar uma fun��o que, dado um
n�mero inteiro N, exiba uma sequ�ncia de
n�meros como as ilustradas nos exemplos a
seguir:*/
#include<stdio.h>
void sequencia(int n)
{
	int i,j;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
			{
				continue;
			}
			printf("(%d %d)\n",i,j);
		}
	}
}

void main()
{
	int n;
	printf("Informe o numero: ");
	scanf("%d",&n);
	sequencia(n);
}
