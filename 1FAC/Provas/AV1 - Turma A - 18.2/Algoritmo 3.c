/*Desenvolver um programa que permaneça lendo valores até que o número 0 seja fornecido. A sua
execução deve exibir, para cada número digitado (excluindo o 0), o número de vezes que apareceu, em
sequência, como ilustrado no exemplo abaixo:
1 1 6 6 6 2 1 1 1 4 4 3 3 3 3 2 2 0*/

#include<stdio.h>
void main(){
	int cont=0,num,aux;
	do
	{
		printf("Digite um numero: ");
		scanf("%d",&num);
		if(cont==0)
		{
			aux=num;
		}
		if(aux==num)
		{
			cont++;
		}
		if(aux!=num)
		{
			
			printf("%d - %d vez(es)\n",aux,cont);
			cont=1;
			aux=num;
		}
	}while(num!=0);
}
