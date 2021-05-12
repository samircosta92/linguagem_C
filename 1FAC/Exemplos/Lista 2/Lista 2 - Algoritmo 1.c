/* Algoritmo 1 - Lista 2 
Elabore um algoritmo que, dados o peso e a altura de um adulto, determine a sua condição
de acordo com a tabela abaixo:*/

#include<stdio.h>
int main(){
//Entrada de variáveis
float P, A, IMC;
//Entrada e leitura de dados
printf("Informe o peso: ");
scanf("%f",&P);
printf("Infome a altura: ");
scanf("%f",&A);
IMC=P/(A*A);
//Verificação das condições
if (IMC<18.5)
{
	printf("Abaixo do peso");
}
else{
if (IMC<25.0)
{
	printf("Peso Ideal");
}
else{
if (IMC<30.0)
{
	printf("Sobrepeso");
}
else{
if (IMC<35.0)
{
	printf("Obesidade grau I");
}
else{
if (IMC<40,0)
{
	printf("Obesidade grau II");
}
else
{
	printf("Obesidade grau III");
}
}
	}
		}
			}
}
