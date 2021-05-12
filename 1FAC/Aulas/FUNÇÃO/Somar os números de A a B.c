#include<stdio.h>

int somaAB(int num1, int num2)
{
	int i,soma=0;
	for(i=num1;i<=num2;i++)
	{
		soma+=i;
	}
	return soma;
}

void main()
{
	int a,b, soma;
	printf("Informe o valor de A: ");
	scanf("%d",&a);
	printf("Informe o valor de B: ");
	scanf("%d",&b);
	soma= somaAB(a,b);
	printf("%d",soma);
}
