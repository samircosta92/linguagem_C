
/* Elabore um programa que calcule a m�dia ponderada de n elementos.
Observa��o: na m�dia ponderada, cada elemento possui um peso que representa a
sua contribui��o no c�lculo da m�dia final.*/

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
