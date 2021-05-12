/*Um cinema possui capacidade de 100 lugares e está sempre com ocupação total. Certo dia, cada espectador
respondeu a um questionário, no qual informava: sua idade e sua opinião em relação ao filme, segundo as
seguintes notas: A (ótimo), B (Bom), C (Regular), D(Ruim) e E (Péssimo).
Elaborar um programa que, lendo estes dados, calcule
e exiba:
- a quantidade de respostas ótimo;
- a diferença percentual entre respostas bom e
regular;
- a média de idade das pessoas que responderam ruim;
- a percentagem de respostas péssimo e a maior idade que utilizou esta opção;
- a diferença entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim;*/

#include<stdio.h>
#define QUANT 10
void main(){
	char opiniao;
	int i,idade,contA=0,contB=0,contC=0,contD=0,contE=0,contI=0,somaI=0,percB,percC,maiorIE=-1,maiorIA=-1,maiorID=-1;
	float difBC, mediaI,percE;
	for(i=1;i<=QUANT;i++)
	{
		printf("Informe a sua idade: ");
		scanf("%d",&idade);
		printf("Informe a sua opiniao: ");
		fflush(stdin);
		scanf("%c",&opiniao);
		opiniao=toupper(opiniao);
		if(opiniao=='A')
		{
			contA++;
			if(idade>maiorIA)
			{
				maiorIA=idade;
			}
		}
		else
		{
			if(opiniao=='B')
			{
				contB++;
			}
			else
			{
				if(opiniao=='C')
				{
					contC++;
				}
				else
				{
					if(opiniao=='D')
					{
						contD++;
						contI++;
						somaI+=idade;
						if(idade>maiorID)
						{
							maiorID=idade;
						}
					}
					else
					{
						if(opiniao=='E')
						{
							contE++;
							if(idade>maiorIE)
							{
								maiorIE=idade;
							}
						}
					}
				}
			}
		}
		
	}
	percB=(float)(contB*100)/QUANT;
	percC=(float)(contC*100)/QUANT;
	difBC=percB-percC;
	mediaI=(float)somaI/contI;
	percE=(float)(contE*100)/QUANT;

	printf("O total de respostas otimo foi: %d\n",contA);
	printf("A diferença percentual entre respostas bom e regular e: %.2f%%\n",difBC);
	printf("A media de idade das pessoas que responderam ruim e: %.2f\n",mediaI);
	printf("A percentagem de respostas pessimo e %.2f%% e a maior idade que respondeu essa opcao foi %danos\n",percE,maiorIE);
	printf("A diferença entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim e %d",maiorIA-maiorID);
}


