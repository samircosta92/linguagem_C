/*Questão 03 [2,5 pontos]:
Faça 3 programas (um para cada estrutura de repetição estudada) que exiba os números primos existentes no
intervalo definido por [a,b], onde a e b são números inteiros fornecidos pelo usuário, sendo a = b.*/
/*#include<stdio.h>

int main()
{
	int i,j,cont=0,a,b;
	printf("Digite um numero para inicializar o intervalo: ");
	scanf("%d",&a);
	
	printf("Digite um numero maior que o anterior: ");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		cont=0;
		for(j=1;j<=b;j++)
		{
			
			if(i%j==0)
			{
				cont++;
			}
			
		}
	if(cont==2)
		{
			printf("%d\n",i);
				
		}
	}*/
	
	
	/*int main()
{
	int i,j=1,cont=0,a,b;
	printf("Digite um numero para inicializar o intervalo: ");
	scanf("%d",&a);
	
	printf("Digite um numero maior que o anterior: ");
	scanf("%d",&b);
	i=a;
	while(i<=b)
	{
		
		while(j<=b)
		{
			if(i%j==0)
			{
				cont++;
			}
			j++;
		}
	if(cont==2)
	{
		printf("%d\n",i);
					
	}
		cont=0;
		i++;
		j=1;
	}

	
}*/

#include<stdio.h>
void main(){

	int i,j=1,cont=0,a,b;
	printf("Digite um numero para inicializar o intervalo: ");
	scanf("%d",&a);
	
	printf("Digite um numero maior que o anterior: ");
	scanf("%d",&b);
	i=a;
	
	do
	{
		
		do
		{
			if(i%j==0)
			{
				cont++;
			}
			j++;
		}while(j<=b);
	if(cont==2)
	{
		printf("%d\n",i);
					
	}
		cont=0;
		i++;
		j=1;
	}while(i<=b);
}

