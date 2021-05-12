#include<stdio.h>


int soma(int a)
{
	if(a==0)
	{
		return 0;
	}
	else
	{
		return a+soma(a-1);
	}
}


void main()
{
	int num,resultado;
	printf("Informe o valor: ");
	scanf("%d",&num);
	resultado=soma(num);
	printf("A soma dos termos sera: %d",resultado);
}
