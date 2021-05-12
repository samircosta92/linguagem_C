/*QUESTÃO 08: Em uma empresa deseja-se fazer um levantamento sobre algumas
informações dos seus 250 funcionários. Cada funcionário deverá responder um
questionário ao qual informará os seguintes dados: matrícula, sexo, idade,
salário e tempo (em anos) de trabalho na empresa. A execução do programa deve
exibir os seguintes itens:
a) Quantidade de funcionários que ingressaram na empresa com menos de 21 anos;
b) Quantidade de funcionários do sexo feminino;
c) Média salarial dos homens;
d) Matrícula dos funcionários mais antigo e mais novo.*/

#include<stdio.h>
#define QUANT 5
int main(){
	int i, matric, idade, tempo, cont21=0, contF=0, contM=0, maior=-99999, menor=99999,matA,matN;
	char sexo;
	float sal, soma=0, media;
	for(i=1;i<=QUANT;i++)
	{
		printf("\nInforme a matricula: ");
		scanf("%d",&matric);
		printf("Informe o sexo(M/F): ");
		fflush(stdin);
		scanf("%c",&sexo);
		sexo=toupper(sexo);
		printf("Informe a idade: ");
		scanf("%d",&idade);
		printf("Informe o salario: ");
		scanf("%f",&sal);
		printf("Informe o tempo trabalhando na empresa: ");
		scanf("%d",&tempo);
		if((idade-tempo)<21)
		{
			cont21++;
		}
		if(sexo=='F')
		{
			contF++;
		}
		else
		{
			contM++;
			soma=soma+sal;
		}
		if(tempo>maior)
		{
			maior=tempo;
			matA=matric;
		}
		if(tempo<menor)
		{
			menor=tempo;
			matN=matric;
		}
		
		
	}
	
	media=soma/contM;
	printf("\nQuantidade de funcionários que ingressaram na empresa com menos de 21 anos: %d\n",cont21);
	printf("Quantidade de funcionários do sexo feminino: %d\n",contF);
	printf("Média salarial dos homens: %.2f",media);
	printf("A matricula do funcionario mais antigo e %d e do mais novo e %d",matA,matN);
}
