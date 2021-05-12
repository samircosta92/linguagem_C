/*QUESTÃO 03: Joãozinho investiu Q reais em uma aplicação com rendimento fixo de
R% ao mês. Pede-se a implementação de um programa que calcule o valor (e exibao) disponível na conta de Joãozinho após A
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

