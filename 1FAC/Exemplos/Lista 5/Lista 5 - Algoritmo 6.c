/*Faça um programa que leia 200 números inteiros. Ao final, exibir:
a) O maior número fornecido, de ordem par (isto é, o maior dentre o
segundo, quarto, sexto, oitavo, etc valores fornecidos).
b) A média dos valores pares.*/

#include<stdio.h>
#define QUANT 10
int main(){
	int i, num, maior=-9999, somaP=0, contP=0;
	float mediaP;
	for(i=1;i<=QUANT;i++)
	{
		printf("Escreva um numero: ");
		scanf("%d",&num);
		if(i%2==0)
		{
			if(num>maior)
			{
			maior=num;
			}
		}
		if(num%2==0)
		{
			somaP+=num;
			contP++;
		}
	}
	mediaP=(float)somaP/contP;
	printf("O maior numero fornecido de ordem par sera: %d\n",maior);
	printf("A media dos valores pares sera: %.2f\n",mediaP);
}
