/*Implementar uma função que, dado um número inteiro n, e o intervalo definido pelos
números a e b, determine quantos valores do intervalo possuem divisores (sendo estes
diferentes de 1) que também sejam divisores de n.*/

#include<stdio.h>
int divisores(int n, int a, int b)
{
	int i,j,cont=0,soma=0,contdiv=0;
	
	for(i=a;i<=b;i++)
	{
		for(j=2;j<=n;j++)
		{
			if((i%j==0)&&(n%j==0))
			{
				cont++;
			}
		}
		if(cont>0)
		{
			contdiv++;
		}
		cont=0;
	}
	return contdiv;
}

void main()
{
	int a,b,N,resp;
	printf("Informe o valor de N: ");
	scanf("%d",&N);
	printf("Informe o valor de a: ");
	scanf("%d",&a);
	printf("Informe o valor de b: ");
	scanf("%d",&b);
	
	resp=divisores(N,a,b);
	printf("%d",resp);
}
