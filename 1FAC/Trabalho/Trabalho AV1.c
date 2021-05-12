#include<stdio.h>
#define CAP 10 

int InserirValor(int vetor[],int *quant,int num);
int RemoverValor(int vetor[],int *quant,int num);
int AlterarValor(int vetor[],int *quant,int num,int num2);
void ExibirLista(int vetor[],int quant);
int BuscarValor(int vetor[],int quant,int num);

void main()
{
	
	int opcao;
	int resp;
	int Vetor[CAP];
	int quant=0,num,num2;
	
	
	do{
		printf("O que deseja realizar ?\n");
		printf("1) Inserir um novo numero\n");
		printf("2) Remover determinado numero\n");
		printf("3) Alterar um numero por outro\n");
		printf("4) Busca de determinado numero\n");
		printf("5) Exibicao de todos os elementos da lista\n");
		printf("6) Sair\n");
		
		scanf("%d",&opcao);
		
		switch(opcao)
		{
			case 1:	
				printf("Digite o numero a ser inserido : ");			
				scanf("%d",&num);
				
				resp=InserirValor(Vetor,&quant,num);
				
				if(resp==0)
				{
					printf("A lista esta cheia\n");
				}else{
					printf("O numero foi inserido com sucesso\n");
				}
				break;
			
			case 2: 
				printf("Digite o numero a ser removido");
				scanf("%d",&num);
				resp=RemoverValor(Vetor,&quant,num);
				
				if(resp==0)
				{
					printf("O numero nao existe na lista \n");
				}else{
					printf("O numero foi removido com sucesso \n");
				}
				break;
				
			case 3: 
				printf("Digite o numero a ser removido : ");			
				scanf("%d",&num);
				
				printf("Digite o numero a ser inserido : ");			
				scanf("%d",&num2);
				
				resp=AlterarValor(Vetor,&quant,num,num2);
				
				if(resp==0)
				{
					printf("O numero nao existe na lista \n");
				}else{
					printf("O numero foi alterado com sucesso \n");
				}
				
				break;
				
			case 4:
				printf("Digite qual valor deseja procurar:");
				scanf("%d",&num);
				
				resp=BuscarValor(Vetor,quant,num);
				if(resp>=0)
				{
					printf("O numero se encontra na posicao %d\n",resp);
				}else{
					printf("O numero nao existe nessa lista\n");
				}
				
				break;
				
			case 5:
				ExibirLista(Vetor,quant);
				break;
			
			case 6:
				printf("Programa encerrado\n");
				break;
			default: 
			
			printf("Insira um numero valido\n");
			
			
		}
	}while(opcao!=6);
		
}


int InserirValor(int vetor[],int *quant,int num)
{
	int i,j=0;
	
	if((*quant)==CAP)
	{
		return 0;
		
	}else{
		if((*quant)==0)
		{
			vetor[0]=num;
			(*quant)++;
			return 1;
		}else{
			for(j=0;j<(*quant);j++)
			{
				if(vetor[j]>num)
				{
					
					for(i=(*quant);i>j;i--)
					{
						vetor[i]=vetor[i-1];
					}
					vetor[j]=num;
					(*quant)++;
					return 1;
			
				}
			}
			vetor[*quant] = num;
			(*quant)++;
			return 1;
			
		}
	}
}
	

int RemoverValor(int vetor[],int *quant,int num)
{
	int cont=0,i,j;
	
	if(*quant==0)
	{
		return 0;
	}else{
		for(i=0;i<*quant;i++)
		{
			if(vetor[i]==num)
			{
				cont++;
			}
		}
		if(cont==0)
		{
			return 0;
		}else{
			
			for(i=0;i<*quant;)
			{
				if(vetor[i]==num)
				{
					for(j=i;j<*quant;j++)
					{
						vetor[j]=vetor[j+1];
						
					}
					(*quant)--;
				}else{
					i++;
				}
				
			}
			
			return cont;
		}		
	}
	
	
}

int AlterarValor(int Vetor[],int *quant,int num,int num2)
{
	int contremocoes=0,i;
	
	if(*quant==0)
	{
		return 0;
	}else{
		contremocoes=RemoverValor(Vetor,quant,num);
		
		if(contremocoes==0)
		{
			return 0;
		}else{
			for(i=0;i<contremocoes;i++)
			{
				InserirValor(Vetor,quant,num2);
			}
		return 1;
		}
	}
}

int BuscarValor(int vetor[],int quant,int num)
{
	int i;
	

	for(i=0;i<quant;i++)
	{
		if(vetor[i]==num)
		{
			return i;
		}
	}

	return -1;
}

void ExibirLista(int Vetor[],int quant)
{
	int i;
	
	if(quant==0)
	{
		printf("A lista esta vazia\n");
	}else{
		for(i=0;i<quant;i++)
		{
			printf("%d ",Vetor[i]);
		}
	printf("\n");
	}
}
