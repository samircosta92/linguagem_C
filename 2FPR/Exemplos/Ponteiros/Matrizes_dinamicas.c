#include<stdio.h>
#include<stdlib.h>

void main()
{
	float **m;
	int l,c;
	int i;
	printf("Entre com a quantidade de linhas e colunas:");
	scanf("%d %d",&l,&c);
	
	
	m = (float**)malloc(l*sizeof(float*));
	//alocando a matriz dinamicamente
	for(i=0;i<l;i++)
	{
		m[i]= (float*)malloc(c*sizeof(float));
	}
	

	


}
