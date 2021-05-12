/*Implementar uma função que, dado um vetor A contendo quantA números inteiros, crie um vetor B
com os mesmos valores de A, porém sem repetição. Nota: além da implementação da função, deve ser
apresentada a main chamando-a, com a devida manipulação dos argumentos de entrada e/ou saída.*/
#include<stdio.h>//REMOVER REPETICOES
#define CAP 10

int remover(int v[],int *tam)
{
	int i,j,k,aux[CAP],tamaux=CAP,cont=0;
	
	//passando os valores do vetor inicial para o vetor auxiliar
	for(i=0;i<tamaux;i++)
	{
		aux[i]=v[i];
	}
	
	//removendo a repeticao do vetor inicial 
	for(i=0;i<tamaux;i++)
	{
		for(j=i+1;j<*tam;)
		{
			
			if(v[j]==v[i])
			{
				for(k=j;k<*tam;k++)
				{
					v[k]=v[k+1];
				}
				(*tam)--;
			}else{
				j++;
			}
		}
	}
	
}
	void main ()
{
	int v[CAP]={2,3,10,5,2,3,2,8,2,1};
	int tam=CAP,i;
	
	remover(v,&tam);
	for(i=0;i<tam;i++)
	{
		printf("%d ",v[i]);
	}
	printf("\n");
}


	


