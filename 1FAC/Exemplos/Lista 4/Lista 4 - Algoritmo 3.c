/* Lista 4 - Algoritmo 3: Fazer um programa que exiba todos os
divisores de um número fornecido pelo usuário. */

#include<stdio.h>
int main(){
	int i,N,div;
	printf("Informe o valor de N: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		div=N%i;
		if(div==0)
		{
			printf("%d ",i);
		}
	}
}



/*
#include<stdio.h>
int main(){
	int i=1,N,div;
	printf("Informe o valor de N: ");
	scanf("%d",&N);
	
	while(i<=N)
	{
		div=N%i;
		if(div==0)
		{
		printf("%d ",i);
		}
		i++;
		
	}
} */


