/*Quest�o 01 [2,5 pontos]:
Suponha que, para seguran�a, determinado sistema codifique as senhas num�ricas de seus usu�rios acrescentando uma unidade a cada um de seus
algarismos (exceto se o algarismo for 9; neste caso, ele ser� substitu�do pelo n�mero 0 na codifica��o).
Exemplos:
Senha original: 12345
Senha codificada: 23456
Senha original: 952941
Senha codificada: 063052
Pede-se o desenvolvimento de um programa que realize, atrav�s de um menu, as opera��es de codifica��o e decodifica��o de senhas.*/

#include<stdio.h>

int main()
{
	int senha, n,decodificada=0, codificada=0, pot=1, opcao;
	
	printf("Digite sua senha :\n");
	scanf("%d", &senha);
	printf("Digite 1 para codificar ou 2 para decodificar");
	scanf("%d",&opcao);
	if(opcao==1)
	{
	
	for(senha;senha>0;senha/=10)
	{
		n=senha%10;
		if(n==9)
		{
			 
			pot*=10;
		}else{
			n++;
			codificada+=(n*pot);
			pot*=10;
		}
	}
	printf("Sua senha e : %d\n",codificada);
	}else{
		for(senha;senha>0;senha/=10)
		{
			n=senha%10;
			if(n==0)
			{
				n=9;
				decodificada+=(n*pot);
				pot*=10;
				
			}else{
				n--;
				decodificada+=(n*pot);
				pot*=10;
				printf("A senha e %d\n", decodificada);
			}
		}
		
	}

}

