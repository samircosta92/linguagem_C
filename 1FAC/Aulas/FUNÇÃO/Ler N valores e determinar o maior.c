#include<stdio.h>

int maiorvalor(int N)
{
	int i,valor,maior;
	printf("Informe um valor: ");
	scanf("%d",&valor);
	maior=valor;
	for(i=2;i<=N;i++)
	{
		printf("Informe um valor: ");
		scanf("%d",&valor);
		if(valor>maior)
		{
			maior=valor;
		}
	}
	return maior;
}

void main()
{
	int num, maior;
	printf("Digite um numero: ");
	scanf("%d",&num);
	maior = maiorvalor(num);
	printf("O maior valor sera: %d",maior);
}
