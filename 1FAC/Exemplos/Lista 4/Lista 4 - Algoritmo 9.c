/*Escrever um programa que encontre o quinto número maior que 1000, cuja
divisão por 11 tenha resto 5.*/

#include<stdio.h>
int main(){
int i=1000,cont=0;
while(cont<5)
{
	i++;
	if(i%11==5)
	{
		cont++;
	}
	
}
printf("%d",i);
}
