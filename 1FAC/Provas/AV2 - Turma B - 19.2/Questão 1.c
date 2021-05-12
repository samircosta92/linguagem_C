//QUESTAO 1

#include<stdio.h>

void leituraDados(int *cont,float *maior)
{
	float num;
	*maior=-9999;
	
	do{
		scanf("%f",&num);
		if(num>*maior)
		{
			*maior=num;
		}
		(*cont)++;
	
	}while(num!=0);

}
void main()
{
	int quant=0; 
	float maior; 
	leituraDados(&quant,&maior);
	printf("A quantidade de numeros fornecidos foi: %d\n",quant-1);
	printf("O maior valor fornecido foi: %.2f\n",maior);

}
