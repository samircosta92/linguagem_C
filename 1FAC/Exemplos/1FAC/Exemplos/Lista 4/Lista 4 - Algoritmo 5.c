/* Lista 4 - Algoritmo 5: Criar um programa que exiba os N
primeiros termos da seguinte série:
1,2,4,8,16,32,...*/

#include<stdio.h>
int main(){
	int i,pot=1,N;
	printf("Informe a quantidade de termos: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		printf("%d ",pot);
		pot=pot*2;
		
	}


}
/* #include<stdio.h>
int main(){
	int i=1,pot=1,N;
	printf("Informe a quantidade de termos: ");
	scanf("%d",&N);
	while(i<=N)
	{
		i++;
		printf("%d ", pot);
		pot=pot*2;
		
	}
}*/

