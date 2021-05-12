/* Lista 4 - Algoritmo 4: Implementar um programa que exiba os N
primeiros termos de uma PA (Progressão Aritmética) com primeiro termo a1 e razão r.*/

#include<stdio.h>
int main(){
	int r,a1,N,i,termo;
	printf("Informe o primeiro termo: ");
	scanf("%d",&a1);
	printf("Informe a quantidade de termos: ");
	scanf("%d",&N);
	printf("Informe a razao: ");
	scanf("%d",&r);
	termo=a1;
	for(i=1;i<=N;i++)
	{
		printf("%d ",termo);
		termo=termo+r;	
	}
}

/* #include<stdio.h>
int main(){
	int r,a1,N,i;
	printf("Informe o primeiro termo: ");
	scanf("%d",&a1);
	printf("Informe a quantidade de termos: ");
	scanf("%d",&N);
	printf("Informe a razao: ");
	scanf("%d",&r);
	i=a1;
	while(i<=(a1+(N-1)*r))
	{
		printf("%d ",i);
		i=r+i;
	}
}*/

