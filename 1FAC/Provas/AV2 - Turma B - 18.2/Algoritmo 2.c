/*Desenvolver uma fun��o que, dados dois n�meros
inteiros A e B, determine o n�mero de divisores comuns aos dois.
Observa��o: apresentar a main com um exemplo de chamada � fun��o implementada.*/

#include<stdio.h>

int divisores(int a, int b)
{
	int i,j,cont=1;
	for(i=2;i<=a;i++)
	{
		if((a%i==0)&&(b%i==0))
		{
			cont++;
		}
	}
	return cont;
}

void main()
{
	int num1, num2,resp;
	printf("Informe um numero: ");
	scanf("%d",&num1);
	printf("Informe um numero: ");
	scanf("%d", &num2);
	resp=divisores(num1,num2);
	printf("O numero de divisores em comum: %d",resp);
}
