/*QUEST�O 03: Jo�ozinho investiu Q reais em uma aplica��o com rendimento fixo de
R% ao m�s. Pede-se a implementa��o de um programa que calcule o valor (e exibao) dispon�vel na conta de Jo�ozinho ap�s A
anos de investimento.*/

#include<stdio.h>
int main(){
	float Q,R;
	int i,A,M;
	printf("Informe a quantia: ");
	scanf("%f",&Q);
	printf("Informe a taxa de rendimento ao mes: ");
	scanf("%f",&R);
	printf("Informe a quantidade de anos: ");
	scanf("%d",&A);
	M=A*12;
	for(i=1;i<=M;i++)
	{
		Q=Q+(Q*(R/100));
	}
	printf("O valor final sera: %.2f",Q);
}

