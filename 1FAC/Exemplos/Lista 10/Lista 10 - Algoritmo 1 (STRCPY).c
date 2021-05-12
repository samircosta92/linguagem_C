/*Suponha que não existissem as funções strlen,strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o mesmo objetivo daquelas.*/

//STRCPY

#include<stdio.h>
//#include<string.h>

void copia(char S[], char C[])
{
	int i;
	for(i=0;C[i]!='\0';i++)
	{
		S[i]=C[i];
		
	}	
	
	S[i]='\0';
}


void main()
{
	
	char S[30], C[30];
	printf("Digite uma string: ");
	fflush(stdin);
	gets(S);
	printf("Digite a segunda string: ");
	fflush(stdin);
	gets(C);
	copia(S,C);
	printf("%s",S);

}

/*void main()
{
	char S[5], C[10];
	printf("Digite uma string: ");
	fflush(stdin);
	gets(S);
	printf("Digite a segunda string: ");
	fflush(stdin);
	gets(C);
	strcpy(S,C);
	printf("%s",S);
}*/
