/*QUESTÃO 07: Uma determinada empresa fez uma pesquisa de mercado para saber
se as pessoas gostaram ou não de um novo produto que foi lançado. Para cada pessoa
entrevistada foram coletados os seguintes dados: sexo (M ou F) e resposta (G
[Gostou] ou N [Não Gostou]). Sabendo-se que foram entrevistadas X pessoas, faça
um programa que forneça:
a) Número de pessoas que gostaram do produto;
b) Número de pessoas que não gostaram do produto;
c) Informação dizendo em que sexo o produto teve uma melhor aceitação. */

#include<stdio.h>
int main(){
	char sexo, gostou;
	int x,i,contG=0,contN=0,contF=0, contM=0, contMG=0,contFG=0;
	float percM,percF;
	
	printf("Entre com a quantidade de pessoas entrevistadas: ");
	scanf("%d",&x);
	
	for(i=1;i<=x;i++)
	{
		printf("\nQual seu sexo? [M/F] : ");
		fflush(stdin);
		scanf("%c",&sexo);
		sexo=toupper(sexo);
		
		printf("Gostou do produto? [G/N] : ");
		fflush(stdin);
		scanf("%c",&gostou);
		gostou=toupper(gostou);
		
		if(gostou=='G')
		{
			contG++;
		}
		else
		{
			contN++;
		}
		if(sexo=='M')
		{
			contM++;
			if(gostou=='G')
			{
				contMG++;
			}
		}
		else
		if(sexo=='F')
		{
			contF++;
			if(gostou=='G')
			{
				contFG++;
			}
		}	
	}
	percM=((float)contMG/contM)*100;
	percF=((float)contFG/contF)*100;
	if(percM<percF)
	{
		printf("Houve maior aceitacao entre as mulheres");
	}
	else{
		if(percM>percF)
		{
			printf("Houve maior aceitacao entre os homens");
		}
		else
		{
			printf("Houve empate entre homens e mulheres");
		}
	}
	printf("\nNumero de pessoas que gostaram: %d\n",contG);
	printf("Numero de pessoas que nao gostaram: %d\n",contN);
	
}
