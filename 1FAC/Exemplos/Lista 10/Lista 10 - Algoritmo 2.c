/*Dada uma string s, desenvolver uma fun��o que determine se s � ou n�o um pal�ndromo.
Observa��o: uma string s ser� um pal�ndromo quando seus caracteres formarem a mesma
sequ�ncia, independente se s � percorrida da esquerda para direita ou vice-versa.*/

#include<stdio.h>
#include<string.h>

int palindromo(char S[])
{
	int i,j;
	for(i=0,j=strlen(S)-1;i<j;i++,j--)
	{
		if(S[i]!=S[j])
		{
			return 0;
		}
	}
	return 1;
	
}

void main()
{
	int resp;
	char str[30];
	printf("Digite a string: ");
	gets(str);
	
	resp=palindromo(str);
	if(resp==1)
	{
		printf("A string e um palindromo");
	}
	else
	{
		printf("A string nao e um palindromo");
	}
}
