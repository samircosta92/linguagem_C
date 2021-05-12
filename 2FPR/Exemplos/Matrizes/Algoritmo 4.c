#include<stdio.h>

void simetrica(int M[][3], int l,int c);
void main()
{
	int matriz[3][3]={{3,7,6},{5,2,4},{6,4,7}};

	simetrica(matriz,3,3);
}

void simetrica(int M[][3], int l,int c)
{
	int i,j,cont=0;
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			if(M[i][j]==M[j][i])
			{
				cont++;
			}
		}
	}
	if(cont==(l*c))
	{
		printf("A matriz e simetrica");
	}
	else
	{
		printf("A matriz nao e simetrica");
	}
}
