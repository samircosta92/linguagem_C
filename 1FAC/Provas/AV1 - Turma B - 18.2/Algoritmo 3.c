/*Implementar um programa que leia diversos n�meros inteiros positivos at� que a terceira pot�ncia de 2 seja
informada pelo usu�rio. Ao final, devem ser exibidos:
a. Total de valores digitados;
b. M�dia dos valores entre a primeira e segunda
pot�ncias de 2.*/

#include<stdio.h>
void main(){
int num, aux, soma=0, cont=0, cont2=0, somaN=0;	
float media;
	do
	{
		printf("Digite um numero inteiro positivo: ");
		scanf("%d",&num);
		if(num<0)
		{
			printf("ERRO\n");
			cont2--;
		}
		if(num==2)
		{
			while(aux!=4)
			{
				printf("Digite um numero inteiro positivo: ");
				scanf("%d",&aux);
				if(aux<0)
				{
					printf("ERRO\n");
					cont--;
					somaN+=aux;
				}	
				cont++;
				soma+=aux;
			}
				
		}
		cont2++;
	}while(num!=8);
	printf("%d\n",somaN);
	printf("%d\n",soma);
	media=(soma-4-somaN)/(cont-1);
	printf("O total de valores digitados e: %d ",cont+cont2);
	printf("A media dos valores entre a primeira e segunda potencias de 2: %.2f ",media);
}
