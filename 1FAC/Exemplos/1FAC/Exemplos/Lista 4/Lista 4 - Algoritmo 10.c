/* Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados de
altura e gênero das pessoas. Faça um programa que leia as informações de 50 pessoas e informe:
- a maior e a menor alturas encontradas;
- a média de altura das mulheres;
- a média de altura da população;
- o percentual de homens na população.*/


#include<stdio.h>
#define QUANT 5
main(){
	int i, quantF=0, quantM=0;
	float alt, somaaltF=0, somaaltM=0, mediaaltT, mediaaltM,percM, maiorALT=-1.00,menorALT=5.00;
	char sexo;
	for(i=1;i<=QUANT;i++)
	{
	printf("Informe a altura: ");
	scanf("%f",&alt);
	printf("Informe o sexo (M/F): ");
	fflush(stdin);
	scanf("%c",&sexo);
	sexo=toupper(sexo);
	
		if(sexo=='F')
		{
			quantF++;
			somaaltF+=alt;
		}
		else
		{
			quantM++;
			
		}
		if(alt>maiorALT)
		{
			maiorALT=alt;
		}
		if(alt<menorALT)
		{
			menorALT=alt;
		}
	}
	if(quantF>0)
	{
	mediaaltM=somaaltF/quantF;
	printf("A media de altura das mulheres sera: %.2f\n",mediaaltM);
	}
	else
	{
		printf("Nenhuma mulher consultada");
	}
	mediaaltT=(somaaltF+somaaltM)/(QUANT);
	percM=100*quantM/(QUANT);
	printf("A maior altura encontrada e: %.2f\n",maiorALT);
	printf("A menor altura encontrada e: %.2f\n",menorALT);
	printf("A media de altura da populacao sera: %.2f\n",mediaaltT);
	printf("O percentual de homens na populacao e %.2f%%",percM);
	
	
}
