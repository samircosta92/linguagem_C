/*Implementar um programa no qual o usu�rio informa um n�mero e verifica-se se6
ele � um n�mero triangular. Obs.: Um n�mero � triangular quando ele
for resultado do produto de tr�s n�meros consecutivos.
Exemplo: 24 = 2 x 3 x 4.*/

#include<stdio.h>
int main(){
	int N,i=1,Y;
	printf("Informe o numero: ");
	scanf("%d",&N);
	Y=i*(i+1)*(i+2);
	while(Y<N)
	{
		i++;
		Y=i*(i+1)*(i+2);
		
	}
	
	if(N==Y)
		{
			printf("O numero e triangular");
		}
		else
		{ 
			printf("O numero nao e triangular");
		}
}
