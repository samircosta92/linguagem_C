/* Pede-se o desenvolvimento de um programa que faça o cálculo do valor total de cada compra na loja. Para isso,
em cada compra o sistema deve solicitar o código e a quantidade de cada produto desejado até que o
usuário opte por terminar a compra. Para cada produto escolhido, o programa deve exibir o valor total,
multiplicando o valor unitário pela quantidade desejada. Além disso, deve exibir ao usuário o valor
total da compra. Ao final da execução, o programa ainda deve
apresentar:
- O total arrecadado com as compras realizadas;
- O valor da compra de valor mais alto.*/

#include<stdio.h>
void main(){
int quant, cod; 
float valorP, valorT,maior=-1;
char escolha;
do{
	printf("Escolha o codigo do produto: ");
	scanf("%d",&cod);
	printf("Escolha a quantidade: ");
	scanf("%d",&quant);
	switch(cod)
	{
		case 123 : valorP=0.15*quant;
		break;
		case 234 : valorP=0.12*quant;
		break;
		case 456 : valorP=0.10*quant;
		break;
		case 567 : valorP=4.50*quant;
		break;
		case 678 : valorP=30.00*quant;
		break;
		case 789 : valorP=8.50*quant;
		break;
		default: printf("Digite um codigo valido!\n");
		break;
		
	}
	
		if(valorP>maior)
		{
			maior=valorP;
		}
		valorT+=valorP;
		printf("Deseja continuar as compras?[S/N]: ");
		fflush(stdin);
		scanf("%c",&escolha);
		escolha=toupper(escolha);
		
	}while(escolha=='S');

printf("O valor total e R$%.2f,00\n",valorT);
printf("A compra parcial de maior valor e R$%.2f,00\n",maior);
}



