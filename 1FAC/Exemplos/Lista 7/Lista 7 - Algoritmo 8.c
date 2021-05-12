/*Desenvolver uma função que exiba todos os
números primos inferiores a determinado valor
inteiro N.*/

#include<stdio.h>


void primos(int num)
{
	int i,j,contP;
	for(i=1;i<num;i++)
	{
	
	contP=0;

	for(j=2;j<i;j++)
	
	{
	if(i%j==0)
	{
		contP++;
	}
	
}
	if(contP==0)
	{
		printf("%d\n",i);
	}
}
}



void main()
{
	int N;
	printf("Digite o numero: ");
	scanf("%d",&N);
	primos(N);
}

