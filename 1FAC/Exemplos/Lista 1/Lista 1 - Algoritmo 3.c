/* Algoritmo 3 - Lista 1 
Desenvolver um algoritmo que calcule o peso idela de uma pessoa de acordo com o sexo e altura*/

#include<stdio.h>
int main(){
//Entrada de variáveis
float H;
char SEXO;
//Entrada e leitura de dados
printf("Digite M para MASCULINO ou F para FEMININO: ");
scanf("%c",&SEXO);
printf("Informe a altura: ");
scanf("%f",&H);
//Verificação das condições
if (SEXO=='M')
	{
	printf("O peso ideal sera: %.2f\n", (72.7*H)-58);
	}
else
	{
	printf("O peso ideal sera: %.2f\n", (62.1*H)-44.7);
	}
}

