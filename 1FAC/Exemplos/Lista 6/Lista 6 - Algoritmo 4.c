/* Fa�a um programa que leia um n�mero inteiro N e informe se o
mesmo � ou n�o primo.
Nota: um n�mero � dito primo quando for
divis�vel apenas por 1 e por ele mesmo.*/

#include<stdio.h>
int main(){
int N, i, contP=0;
printf("Digite o numero: ");
scanf("%d",&N);
for(i=1;i<=N;i++)
{
	if(N%i==0)
	{
		contP++;
	}
}
	if(contP==2)
	{
		printf("O numero  e primo! ");
	}
	else
	{
		printf("O numero nao e primo!");
	}
}
