/*Determinada zona eleitoral possui 50 eleitores inscritos que poderão votar, uma única vez, em um dos 4
candidatos para o único cargo em votação (códigos 10,20, 30 ou 40). Pede-se o desenvolvimento de um
programa que:
a. Leia o voto de cada eleitor, considerando que o processo terminará quando os 50 eleitores
votarem ou quando o número -1 for digitado como voto;
b. Exiba o total de votos para cada candidato, assim com a quantidade de votos brancos
(código 0) e de nulos (código sem candidato associado). Além disso, exibir a quantidade de
abstenções (eleitores que não votaram).*/

#include<stdio.h>
#define QUANT 10
void main(){
	int i, voto, abst, cont10=0, cont20=0, cont30=0, cont40=0, contB=0, contN=0, cont=0;
	
	for(i=1;(i<=QUANT)&&(voto!=-1);i++)
	{
		printf("Escolha o seu voto: ");
		scanf("%d",&voto);
		
		switch(voto)
		{
			case 10: cont10++;
			break;
			case 20: cont20++;
			break;
			case 30: cont30++;
			break;
			case 40: cont40++;
			break;
			case 0: contB++;
			break;
			case -1: cont--;
			break;
			default: contN++;
		}
	cont++;
	}
	abst=QUANT-cont;
	printf("O total de votos para o codigo 10 foi: %d\n",cont10);
	printf("O total de votos para o codigo 20 foi: %d\n",cont20);
	printf("O total de votos para o codigo 30 foi: %d\n",cont30);
	printf("O total de votos para o codigo 40 foi: %d\n",cont40);
	printf("O total de votos em branco foi: %d\n",contB);
	printf("O total de votos nulos foi: %d\n",contN);
	printf("O total de abstencoes foi: %d\n",abst);
}
