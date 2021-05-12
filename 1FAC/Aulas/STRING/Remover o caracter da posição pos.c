#include<stdio.h>

void remover(char S[], int pos)
{
	int i;
	for(i=pos;S[i]!='\0';i++)
	{
		S[i]=S[i+1];
	}
}

void main()
{
	char str[30];
	int pos;
	printf("Digite uma string: ");
	fflush(stdin);
	gets(str);
	printf("Informe a posicao a ser removida: ");
	scanf("%d",&pos);
	remover(str,pos);
	printf("%s",str);
}
