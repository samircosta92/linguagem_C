/*Desenvolver uma fun��o que calcule o n-�simo
termo da sequ�ncia de Fibonacci.*/

#include<stdio.h>
int fibonacci(int n)
{
	int a,b,c,i;
	
	if((n==1)||(n==2))
	{
		return 1;
	}
	else
	{
		a=b=1;
		for(i=3;i<=n;i++)
	{
		
		c=a+b;
		a=b;
		b=c;
		
		
	}
	return c;
}
}

void main()
{
	int n,num;
	printf("Informe o numero de termos: ");
	scanf("%d",&n);
	num=fibonacci(n);
	printf("%d",num);
}
