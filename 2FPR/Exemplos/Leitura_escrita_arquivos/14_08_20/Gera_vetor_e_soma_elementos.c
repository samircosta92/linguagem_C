#include<stdio.h>  


void geravetor(int num,int amp);
void main()
{
	int n,a,i;
	
	printf("Informe a quantidade de elementos: ");
	scanf("%d",&n);
	printf("Informe a amplitude do intervalo dos elementos: ");
	scanf("%d",&a);
	
	geravetor(n,a);
}

void geravetor(int num,int amp)
{
	int v[num],i,soma=0;
	
	printf("\nVetor: ");
	for (i=0;i<num;i++)
	{
		v[i] = rand()%amp; 
		printf("%d ",v[i]);
		soma+=v[i];
	}
	

	printf("\n\nA soma dos ele : %d",soma);
}

