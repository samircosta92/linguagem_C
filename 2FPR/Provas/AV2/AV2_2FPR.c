#include<stdio.h>
#include<stdlib.h>

typedef struct no{
	int chave;
	struct no *prox;
}Tno;

typedef struct vet{
	int quant;
	struct no *lista;
}Tvet;


int quant_numeros(char nome[]);
void preencher_valores(int valores[], char nome[]);
Tno* inserir_final(Tno **p, int num);
void exibir(Tno *p);

void main()
{	
	
	Tvet vetor[10];
	int i,j,num,quant;
	char nome[30];
	Tno *inicio;
	
	//Percorrendo, zerando o vetor.quant e deixando *lista em NULL
	for(i=0;i<10;i++)
	{
		vetor[i].quant=0;
		vetor[i].lista=NULL;
	}
	
	//recebendo nome do arquivo de entrada pelo usuário
	printf("Informe o nome do arquivo de entrada: ");
	gets(nome);
	
	//definir o tamanho do quant(N do arquivo) e preenchendo vet auxiliar com os valores do arquivo
	quant = quant_numeros(nome);
	int valores[quant];
	preencher_valores(valores,nome);
	
	
	for(i=0;i<quant;i++)
	{
		
		//pegando os valores do arquivo no vet auxiliar
		num = valores[i];
		printf("___________________________________________________________________________");
		printf("\nApos inserir o %d: \n\n",valores[i]);
		
		//percorrendo o vetor principal
		for(j=0;j<10;j++)
		{
			printf("\n[%d]\t",j);
			
			if(j==0)
			{
			
				//verifica se é primo e maior que 10
				if((num>10)&&(verificaPrimo(num)==1)){
				inicio = vetor[j].lista;
				inserir_final(&inicio,num);			
				vetor[j].quant++;
				vetor[j].lista = inicio;
				
				printf("(quantidade: %d)\t",vetor[j].quant);
				printf("(lista: %p)\n",vetor[j].lista);	
				exibir(inicio);
				}
				else
				{
					printf("(quantidade: %d)\t",vetor[j].quant);
					printf("(lista: %p)\n",vetor[j].lista);
					exibir(vetor[j].lista);
				}
					
			}
			else
			{
				if(num%j==0)
				{
				
				inicio = vetor[j].lista;
				inserir_final(&inicio,num);
				vetor[j].quant++;
				vetor[j].lista = inicio;
				
				printf("(quantidade: %d)\t",vetor[j].quant);
				printf("(lista: %p)\n",vetor[j].lista);
				exibir(inicio);
				}
				else
				{
					printf("(quantidade: %d)\t",vetor[j].quant);
					printf("(lista: %p)\n",vetor[j].lista);
					exibir(vetor[j].lista);
				}
					
			}
		}		
	}	
}	

int quant_numeros(char nome[])
{
	int num;
	FILE *pont;
	
	
	pont=fopen(nome,"r");	
	fscanf(pont,"%d",&num);
	fclose(pont);
	

	return(num);
	
}

void preencher_valores(int valores[], char nome[])
{
	int n,i;
	FILE *pontA;
	pontA=fopen(nome,"r");
	fscanf(pontA,"%d",&n);
	
	for(i=0;i<n;i++)
	{
		fscanf(pontA,"%d",&valores[i]);		
	}
	
	fclose(pontA);
	
}

Tno* inserir_final(Tno **p, int num)
{
	
	Tno *aux1, *aux2 = NULL;
	
	
	aux1 = malloc(sizeof(Tno));
	aux1->chave = num;
	aux1->prox = NULL;
	
	if(*p == NULL)
	{
		*p=aux1;
	}
	else
	{

		aux2=*p;
		
		while(aux2->prox != NULL)
		{
			aux2 = aux2->prox;	
			
		}
		aux2->prox = aux1;
	}
	return(*p);
}

int verificaPrimo(int num)
{
	int i;
	
	
	for(i=2;i<num;i++)
	{
		
		if(num%i==0)
		{
			return 0;
		}
	}
	return 1;
}

void exibir(Tno *p)
{
	Tno *aux = p;
	
	if(!p)
	{
		printf("\n");
	}
	else
	{
		
	
		while(aux)
		{
			printf("(endereco no: %p)\t(chave: %d)\t(prox: %p)\n",aux,aux->chave,aux->prox);
			aux=aux->prox;
		}
		printf("\n");
	}
}
