/*QUESTÃO 06: Faça um programa que leia um número N inteiro, menor ou igual a 18.
Se for maior do que 18, o programa exibirá uma mensagem de erro e terminará a sua
execução; caso contrário, deverá exibir os números no intervalo de 1 a 99 cujos
algarismos somem N*/

#include<stdio.h>
int main(){
	int n,i;
	printf("Informe o numero: ");
	scanf("%d",&n);
	if((n<=0)||(n>18))
	{
		printf("ERRO");
	}
	else
	{
		for(i=1;i<=99;i++)
		{
			
			if(i/10+i%10==n)
			{
			printf("%d " ,i);
			}
		}

	}
}
