/* Algoritmo 4 - Lista 1 
Desenvolver um algoritmo que calcule o crédito especial de acordo com o saldo médio*/

#include<stdio.h>
int main(){
//Entrada de variáveis
float SM;
printf("Informe o saldo medio: ");
scanf("%f",&SM);
//Verificação das condições
if (SM<1000)
	{
	printf("Nenhum credito");
	}
else{
if (SM<1500)
	{
	printf("O credito sera %.2f\n", (20*SM)/100);
	}
else{
if (SM<2500)
	{
	printf("O credito sera %.2f\n", (30*SM)/100);
	}
else
	{
	printf("O credito sera %.2f\n", (40*SM)/100);
	}
}
	}		
}
