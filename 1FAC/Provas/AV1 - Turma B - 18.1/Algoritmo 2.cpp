/*Fa�a um programa que, dadas duas datas (cada qual
com dia, m�s e ano) fornecidas pelo usu�rio, determine
qual delas � a mais recente.*/
#include<stdio.h>
int main(){
	int d1,d2,m1,m2,a1,a2;
	printf("Informe o dia da primeira data: ");
	scanf("%d",&d1);
	printf("Informe o mes da primeira data: ");
	scanf("%d",&m1);
	printf("Informe o ano da primeira data: ");
	scanf("%d",&a1);
	printf("Informe o dia da segunda data: ");
	scanf("%d",&d2);
	printf("Informe o mes da segunda data: ");
	scanf("%d",&m2);
	printf("Informe o ano da primeira data: ");
	scanf("%d",&a2);
	if(a1>a2)
	{
		printf("A primeira data e mais recente");
	}
	else
	if(a1<a2)
	{
		printf("A segunda data e mais recente");
	}
	else
	{
		if(m1>m2)
		{
			printf("A primeira data e mais recente");	
		}
		else
		if(m1<m2)
		{
			printf("A segunda data e mais recente");	
		}
		else
		{
		if(d1>d2)
		{
			printf("A primeira data e mais recente");	
		}
		else
		if(d1<d2)
		{
			printf("A segunda data e mais recente");	
		}	
		}
		
	}
}
