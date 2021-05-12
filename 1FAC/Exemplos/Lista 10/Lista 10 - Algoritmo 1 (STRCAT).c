/*Suponha que não existissem as funções strlen,strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o mesmo objetivo daquelas.*/

//STRCAT

#include<stdio.h>
//#include<string.h>

void juntar(char S[], char C[])
{
	int i,j,cont=0;

	for(i=0;S[i]!='\0';i++)
	{
		cont++;

	}
	
	for(i=cont,j=0;C[j]!='\0';i++,j++)
	{
		S[i]=C[j];
	}
	S[i]='\0';
	
}


void main()
{
	
	char S[30], C[30];
	printf("Digite uma string: ");
	//fflush(stdin);
	gets(S);
	printf("Digite a segunda string: ");
	//fflush(stdin);
	gets(C);
	juntar(S,C);
	printf("%s",S);

}



/*void main()
{
	char S[30]="programa", C[30]="correto";
	strcat(S,C);
	printf("%s",S);
		
}*/
