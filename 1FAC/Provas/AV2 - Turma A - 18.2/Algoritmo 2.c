/* Desenvolver uma função que, dados dois números
inteiros A e B, determine o número de potências de 2
existentes no intervalo [A,B].*/

#include<stdio.h>

int potencia(int A, int B)
{
	int i, cont=0, pot=1;
	for(i=1;i<=B;i++)
	{
		if((pot>=A)&&(pot<=B))
		{
			cont++;
		}
		pot=pot*2;	
	}
	return cont;
}

void main()
{
	int num1, num2, resp;
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	resp=potencia(num1,num2);
	printf("O numero de potencias de 2 no intervalo [%d,%d] e %d",num1,num2,resp);
}
