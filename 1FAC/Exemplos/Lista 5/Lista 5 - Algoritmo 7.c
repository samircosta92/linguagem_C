/*Faça um programa que leia 150 números reais e, ao final, exiba:
a) A soma dos 50 primeiros;
b) menor número do 50° ao 100°valores fornecidos;
c) A média entre os últimos 50 valores.*/

#include<stdio.h>
#define QUANT 15
int main(){
	int i, contB=0;
	float num, somaA=0, somaB=0, mediaB, menor=9999; 
	for(i=1;i<=QUANT;i++)
	{
		printf("Informe um numero: ");
		scanf("%f",&num);
		if(i<=5)
		{
			somaA=somaA+num;
		}
		if(i>10)
		{
			somaB=somaB+num;
			contB++;
		}
		if((i>5)&&(i<10))
		{
			if(num<menor)
			{
			menor=num;
			}
		}
	}
	mediaB=somaB/contB;
	printf("A soma dos primeiros valores sera: %.2f\n",somaA);
	printf("O menor numero compreendido entre os valores informados e: %f\n",menor);
	printf("A media dos ultimos valores sera: %.2f\n",mediaB);
}
