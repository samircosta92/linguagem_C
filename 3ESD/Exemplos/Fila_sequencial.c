#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 10



void exibir(int fila[],int primeiro);
void inserir(int fila[],int tam,int *primeiro,int *ultimo);
void remover(int fila[],int *primeiro);

void main(){
	
	int fila[TAM];
	int opcao,primeiro=0, ultimo=0;


	do
	{

		printf ("(1) Imprimir\n(2) Inserir\n(3) Remover\n");
		printf ("Entre com a sua opcao: ");
		scanf ("%d", &opcao);
		
		switch (opcao)
		{
		
			case 1: exibir(fila,primeiro);
					break;

		
			case 2: inserir(fila,TAM,&primeiro,&ultimo);
					break;

			case 3: remover(fila,&primeiro);
					break;

			default: printf ("Opcao invalida! Tente novamente.\n");
		}

		system ("pause");
	}
	while (opcao != 4);
}

	

void exibir(int fila[],int primeiro)
{
	int i;
	
	if(primeiro==0)
	{
		printf("Lista vazia!\n");
	}
	else
	{
	
		for(i=0;i<primeiro;i++)
		{

			printf("%d ",fila[i]);
		
		}
	
	}
}

void inserir(int fila[],int tam,int *primeiro,int *ultimo)
{

	int i;
	
	if((*primeiro==tam))
	{
		printf("A lista ja esta cheia!\n");
	}
	else
	{
		(*primeiro)++;
		
		for(i=(*primeiro);i>0;i--)
		{
			fila[i]= fila[i-1];
		}
		
		printf("Digite a matricula do aluno: ");
		scanf("%d",&fila[*ultimo]);
	}
	
}

void remover(int fila[],int *primeiro)
{
	if((*primeiro)==0)
	{
		printf("Nao e possivel remover! Lista vazia!\n");
	}
	else
	{
		(*primeiro)--;
	}
}

