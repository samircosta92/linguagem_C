/* Algoritmo 4 - Lista 2 
Desenvolva um algoritmo que calcule o consumo de combustível de um 
automóvel em determinada viagem.*/

#include<stdio.h>
int main(){
//Entrada de variáveis
float PER, P_L, KM_L;
printf("Informe o percurso: ");
scanf("%f",&PER);
printf("Informe a quilometragem por litro: ");
scanf("%f",&KM_L);
printf("Informe o preco do litro: ");
scanf("%f",&P_L);
printf("O custo total sera: %.2f",(PER/KM_L)*P_L);
}
