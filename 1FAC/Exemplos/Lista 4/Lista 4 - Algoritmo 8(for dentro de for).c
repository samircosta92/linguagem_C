
/* Fazer um programa que auxilie o orgão regulador no cálculo do total de recursos
arrecadados com a aplicação de multas de trânsito.
O programa deve ler as seguintes informações para cada motorista:
- O número da carteira de motorista;
- Número de multas;
- Valor de cada uma das multas.
Deve ser exibido o valor da dívida de cada motorista e ao final da leitura o total de
recursos arrecadados (somatório de todas as multas). O programa também deverá
apresentar o número da carteira do motorista que obteve o maior número de multas. */

#include<stdio.h>

int main(){
	int i, j, N, numM, cod,maiorM=-1,maiorCod;
	float valorM,somaM=0,totalM=0;
	printf("Informe a quantidade de motoristas: ");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		printf("\n\nInforme o numero da carteira: ");
		scanf("%d",&cod);
		printf("O numero de multas: ");
		scanf("%d",&numM);
		for(j=1;j<=numM;j++)
		{
			printf("Qual o valor da multa? ");
			scanf("%f",&valorM);
			somaM=somaM+valorM;
			
		}
		printf("O valor da divida do motoriste e: %.2f",somaM);
		totalM+=somaM;	
		somaM=0;
		if(numM>maiorM)
		{
			maiorM=numM;
			maiorCod=cod;
			
		}
	}
	printf("O valor total arrecadado e: %f\n",totalM);
	printf("A matricula com maior numero de multas e %d\n",maiorCod);
	printf("O valor total arrecadado e: %.2f",totalM);

}





