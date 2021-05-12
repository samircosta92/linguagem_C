#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 5

void imprimir(int pilha[], int topo);
void inserir(int pilha[], int tam, int *topo);
void remover(int pilha[],int *topo);


void main(){

	int pilha[TAM];
	int i,opcao,topo=0;
    srand(time(NULL));
    
    
    
   	for(i=0;i<TAM;i++)
	{
		topo++;
		pilha[i] = rand() % 10;
		
		
	}
	
	
	do
	{

		opcao = menu ();
		switch (opcao)
		{
		
			case 1: imprimir(pilha,topo);
					break;

		
			case 2: inserir(pilha,TAM,&topo);
					break;

			case 3: remover(pilha,&topo);
					break;

			default: printf ("Opcao invalida! Tente novamente.\n");
		}

		system ("pause");
	}
	while (opcao != 4);
}



void imprimir(int pilha[], int topo)
{
	int i;
	
	printf("Lista: ");
	for(i=0;i<topo;i++)
	{
		
		printf("%d ",pilha[i]);
		
	}
}

void inserir(int pilha[], int tam, int *topo)
{
	int i;
	
		
	if((*topo) == tam)
	{
		printf("Lista cheia!\n");
	}
	else
	{
		(*topo)++;
		pilha[(*topo)] = rand() % 10;
	
	}
	
}

void remover(int pilha[], int *topo)
{
	if((*topo) == 0)
	{
		printf("A pilha já está vazia");
	}
	else
	{
		printf("Valor removido = %d\n",pilha[(*topo-1)]);
		(*topo)--;
		
	}
}

int menu ()
{
	int op;

	printf ("(1) Imprimir\n(2) Inserir\n(3) Remover\n");
	printf ("Entre com a sua opcao: ");
	scanf ("%d", &op);

	return op;
}
