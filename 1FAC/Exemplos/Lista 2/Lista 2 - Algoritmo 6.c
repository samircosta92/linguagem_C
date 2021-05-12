/* Algoritmo 6 - Lista 2 
Escrever um algoritmo que, dados um número inteiro i e três valores a, b e
c, apresente os 3 números na ordem definida por i.*/

#include<stdio.h>
int main(){
//Entrada de variáveis
int A,B,C,i;
printf("Escolha uma opcao para i entre 1,2 ou 3: ");
scanf("%d",&i);
printf("Informe o valor de A: ");
scanf("%d",&A);
printf("Informe o valor de B: ");
scanf("%d",&B);
printf("Informe o valor de C: ");
scanf("%d",&C);
if (i==1)
	if (A>B && A>C)
		if (B>C)
		{
			printf("%d,%d,%d",C,B,A);
		}
		else
		{
			printf("%d,%d,%d",B,C,A);
		}
	else
	if (B>A && B>C)
		if (A>C)
		{
			printf("%d,%d,%d",C,A,B);
		}
		else
		{
			printf("%d,%d,%d",A,C,B);
		}
	else
	if (A>B)
	{
		printf("%d,%d,%d",B,A,C);
	}
	else
	{
		printf("%d,%d,%d",A,B,C);
	}
else
if(i==2)
	if (A>B && A>C)
		if (B>C)
		{
			printf("%d,%d,%d",A,B,C);
		}
		else
		{
			printf("%d,%d,%d",A,C,B);
		}
	else
	if (B>A && B>C)
		if (A>C)
		{
			printf("%d,%d,%d",B,A,C);
		}
		else
		{
			printf("%d,%d,%d",B,C,A);
		}
	else
	if (A>B)
	{
		printf("%d,%d,%d",C,A,B);
	}
	else
	{
		printf("%d,%d,%d",C,B,A);
	}
else
if (A>B && A>C)
{
	printf("%d,%d,%d",B,A,C);
}
else
if (B>A && B>C)
{
	printf("%d,%d,%d");
}
else
{
	printf("%d,%d,%d",A,C,B);
}
}

	
	
