/*Considere que alguns dados (CPF, nome, município e UF de nascimento) de um grupo de pessoas estejam
armazenados sob a forma de uma string, separados por ponto e vírgula (;). Fazer uma função que receba esta
string e retorne, em diferentes variáveis, a matrícula, o nome, o município e a UF de nascimento da pessoa, como no exemplo abaixo:*/
#include<stdio.h>

void separar(char S[],char nome[], char cpf[],char mun[], char uf[])
{
	int i,j,k,tam=0;
	for(i=0;S[i]!=';';i++);
	{
		cpf[tam]=S[i];
		tam++;
	}
	cpf[tam]='\0';
	tam=0;
	
	for(j=i;S[j]!=';';j++)
	{
		nome[tam]=S[j];
		tam++;
	}
	nome[tam]='\0';
	
	
	

}

void main()
{
	char str[65],nome[20],cpf[20],mun[20],uf[3];
	printf("Informe a string: ");
	gets(str);
	separar(str,nome,cpf,mun,uf);
	printf("%s\n",cpf);
	printf("%s\n",nome);
	printf("%s\n",mun);
	printf("%s\n",uf);
	
}

