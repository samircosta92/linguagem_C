/*Fazer uma fun��o que calcule o MMC (m�nimo
m�ltiplo comum) entre dois n�meros.*/

#include<stdio.h>

int mmc(int n1,int n2)
{
	int i,mmc;
	
	
	for(i=(n1*n2);i>=n1;i--)
	{
		if((i%n1==0)&&(i%n2==0))
		{
			mmc=i;
			
		}
	}
	return mmc;
}

void main()
{
	int num1,num2,resp;
	printf("Informe o primeiro numero: ");
	scanf("%d",&num1);
	printf("Informe o segundo numero: ");
	scanf("%d",&num2);
	resp=mmc(num1,num2);
	printf("%d",resp);
}
