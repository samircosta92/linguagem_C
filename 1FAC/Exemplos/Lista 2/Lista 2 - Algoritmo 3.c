/* Algoritmo 3 - Lista 2 
Fa�a um algoritmo que permita ao lojista informar o pre�o do
produto e receber as seguintes informa��es*/

#include<stdio.h>
int main(){
//Entrada de vari�veis
float P, AVISTA, PARC_SJUROS, PARC_CJUROS;
printf("Informe o valor do produto: ");
scanf("%f",&P);
AVISTA=0.90*P;
PARC_SJUROS=P/5;
PARC_CJUROS=(1.20*P)/10;
printf("O valor a vista sera: %.2f\n",AVISTA);
printf("A parela sem juros sera: %.2f\n",PARC_SJUROS);
printf("A parcela com juros sera: %.2f\n",PARC_CJUROS);
}
