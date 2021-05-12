/*QUESTÃO 05: Faça um programa que exiba
na tela os 50 primeiros termos da seguinte
série: 1, -2, 3, -4, 5, -6 ...*/

#include<stdio.h>
int main(){
	int i,j;
	for(i=1,j=-2;j>=-50;i=i+2,j=j-2)
	{
		printf("%d, %d, ",i,j);	
	}
}
