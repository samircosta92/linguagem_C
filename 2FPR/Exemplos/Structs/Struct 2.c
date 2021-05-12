#include <stdio.h>

typedef struct data
{
	int dia;
	int mes;
	int ano;
}Tdata;

typedef struct ficha
{
	char nome[40];
	int idade;
	float salario;
	int horas[3];
	Tdata nascimento;
}Tficha;

void main()
{
	int i;
	Tficha cadastro;
	
	printf("Digite o nome: ");
	gets(cadastro.nome);
	printf("Digite a idade: ");
	scanf("%d",&cadastro.idade);
	printf("Digite o salario: ");
	scanf("%f",&cadastro.salario);
	
	printf("Digite as horas extras: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&cadastro.horas[i]);
	}
	
	printf("Digite o dia de nascimento: ");
	scanf("%d",&cadastro.nascimento.dia);
	printf("Digite o mes de nascimento: ");
	scanf("%d",&cadastro.nascimento.mes);
	printf("Digite o ano de nascimento: ");
	scanf("%d",&cadastro.nascimento.ano);
	
	printf("\n\n----------------------------------------------------------------------------------\n\n");
	
	printf("Nome: %s\n",cadastro.nome);
	printf("Idade: %danos\n",cadastro.idade);
	printf("Salario: R$%.2f\n",cadastro.salario);
	printf("Horas extras: ");
	for(i=0;i<3;i++)
	{
		printf("%dh ",cadastro.horas[i]);
	}
	printf("\nNascimento: \n");
	printf("Dia: %d\n",cadastro.nascimento.dia);
	printf("Mes: %d\n",cadastro.nascimento.mes);
	printf("Ano: %d\n",cadastro.nascimento.ano);
	
}
