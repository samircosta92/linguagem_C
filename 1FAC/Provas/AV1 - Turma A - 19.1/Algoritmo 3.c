/*Quest�o 03 [2,5 pontos]:
Fa�a 3 programas (um para cada estrutura de repeti��o estudada) que exiba os n�meros primos existentes no
intervalo definido por [a,b], onde a e b s�o n�meros inteiros fornecidos pelo usu�rio, sendo a = b.*/
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

