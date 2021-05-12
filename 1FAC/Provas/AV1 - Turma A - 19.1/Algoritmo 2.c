/*Questão 02-av1-2019-1 [2,5 pontos]:*/

#include<stdio.h>
int main()
{
  
int n,num,i=1,cont=0;

printf("Informe o numero: ");
scanf("%d",&n);

while(i<=n)
{
	n=n-i;
	i+=2;
	cont++;
}
printf("A raiz aproximada sera %d",cont);
}




