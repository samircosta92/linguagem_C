/*QUEST�O 04: Fa�a um programa que leia 5 n�meros reais. Ao final, devem ser
exibidas as seguintes informa��es:
a) A quantidade de valores negativos
digitados;
b) A m�dia dos valores positivos.*/

#include<stdio.h>
#define QUANT 5
int main(){
	int i,contNeg=0, contPos=0;
	float num,media,soma=0;
	for(i=1;i<=QUANT;i++)
	{
		printf("Digite o numero: ");
		scanf("%f",&num);
		if(num<0)
		{
			contNeg++;
		}
		else{
			if(num>0)
			contPos++;
			soma=soma+num;
			
			}
		
		
	}
	media=soma/contPos;
	printf("Quantidade de negativos: %d\n",contNeg);
	printf("A media dos positivos sera: %.2f",media);
	
}
