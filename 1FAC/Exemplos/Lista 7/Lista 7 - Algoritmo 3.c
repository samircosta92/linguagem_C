/*Desenvolver uma função que calcule o n-ésimo
termo da sequência de Fibonacci.*/

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
