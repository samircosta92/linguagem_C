/*Desenvolver uma fun��o que permane�a lendo valores inteiros at� que um negativo seja fornecido. Ao final,
devem ser retornados: i) a quantidade de elementos fornecidos; ii) o maior deles; e iii) a m�dia dos �mpares.
Nota: al�m da implementa��o da fun��o, deve ser apresentada a main chamando-a, com a devida
manipula��o dos argumentos de entrada e/ou sa�da.*/

#include<stdio.h>

void num(int *i,int *maior, float *medI)
{
	int num, contI=0,somaI=0;
	*maior=-9999;
	for(*i=0;num>=0;(*i)++)
	{
		scanf("%d",&num);
		if(num>*maior)
		{
			*maior=num;
		}
		if((num%2!=0)&&(num>0))
		{
			somaI+=num;
			contI++;
		}
	}
	
	*medI=(float)somaI/contI;

}

void main()
{
	int quant, maior; 
	float mediaI;
	num(&quant,&maior,&mediaI);
	printf("A quantidade de numeros fornecidos foi: %d\n",quant-1);
	printf("O maior valor fornecido foi: %d\n",maior);
	printf("A media dos valores impares foi: %.2f\n",mediaI);
}
