/*Fazer uma função que calcule o MDC (máximo
divisor comum) entre dois números.*/

#include<stdio.h>
int mdc(int n1,int n2)
{
	int MDC,i;
	
	if(n2>n1)
	{
	for(i=1;i<=n1;i++)
	{
		if((n1%i==0)&&(n2%i==0))
		{
			MDC=i;
		}
	}
	return MDC;
	}
	else
	{
		for(i=1;i<=n2 ;i++)
	{
		if((n1%i==0)&&(n2%i==0))
		{
			MDC=i;
		}
	}
	return MDC;
}
}

void main()
{
	int num1,num2,resp;
	printf("Informe o primeiro numero: ");
	scanf("%d",&num1);
	printf("Informe o segundo numero: ");
	scanf("%d",&num2);
	resp=mdc(num1,num2);
	printf("%d",resp);
	
}
