/* Uma pesquisa foi feita coletando informações (idade, altura e
peso) de um grupo de pessoas.
Pede-se a implementação de um programa que proceda com a leitura de tais
informações (até que o usuário opte por concluir a entrada de dados) e calcule:
- A quantidade de pessoas com idade superior a 50 anos;
- A média de altura das pessoas com mais de 80 kg;
- O maior peso dentre as pessoas acima de 1.65 m de altura e com idade inferior a 30
anos.*/

#include<stdio.h>
int main(){
	int i, contI=0, contA=0;
	float alt, peso, somaA=0, mediaA=0, maior=-9999;
	char opcao;
	do
	{
		printf("Informe a idade: ");
		scanf("%d",&i);
		printf("Informe a altura: ");
		scanf("%f",&alt);
		printf("Informe o peso: ");
		scanf("%f",&peso);
		if(i>50)
		{
			contI++;
		}
		if(peso>80)
		{
			somaA+=alt;
			contA++;
		}
		if((alt>1.65)&&(i<30))
		{
			if(peso>maior)
			{
			maior=peso;
			}
		}
		printf("\nDeseja continuar digitando dados? [S]im ou [N]ao? ");
		fflush(stdin);
		scanf("%c",&opcao);
		opcao=toupper(opcao);
	}while(opcao!='N');
	mediaA=somaA/contA;
	printf("Quantidade de pessoas com idade superior a 50 e: %d\n",contI);
	printf("A media de altura das pessoas com mais de 80kg e: %.2f\n",mediaA);
	printf("O maior peso das pessoas acima de 1.65 m e idade inferior a 30 anos e: %.2f\n",maior);     
}
	
