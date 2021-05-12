
/* Desenvolver um programa no qual o usuário entre com vários números inteiros
e positivos e imprima o produto dos números ímpares e a soma dos números pares. */

#include<stdio.h>
void main(){
	int N,i,soma=0,produto=1;
	char resp;
	do
	{
		printf("Entre com um numero inteiro positivo: ");
		scanf("%d",&N);
		if(N%2==0)
		{
			soma=soma+N;
		}
		else
		{
			produto=produto*N;
		}
		
		
		do{
		printf("Deseja continuar (S/N)? ");
		fflush(stdin);
		scanf("%c",&resp);
		resp=toupper(resp);
		
		if((resp!='S')&&(resp!='N'))
		{
			printf("Resposta invalida");
		}
	}while((resp!='S')&&(resp!='N'));
	
}while(resp=='S');
printf("A soma dos pares sera: %d\n",soma);
printf("O produto dos impares sera: %d",produto);
}

	/*for(i=1;i<=QUANT;i++)
	{
		printf("Entre com um numero inteiro positivo: ");
		scanf("%d",&N);
		if(N%2==0)
		{
			soma=soma+N;
		}
		else
		{
			produto=produto*N;
		}
	}
	printf("A soma do numeros pares: %d\n",soma);
	printf("O prduto dos numeros impares: %d\n",produto);
}


/* #include<stdio.h>
#define QUANT 10
int main(){
	int N,i=1,soma=0,produto=1;
	while(i<=QUANT)
	{
		printf("Entre com um numero inteiro positivo: ");
		scanf("%d",&N);
		if(N%2==0)
		{
			soma=soma+N;
		}
		else
		{
			produto=produto*N;
		}
		i++;
	}
	printf("A soma do numeros pares: %d\n",soma);
	printf("O prduto dos numeros impares: %d\n",produto);
}*/

