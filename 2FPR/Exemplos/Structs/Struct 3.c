#include<stdio.h>

typedef struct data
{
	int dia;
	int mes;
	int ano;
}Tdata;

typedef struct ficha
{
	char compromisso[60];
	Tdata data;
	
}Tficha; 

void main()
{
	Tficha agenda[5];
	int i,M,A,cont=0;
	
	for(i=0;i<5;i++)
	{
		printf("Informe o compromisso: ");
		fflush(stdin);
		gets(agenda[i].compromisso);
		printf("Informe o dia: ");
		scanf("%d",&agenda[i].data.dia);
		printf("Informe o mes: ");
		scanf("%d",&agenda[i].data.mes);
		printf("Informe o ano: ");
		scanf("%d",&agenda[i].data.ano);		
	}
	
	printf("---------------------------------------------------------------------------");
	
	do{
		printf("\nInforme o mes a ser buscado: ");
		scanf("%d",&M);
		printf("Informe o ano a ser buscado: ");
		scanf("%d",&A);
		
		for(i=0;i<5;i++)
		{
			if((agenda[i].data.mes==M) && (agenda[i].data.ano==A))
			{
				printf("O(s) compromisso(s) sao:'%s'\n",agenda[i].compromisso);
				cont++;
			}
	
		}
		if(cont==0)
		{
			printf("Nenhum compromisso registrado para essa data!");
		}
	}while(M!=0);
	
}
	
	
	

