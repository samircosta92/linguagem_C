#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *v;
	int quant;
	int i;
	
	printf("Qual o tamanho do vetor?");
	scanf("%d",&quant);
	
	//alocando 'quant' posições de memoria para 'v'
	
	v = (int*)malloc(quant*sizeof(int)); //memory allocation - malloc retorna o endereço do bloco reservado
	
	if(v==NULL)
	{
		printf("Erro!");
	}
	else
	{
		for(i=0;i<quant;i++)
		{
			printf("Entre com um numero: \n");
			scanf("%d",&v[i]);
		}
	}
}
