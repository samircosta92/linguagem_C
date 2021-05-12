/* Pede-se o desenvolvimento de um programa que leia n valores e
determine o maior e o menor elementos do conjunto fornecido.*/

#include<stdio.h>
int main(){
	int i,N, valor,maior=-9999999,menor=9999999;
	printf("Determine a quantidade de valores: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		printf("Escreva um valor: ");
		scanf("%d",&valor);
		if(valor>maior)
		{
			maior=valor;
		}
		if(valor<menor)
		{
			menor=valor;
		}
	}
	printf("O maior valor sera: %d\n",maior);
	printf("O menor valor sera: %d\n",menor);
}
