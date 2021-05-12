#include<stdio.h>

void maior_menor(int N, int *maior, int *menor)
{
	int i,valor;
	printf("Informe um valor: ");
	scanf("%d",&valor);
	*maior=valor;
	*menor=valor;
	for(i=2;i<=N;i++)
	{
		printf("Informe um valor: ");
		scanf("%d",&valor);
		if(valor>*maior)
		{
			*maior=valor;
		}
		if(valor<*menor)
		{
			*menor=valor;
		}

	}
}

void main()
{
	int num, mai, men;
	printf("Digite um numero: ");
	scanf("%d",&num);
	maior_menor(num,&mai,&men);
	printf("O maior valor sera %d e o menor sera %d",mai,men);
}
