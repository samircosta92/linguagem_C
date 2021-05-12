#include<stdio.h>
#define Q 10

float maior(int tam, float v[], float *maior1, float *maior2)
{
	int i;
	*maior1=v[0];
	for(i=1;i<tam;i++)
	{
		if(v[i]>*maior1)
		{
			*maior1=v[i];
		}
	}
	*maior2=v[0];
	
	for(i=1;i<tam;i++)
	{
		if((v[i]>*maior2)&&(v[i]!=*maior1))
		{
			*maior2=v[i];
		}
	}
}



void main()
{
	int i;
	float v[Q], m1, m2;
	
	
	for(i=0;i<Q;i++)
	{
		printf("Entre com um numero: ");
		scanf("%f",&v[i]);
	}
	
	maior(Q,v,&m1,&m2);
	printf("O maior valor sera %.2f e o segundo maior sera %.2f",m1,m2);
}
	
