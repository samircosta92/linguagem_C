#include<stdio.h>
int main (){

int log=1,cont=0, l, b;
char operacao , escolha;
float num1,num2;
printf("Tabela de operacoes:\n");
printf("    A - ADICAO\n");
printf("    S - SUBTRACAO\n");
printf("    M - MULTIPLICACAO\n");
printf("    D - DIVISAO\n");
printf("    L - LOGARITMO\n");
do
{
	printf("Escolha uma operacao: ");
	fflush(stdin);
	scanf("%c",&operacao);
	operacao=toupper(operacao);
	if(operacao=='A')
	{
		printf("Escolha o primeiro operador: ");
		scanf("%f",&num1);
		printf("Escolha o segundo operador: ");
		scanf("%f",&num2);
		printf("Resposta: %.2f\n ",num1+num2);
	}
	else
	{
		if(operacao=='S')
		{
		printf("Escolha o primeiro operador: ");
		scanf("%f",&num1);
		printf("Escolha o segundo operador: ");
		scanf("%f",&num2);
		printf("Resposta: %.2f\n ",num1-num2);
		}
		else
		{
			if(operacao=='M')
			{
			printf("Escolha o primeiro operador: ");
			scanf("%f",&num1);
			printf("Escolha o segundo operador: ");
			scanf("%f",&num2);
			printf("Resposta: %.2f\n ",num1*num2);
			}
			else
			{
				if(operacao=='D')
				{
				printf("Escolha o primeiro operador: ");
				scanf("%f",&num1);
				printf("Escolha o segundo operador(diferente de 0): ");
				scanf("%f",&num2);
				printf("Resposta: %.2f \n",num1/num2);
				}
				else
				{
					if(operacao=='L')
					{
					printf("Escolha o logaritmando: ");
					scanf("%d",&l);
					printf("Escolha a base: ");
					scanf("%d",&b);
					while(log!=l)
					{
						log=log*b;
						cont++;
					}
					printf("Resposta: %d \n",cont);
						}
					}
					
				}
			}
		}
		printf("Deseja continuar[S/N]? ");
		fflush(stdin);
		scanf("%c",&escolha);
		escolha=toupper(escolha);
	}while(escolha!='N');
	
}


