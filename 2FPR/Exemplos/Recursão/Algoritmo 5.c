#include<stdio.h>
#include<string.h>

void main()
{
	int resp;
	char string[30];
	printf("Digite a string: ");
	gets(string);
	int tam=strlen(string)-1;
	
	
	resp=check(string,0,tam);
	
	if(resp==1)
	{
		printf("Eh um palindromo");	
	}
	else
	{
		printf("Nao eh um palindromo");	
	}	
}

int check(char S[],int i, int j)
{
	
	
	if(S[i]!=S[j])
	{
		return 0;
	}
	else
	{
		check(S,i+1,j-1);
		return 1;
	}
	
	
}


