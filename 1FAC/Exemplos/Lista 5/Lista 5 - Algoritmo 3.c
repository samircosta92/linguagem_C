/*Implementar um programa que calcule o valor de baseexpoente, onde
base e expoente são números inteiros dados pelo usuário.*/

#include<stdio.h>
int main(){
	int i,base, exp, pot=1;
	printf("Informe o valor da base: ");
	scanf("%d",&base);
	printf("Informe o valor do expoente ");
	scanf("%d",&exp);
	for(i=1;i<=exp;i++)
	{
		pot=pot*base;
	}
	printf("O valor de %d elevado a %d e %d",base,exp,pot);
	
	
}
