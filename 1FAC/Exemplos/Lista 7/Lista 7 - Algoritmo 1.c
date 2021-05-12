/* Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.*/

#include<stdio.h>
void multiplos(int a,int b, int N)
{
	int i;
	for(i=a;i<=b;i++)
	{
		if(i%N==0)
		{
			printf("%d\n", i);
		}
	}
}

void main()
{
	int a,b,N;
	printf("Informe o valor de A: ");
	scanf("%d",&a);
	printf("Informe o valor de B: ");
	scanf("%d",&b);
	printf("Informe o valor de N: ");
	scanf("%d",&N);
	multiplos(a,b,N);
}
