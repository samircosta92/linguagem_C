#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Q 200


void preencher (int v[], int quant);
void exibir (int v[], int quant);


int main ()
{
	int vetor[Q];
	
	
	preencher (vetor, Q);
	
	
	exibir (vetor, Q);
}



void preencher (int v[], int quant)
{
	int i;
	
	srand(time(NULL));
	
	for (i=0;i<quant;i++)
	{
		v[i] = rand()%10;     
	}
}

void exibir (int v[], int quant)
{
	int i;
	
	printf ("Elementos do vetor: ");
	
	for (i=0;i<quant;i++)
	{
		printf ("%d ", v[i]);
	}	
	printf ("\n\n");
}

