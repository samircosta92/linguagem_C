#include<stdio.h>

void exibir(int num1, int num2)
{
	int i;
	for(i=num1;i<=num2;i++)
	{
		printf("%d\n",i);
	}
}

void main()
{
	int a,b;
	printf("Informe o valor de A: ");
	scanf("%d",&a);
	printf("Informe o valor de B: ");
	scanf("%d",&b);
	exibir(a,b);
}
