/*Implementar uma função que, dado um
número inteiro, calcule (e retorne) a soma e a
média de seus divisores.*/

#include<stdio.h>
void somamedia(int n,int *soma,float *media)
{
	int i,cont=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cont++;
			*soma+=i;
		}
		
	}
	*media=(float)*soma/cont;
}

void main()
{
	int num,sm;
	float media;
	printf("Informe o numero: ");
	scanf("%d",&num);
	somamedia(num,&sm,&media);
	printf("A soma sera %d e a media %f",sm,media);
}
