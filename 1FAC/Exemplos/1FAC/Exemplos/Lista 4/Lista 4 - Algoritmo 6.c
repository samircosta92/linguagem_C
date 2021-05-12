/* Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,8,64,1024,...*/

#include<stdio.h>
int main(){
	int i,pot=1,N,num=1;
	printf("Informe o valor de N: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		printf("%d ",pot);
		num=num*2;
		pot=pot*num;
	
	}
}


/* 
#include<stdio.h>
int main(){
	int i=1,pot=1,N,num=1;
	printf("Informe o valor de N: ");
	scanf("%d",&N);
	while(i<=N)
	{
	
	printf("%d",pot);
	num=num*2;
	pot=pot*num;
	i++
	}
}
*/

