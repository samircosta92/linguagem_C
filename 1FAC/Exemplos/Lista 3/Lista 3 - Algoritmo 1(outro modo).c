/*QUEST�O 01: Fa�a um programa que leia um n�mero inteiro positivo N e exiba todos
os m�ltiplos de Y inferiores a N, onde N e Y s�o fornecidos pelo usu�rio*/

#include<stdio.h>
int main()
{
	int n,y,i;
	printf("Informe o valor de N ");
	scanf("%d",&n);
	printf("Informe o valor de y");
	scanf("%d",&y);
	for(i=0;i<n;i++)
	{
		if(i%y==0)
		{
			printf("%d\n",i);
		}
	}

}
