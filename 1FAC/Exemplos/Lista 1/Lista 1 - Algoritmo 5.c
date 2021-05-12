/* Algoritmo 5 - Lista 1 
Desenvolver um algoritmo que calcule o menor número possível de
notas/moedas (100, 50, 20, 10, 5, 2 e 1) em que
o valor pode ser decomposto.*/

#include<stdio.h>
int main(){
//Entrada de variáveis
int Q, N100, N50, N20, N10, N5, N2, N1, R1, R2, R3, R4, R5, R6, SOMA;
printf("Informe o valor: ");
scanf("%d",&Q);
//Cálculos das notas
N100=Q/100;
R1=Q%100;
N50=R1/50;
R2=R1%50;
N20=R2/20;
R3=R2%20;
N10=R3/10;
R4=R3%10;
N5=R4/5;
R5=R4%5;
N2=R5/2;
R6=R5%2;
R6=N1;
SOMA=N100+N50+N20+N10+N5+N2+N1;
printf("Numero de notas sera %d\n",SOMA);
}
