/*Implementar um programa no qual o usuário informa um número e verifica-se se6
ele é um número triangular. Obs.: Um número é triangular quando ele
for resultado do produto de três números consecutivos.
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
