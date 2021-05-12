#include <stdio.h>

typedef struct notas
{
	int codigo;
	float Nmat;
	float Nlin;
	float Nhum;
	float Nnat;
	float Nred;
	float Media_P;
}Tnotas;


int quant_alunos();
void preencher_struct(Tnotas fichas[],int P[]);
void exibir(int n, Tnotas fichas[], int P[]);
void escrever_arq(int n, Tnotas fichas[], int P[]);

void main()
{
	int P[5];
	int i,n;
	
	for(i=0;i<5;i++)
	{
		printf("Informe o peso de ");
		if(i==0)
		{
			printf("Matematica: ");
		}
		if(i==1)
		{
			printf("Linguagens: ");
		}
		if(i==2)
		{
			printf("Ciencias Humanas: ");
		}
		if(i==3)
		{
			printf("Ciencias da Natureza: ");
		}
		if(i==4)
		{
			printf("Redacao: ");
		}
		scanf("%d",&P[i]);
	}
	
	n=quant_alunos();
	
	Tnotas fichas[n];
	
	preencher_struct(fichas,P);
	exibir(n,fichas,P);
	escrever_arq(n,fichas,P);
	
}

int quant_alunos()
{
	int num;
	FILE *pont;
	pont=fopen("alunos.dat","r");
	fscanf(pont,"%d",&num);
	
	fclose(pont);
	
	return(num);
	
}

void preencher_struct(Tnotas fichas[],int P[])
{
	int i,n;
	float media;
	
	FILE *pontA;
	pontA=fopen("alunos.dat","r");
	fscanf(pontA,"%d",&n);
	
	for(i=0;i<n;i++)
	{
		fscanf(pontA,"%d",&fichas[i].codigo);
		fscanf(pontA,"%f",&fichas[i].Nmat);
		fscanf(pontA,"%f",&fichas[i].Nlin);
		fscanf(pontA,"%f",&fichas[i].Nhum);
		fscanf(pontA,"%f",&fichas[i].Nnat);
		fscanf(pontA,"%f",&fichas[i].Nred);
	}
	
	fclose(pontA);
	
	for(i=0;i<n;i++)
	{
		media=(fichas[i].Nmat*P[0] + fichas[i].Nlin*P[1] + fichas[i].Nhum*P[2] + fichas[i].Nnat*P[3] + fichas[i].Nred*P[4])/(P[0]+P[1]+P[2]+P[3]+P[4]);
		
		fichas[i].Media_P=media;
	}

}

void exibir(int n, Tnotas fichas[], int P[])
{
	int i;
	
	printf("\n\n                  Notas originais           |            Notas com Peso             |\n");
	printf("----------------------------------------------------------------------------------------------------------\n");
	printf("codigo   MAT    LIN    HUM    NAT    RED    |    MAT    LIN    HUM    NAT    RED    |   Media_P  Situacao\n");
	printf("----------------------------------------------------------------------------------------------------------\n");
	
	for(i=0;i<n;i++)
	{
		printf("%04d  %6.1f %6.1f %6.1f %6.1f %6.1f    | %6.1f %6.1f %6.1f %6.1f %6.1f    |  %6.1f       ",fichas[i].codigo,fichas[i].Nmat,fichas[i].Nlin,fichas[i].Nhum,fichas[i].Nnat,fichas[i].Nred,fichas[i].Nmat*P[0],fichas[i].Nlin*P[1],fichas[i].Nhum*P[2],fichas[i].Nnat*P[3],fichas[i].Nred*P[4],fichas[i].Media_P);
		if(fichas[i].Media_P>=6.0)
		{
			printf("AP");
		}
		else
		{
			printf("RP");
		}
		printf("\n\n");
	}
	
	
}

void escrever_arq(int n, Tnotas fichas[], int P[])
{
	int i;
	
	FILE *pontB;
	pontB=fopen("report.dat","w");
	
	fprintf(pontB,"%d",n);
	fprintf(pontB,"\n                  Notas originais           |            Notas com Peso             |\n");
	fprintf(pontB,"----------------------------------------------------------------------------------------------------------\n");
	fprintf(pontB,"codigo   MAT    LIN    HUM    NAT    RED    |    MAT    LIN    HUM    NAT    RED    |   Media_P  Situacao\n");
	fprintf(pontB,"----------------------------------------------------------------------------------------------------------\n");
	
	for(i=0;i<n;i++)
	{
		fprintf(pontB,"%04d  %6.1f %6.1f %6.1f %6.1f %6.1f    | %6.1f %6.1f %6.1f %6.1f %6.1f    |  %6.1f       ",fichas[i].codigo,fichas[i].Nmat,fichas[i].Nlin,fichas[i].Nhum,fichas[i].Nnat,fichas[i].Nred,fichas[i].Nmat*P[0],fichas[i].Nlin*P[1],fichas[i].Nhum*P[2],fichas[i].Nnat*P[3],fichas[i].Nred*P[4],fichas[i].Media_P);
		if(fichas[i].Media_P>=6.0)
		{
			fprintf(pontB,"AP");
		}
		else
		{
			fprintf(pontB,"RP");
		}
		fprintf(pontB,"\n\n");
	
	}
	
	fclose(pontB);
	
} 	
	
	  
	
	
