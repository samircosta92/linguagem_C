#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int mat[15][20],i,j,linha,num;
	printf("Informe a linha a ser verificada: ");
	scanf("%d",&linha);
	printf("Informe o numero a ser verificado: ");
	scanf("%d",&num);
	
	for(i=0;i<15;i++)
	{
		for(j=0;j<20;j++)
		{
			mat[i][j]=rand()%10;
		}
	}
	
	for(i=0;i<15;i++)
	{
		for(j=0;j<20;j++)
		{
			printf("%d  ",mat[i][j]);
		}
		printf("\n");
	}
	verificar(mat,15,20,linha,num);
	
	
}

verificar(int M[15][20],int l,int c,int linha,int num)
{
	int i,j,cont=0;
	
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==linha)
			{
				if(M[i][j]==num)
				{
					cont++;
				}
			}
		}
	}

	
	if(cont!=0)
	{
		printf("O valor %d se econtra na linha %d da matriz",num,linha);
	}
	else
	{
		printf("O valor %d não se econtra na linha %d da matriz",num,linha);
	}
	

}
