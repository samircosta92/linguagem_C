/*Fazer uma função que crie um endereço de e-mail da FAETERJ-Rio, dados o nome e a data de nascimento da
pessoa, respeitando as regras definidas abaixo:
i. A data de nascimento fornecida estará no formato
DD/MM/AAAA;
ii. O endereço de e-mail será representado pelas
iniciais do nome da pessoa, um ponto (.), a data de
nascimento (sem as barras), seguidos da sequência
@faeterj-rio.edu.br.*/


#include<stdio.h>
#include<string.h>

void email(char nome[],char data[], char resp[])
{
	int i,j=1, tam=strlen(nome);
	resp[0]=nome[0];
	for(i=1;i<tam;i++)
	{
		if(nome[i]==' ')
		{
			resp[j]=nome[i+1];
			j++;
		}
	}
	
	resp[j]='.';
	j++;
	
	for(i=0;data[i]!='\0';i++)
	{
		if(data[i]!='/')
		{
			resp[j]=data[i];
			j++;
		}
	}

	resp[j]='\0';
	strcat(resp,"@faeterj-rio.edu.br");
	

}

void main()
{
	char nome[30], data[20], resp[50];
	printf("Informe o nome: ");
	gets(nome);
	printf("Informe a data de nascimento: ");
	gets(data);
	email(nome,data,resp);
	printf("%s",resp);
}


