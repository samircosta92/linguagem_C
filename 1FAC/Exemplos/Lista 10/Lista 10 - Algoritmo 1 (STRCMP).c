/*Suponha que não existissem as funções strlen,strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o mesmo objetivo daquelas.*/

//STRCMP

#include<stdio.h>
//#include<string.h>
int comparar(char A[], char B[])
{
	int i;
	
	for(i=0;(A[i]==B[i])&&(A[i]!='\0')&&(B[i]!='\0');i++);
	if((A[i]=='\0')&&(B[i]=='\0'))
	{
		return 0;
	}
	else
	{
	
	if(A[i]<B[i])
	{
		return -1;
	}
	else
	{
		return 1;
	}
	}
}
	
	
	
	
	


void main()
{
	int resp;
	char S[30], C[30];
	printf("Digite uma string: ");
	fflush(stdin);
	gets(S);
	printf("Digite a segunda string: ");
	fflush(stdin);
	gets(C);
	resp=comparar(S,C);
	if(resp==0)
	{
	printf("Sao iguais");
	}
	else
	if(resp=-1)
	{
		printf("Estao em ordem alfabetica");
	}
	else
	{
		printf("Nao estao em ordem alfabetica");
	}
}



/*void main()
{
	
	int resp;
	char S[30], C[30];
	printf("Digite uma string: ");
	fflush(stdin);
	gets(S);
	printf("Digite a segunda string: ");
	fflush(stdin);
	gets(C);
	resp=strcmp(S,C);
	printf("%d",resp);

}*/


