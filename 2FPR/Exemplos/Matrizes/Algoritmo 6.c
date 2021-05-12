#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void totalanual(int M[12][10], int l, int c);
void totalmes(int M[12][10], int l, int c,int mes);
void totalfuncionario(int M[12][10], int l, int c,int func);
void maiormes(int M[12][10], int l, int c);
void menorfunc(int M[12][10], int l, int c);



void main()
{
	int  mat[12][10],i,j,mes,func;
	srand(time(NULL));
	printf("Informe o mes para analisar de 1-12: ");
	scanf("%d",&mes);
	printf("Informe o funcionario para verificar de 1-10: ");
	scanf("%d",&func);
	for(i=0;i<12;i++)
	{
		for(j=0;j<10;j++)
		{
			mat[i][j] = rand()%10;
		}
	}
	
	for(i=0;i<12;i++)
	{
		for(j=0;j<10;j++)
		{
		printf("%d  ",mat[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");	
	totalanual(mat,12,10);
	totalmes(mat,12,10,mes);
	totalfuncionario(mat,12,10,func);	
	maiormes(mat,12,10);
	menorfunc(mat,12,10);
}

void totalanual(int M[12][10], int l, int c)
{
	int i,j,soma=0;
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			soma+=M[i][j];
		}
	}
	printf("O total de vendas no ano foi %d\n",soma);
}

void totalmes(int M[12][10], int l, int c,int mes)
{
	int i,j,soma=0;
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==(mes-1))
			{
				soma+=M[i][j];
			}
		}
	}
	printf("O total de vendas no mes %d foi %d\n",mes,soma);
}

void totalfuncionario(int M[12][10], int l, int c,int func)
{
	int i,j,soma=0;
	for(i=0;i<l;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j==(func-1))
			{
				soma+=M[i][j];
			}
		}
	}
	printf("O total de vendas do funcionario %d foi %d\n",func,soma);
}

void maiormes(int M[12][10], int l, int c)
{
	int i,j,soma=0,maior=-999,mes;
	for(i=0;i<l;i++)
	{
		soma=0;
		for(j=0;j<c;j++)
		{
			soma+=M[i][j];
			
		}
		if(soma>maior)
		{
			maior=soma;
			mes=i;
		}	
	}
	printf("O mes com maior numero de vendas foi %d \n",(mes+1));
}

void menorfunc(int M[12][10], int l, int c)
{
	int i,j,soma=0,menor=9999,func;
	for(i=0;i<c;i++)
	{
		soma=0;
		for(j=0;j<l;j++)
		{
			soma+=M[j][i];
			
		}
		if(soma<menor)
		{
			menor=soma;
			func=i;
		}	
	}
	printf("O funcionario com menor numero de vendas foi %d \n",(func+1));
}


