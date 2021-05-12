/* Faça um programa que leia um número inteiro N e informe se o
mesmo é ou não primo.
Nota: um número é dito primo quando for
divisível apenas por 1 e por ele mesmo.*/

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
