/*Fa�a um programa que leia um n�mero inteiro x e, em seguida, solicite
ao usu�rio outros 50 valores inteiros. Ao final, o programa deve exibir o total de
m�ltiplos de x fornecidos.*/
#include<stdio.h>
#define QUANT 5
int main(){
	int X, N, i, total=0;
	printf("Informe um valor inteiro: ");
	scanf("%d",&X);
	for(i=1;i<=QUANT;i++)
	{
		printf("Informe outro valor inteiro: ");
		scanf("%d",&N);
		if(N%X==0)
		{
			total++;
		}
	}
	printf("O total de multiplos fornecidos e: %d",total);

}
