/* A prefeitura de uma cidade fez uma pesquisa com 300 de seus
habitantes, coletando dados sobre o sal�rio e n�mero de filhos. A prefeitura
deseja saber:
a) m�dia do sal�rio da popula��o;
b) m�dia do n�mero de filhos;
c) maior sal�rio;
d) percentual de pessoas com sal�rio at�
R$ 1.000,00.*/

#include<stdio.h>
#define QUANT 5
int main(){
	int i, filhos, somaF=0;
	float sal, mediaS, somaS=0, maior=-9999, quantP=0, mediaF,percP;
	for(i=1;i<=QUANT;i++)
	{
		printf("Informe o salario: ");
		scanf("%f",&sal);
		printf("Informe o numero de filhos: ");
		scanf("%d",&filhos);
		somaS+=sal;
		somaF+=filhos;
		if(sal>maior)
		{
			maior=sal;
		}
		if(sal<=1000)
		{
			quantP++;
		}
	}
	mediaS=somaS/QUANT;
	mediaF=(float)somaF/QUANT;
	percP=(quantP*100)/QUANT;
	printf("A media de salario da populacao e %.2f\n",mediaS);
	printf("A media do numero de filhos e %.2f\n",mediaF);
	printf("O maior salario e %.2f\n",maior);
	printf("O percentual de pessoas com salario ate 1000 reais e %.2f%%\n",percP);
}
