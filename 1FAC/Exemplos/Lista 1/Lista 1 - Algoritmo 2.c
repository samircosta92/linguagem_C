/* Algoritmo 2 - Lista 1 
Desenvolver um algoritmo para classificar um nadador de acordo com sua categoria*/

#include<stdio.h>
int main(){
//Entrada de variáveis
int IDADE;
//Entrada e leitura de dados
printf("Informe a idade: ");
scanf("%d",&IDADE);
//Verificação das condições
if (IDADE>=0 && IDADE<=4)
	{
		printf("Infantil A\n");
	}
else{
	if (IDADE<=7)
		{	 
		printf("Infantil B\n");
		}
	
else{
	
	if (IDADE<=10)
		{	 
		printf("Infantil C\n");
		}
	
else{
	
	if (IDADE<=13)
		{	 
		printf("Juvenil A\n");
		}
	
else{
	
	if (IDADE<=17)
		{	 
		printf("Juvenial B\n");
		}
	
else
		{
		printf("Adulto\n");
		}	
}
	}
		}
			}
}

