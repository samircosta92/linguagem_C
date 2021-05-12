/*QUESTÃO 01: Faça um programa que leia um número inteiro positivo N e exiba todos
os múltiplos de Y inferiores a N, onde N e Y são fornecidos pelo usuário*/

#include<stdio.h>
int main(){
	int n,y,i;
	printf("Informe o valor de n: ");
	scanf("%d",&n);
	printf("Informe o valor de y: ");
	scanf("%d",&y);
	for(i=0;i<n;i=i+y)
	{
		printf("%d ",i);
		
	}
}
