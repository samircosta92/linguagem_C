/*Questão 03 [2,0 pontos]:
Faça um programa que leia um número inteiro n e
determine a quantidade de algarismos existentes em n.*/
#include<stdio.h>

int main()
{
	int i, num;
	printf("Digite um numero inteiro : \n");
	scanf("%d", &num);
	if(num==0)
	{
		printf("O numero tem 1 algarismo");
	}else{
	for(i=0;num>0;i++)
	{
		num=num/10;
	}
	printf("o numero tem %d algarismos ",i);
	
	}	
}
