/* Algoritmo 4 - Lista 1 
Desenvolver um algoritmo que calcule o cr�dito especial de acordo com o saldo m�dio*/

#include<stdio.h>
int main(){
//Entrada de vari�veis
float SM;
printf("Informe o saldo medio: ");
scanf("%f",&SM);
//Verifica��o das condi��es
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
