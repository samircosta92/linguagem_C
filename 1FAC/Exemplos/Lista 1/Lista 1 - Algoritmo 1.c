/* Algoritmo 1 - Lista 1 
Desenvolver um algoritmo que calcule o custo ao consumidor de determinado carro*/

#include<stdio.h>
int main(){
//Entrada de variáveis
float CF, PD, PI, CC;
//Entrada e leitura de dados
printf("Digite o custo de fabrica: ");
scanf("%f",&CF);
printf("Digite a porcentagem do distribuidor: ");
scanf("%f",&PD);
printf("Digite a porcentagem de impostos: ");
scanf("%f",&PI);
//Cálculo do custo ao consumidor
CC= CF + PD*CF/100 + PI*CF/100;
printf("O custo ao consumidor sera: %.2f\n",CC);
}
