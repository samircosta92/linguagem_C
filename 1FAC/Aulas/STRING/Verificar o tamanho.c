//Dada uma string, verificar o tamanho

#include<stdio.h>
int tam(char S[])
{
	int i;
	for(i=0;S[i]!='\0';i++);
	return i;
}

void main()
{
	int resp;
	char stg[30];
	printf("Digite uma palavra: ");
	gets(stg);
	resp=tam(stg);
	printf("O tamanho da string e %d caracteres",resp);
}

