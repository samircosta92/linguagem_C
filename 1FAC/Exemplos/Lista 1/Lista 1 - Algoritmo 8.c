/* Algoritmo 8 - Lista 1 
Faça um algoritmo para calcular a conta final de um hóspede de um hotel,*/

#include<stdio.h>
int main(){
//Entrada de variáveis
char TIPO;
int DIARIA, TOTDIARIA;
float CI, SUB, TAXA, TOTAL;
//Entrada e leitura de dados
printf("Informe o tipo de apartamento entre A, B, C ou D: ");
scanf("%c",&TIPO);
printf("Informe o numero de diarias: ");
scanf("%d",&DIARIA);
printf("Informe o consumo interno: ");
scanf("%f",&CI);
//Verificação das condições
if (TIPO=='A')
{
	TOTDIARIA=350*DIARIA;
	SUB=TOTDIARIA+CI;
	TAXA=SUB*10/100;
	TOTAL=1.10*SUB;
}
else{
if (TIPO=='B')
{
	TOTDIARIA=275*DIARIA;
	SUB=TOTDIARIA+CI;
	TAXA=SUB*10/100;
	TOTAL=1.10*SUB;
}
else{
if (TIPO=='C')
{
	TOTDIARIA=200*DIARIA;
	SUB=TOTDIARIA+CI;
	TAXA=SUB*10/100;
	TOTAL=1.10*SUB;
}
else
{
	TOTDIARIA=150*DIARIA;
	SUB=TOTDIARIA+CI;
	TAXA=SUB*10/100;
	TOTAL=1.10*SUB;
}
printf("Tipo de apartamento: %c\n",TIPO);
printf("Valor das diarias sera: %d\n",TOTDIARIA);
printf("O consumo interno sera: %.2f\n",CI);
printf("O subtotal sera: %.2f\n",SUB);
printf("A taxa de servico sera: %.2f\n",TAXA);
printf("O total geral sera: %.2f\n",TOTAL);
}
	}
}
