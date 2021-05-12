//Verificar o número de ocorrências de um caracter em uma string

#include<stdio.h>

int ocorrencias(char S[], char caract)
{
	int i, cont=0;
	for(i=0;S[i]!='\0';i++)
	{
		if(S[i]==caract)
		{
			cont++;
		}
	}
	return cont;
}

/*void main()
{
	int resp;
	char str[30], ch;
	printf("Digite uma palavra: ");
	fflush(stdin);
	gets(str);
	printf("Digite o caracter a ser encontrado: ");
	scanf("%c",&ch);
	resp=ocorrencias(str,ch);
	printf("O numero de ocorrencias do caracter '%c' e %d",ch,resp);
	
}*/

void main()
{
	int resp;
	char str[30]="jogo", ch='o';
	resp=ocorrencias("jogo",'o');
	printf("O numero de ocorrencias do caracter '%c' na palavra '%s' e %d",ch,str,resp);
	
}
