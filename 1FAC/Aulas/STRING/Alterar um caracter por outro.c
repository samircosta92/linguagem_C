#include<stdio.h>

int troca(char S[], char A, char B)
{
	int i,cont=0;
	for(i=0;S[i]!='\0';i++)
	{
		if(S[i]==A)
		{
			S[i]=B;
			cont++;
		}
	}
	return cont;
}

void main()
{
	char str[30], ch1, ch2;
	int resp;
	printf("Entre com a string: ");
	fflush(stdin);
	gets(str);
	printf("Qual caracter a ser trocado? ");
	fflush(stdin);
	scanf("%c",&ch1);
	printf("Qual caracter a ser colocado no lugar? ");
	fflush(stdin);
	scanf("%c",&ch2);
	resp=troca(str,ch1,ch2);
	printf("O numero de trocas realizadas foi %d\n",resp);
	printf("%s",str);
	
}
