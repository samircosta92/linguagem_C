/*Questão 04 [2,0 pontos]:
Desenvolver um programa que leia um número binário e exiba o número decimal equivalente. 
Caso o valor fornecido pelo usuário não represente um número binário, uma mensagem de erro deve ser exibida.*/
#include<stdio.h>

int main()
{
	int pot2=1, binario, decimal=0;
	printf("Digite um numero binario :\n");
	scanf("%d", &binario);
	
	for(binario;binario>0;binario/=10)
	{
		if(binario%10==1)
		{
			decimal+=pot2;
			pot2*=2;
		}else{
			pot2*=2;
		}	
	}
	printf("O numero em decimal e : %d", decimal);
	
}
