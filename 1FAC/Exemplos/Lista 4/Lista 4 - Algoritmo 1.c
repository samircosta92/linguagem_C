/* Lista IV - Algoritmo 1

Dado um número inteiro N, fazer um programa que exiba os números pares
iguais ou inferiores a N.*/


#include<stdio.h>
int main()
{
	int N,i;
	printf("Entre com o valor de N: ");
	scanf("%d",&N);
	for(i=2;i<=N;i=i+2)
	{
		printf("%d ",i);
	}
}


/* #include<stdio.h>
int main()
{
	int N,i=0;
	printf("Entre com o valor de N: ");
	scanf("%d",&N);
	while(i<=N)
	{
		printf("%d ",i);
		i=i+2;
	}

}

*/


