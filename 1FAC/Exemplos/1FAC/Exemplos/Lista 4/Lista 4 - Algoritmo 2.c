/* Lista IV - Algoritmo 2
Desenvolver um programa que calcule a soma dos n�meros de 1 a N, sendo N um
n�mero inteiro fornecido pelo usu�rio.*/

#include<stdio.h>
int main()
{
	int i, N, soma=0;
	printf("Informe o valor de N: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		soma+=i;
	}
	printf("A soma sera %d",soma);
}


/* 
#include<stdio.h>
int main()
{
	int i=1, N, soma=0;
	printf("Informe o valor de N: ");
	scanf("%d",&N);
	while(i<=N)
	{
		soma+=i;
		i++;
	}
	printf("A soma sera %d",soma);
}*/

