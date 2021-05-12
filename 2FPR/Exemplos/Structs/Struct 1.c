#include<stdio.h>
#include<stdlib.h>

struct ficha
{
	char nome[40];
	int idade;
	float salario;
	int horasE[3];
};

typedef struct ficha Tficha;

void main()
{
	Tficha cadastro;
	int i;
	printf("Entre com o nome: ");
	gets(cadastro.nome);
	
	printf("Informe a idade: ");
	scanf("%d",&cadastro.idade);
	
	printf("Informe o salario: ");
	scanf("%f",&cadastro.salario);
	
	printf("Informe as horas extras: ");
	
	for(i=0;i<3;i++)
	{
		scanf("%d",&cadastro.horasE[i]);
	}
	
	printf("_________________________________________________________________________\n\n");
	printf("Nome: %s\n",cadastro.nome);
	printf("Idade: %d anos\n",cadastro.idade);
	printf("Salario: R$ %.2f\n",cadastro.salario);
	printf("Horas Extras: ");
	for(i=0;i<3;i++)
	{
		printf("%dh ",cadastro.horasE[i]);
	}
	
}
