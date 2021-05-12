/*Suponha que não existissem as funções strlen,strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o mesmo objetivo daquelas.*/

//STRLEN

#include<stdio.h>
//#include<string.h>
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

/*void main()
{
	int resp;
	char stg[30];
	printf("Digite uma palavra: ");
	gets(stg);
	resp=strlen(stg);
	printf("O tamanho da string e %d caracteres",resp);
}*/
