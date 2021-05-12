
/* Elabore um programa que calcule a média ponderada de n elementos.
Observação: na média ponderada, cada elemento possui um peso que representa a
sua contribuição no cálculo da média final.*/

#include<stdio.h>
int main(){
	int i,N;
	float valor, numerador=0, denominador=0, mediaP, peso;
	printf("Determine a quantidade de valores: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		printf("Escreva um valor: ");
		scanf("%f",&valor);
		printf("Determine o peso: ");
		scanf("%f",&peso);
		numerador+=valor*peso;
		denominador+=peso;
	}
	mediaP=numerador/denominador;
	printf("A media ponderada sera: %.2f",mediaP);
}
