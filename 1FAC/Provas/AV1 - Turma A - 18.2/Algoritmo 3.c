/*Desenvolver um programa que permane�a lendo valores at� que o n�mero 0 seja fornecido. A sua
execu��o deve exibir, para cada n�mero digitado (excluindo o 0), o n�mero de vezes que apareceu, em
sequ�ncia, como ilustrado no exemplo abaixo:
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
