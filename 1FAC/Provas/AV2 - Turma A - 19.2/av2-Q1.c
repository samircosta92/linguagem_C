//QUESTAO 1
//dado um intervalo definido por a e b, desenvolver uma funcao que determine quantas potencias de 2 existem nesse intervalo e qual a ultima potencia
#include<stdio.h>

int funcao(int a, int b,int *pos);

void main()
{
	int a, b,pos,resp;
	
	printf("Digite um numero para iniciar o intervalo : \n");
	scanf("%d",&a);
	
	printf("Digite um numero para finalizar o intervalo : \n");
	scanf("%d",&b);
	
	resp=funcao(a,b,&pos);//mandar pos por referencia pq o retorno ja vai ser o numero de potencias existentes, entao pos vai como ponteiro
	printf("resp : %d\n",resp);
	printf("pos : %d\n",pos);
}

int funcao(int a, int b,int *pos)
{
	int i,pot=1,cont=0;//inicializando o pot em 1 pq é a primeira potencia de 2./cont é o numero de potenciass q aparecem nesse intervalo e que no fim vai ser retornado
	
	while(pot<=b)//
	{
		if(pot>=a && pot<=b)//if pra achar uma potencia q esteja dentro do intervalo ab
		{
			cont++;//se achar, aumenta o cont em 1
		}
		(*pos)=pot;//pos vai receber sempre a ultima pot de 2 antes do incremento e do teste que o while faz pra continuar rodando.
		pot*=2;//a potencia de 2 sendo multiplicada por 2 a cada vez q o while roda
		
	}
	return cont;//retornando o numero de vezes que foram achadas potencias de 2 dentro do intervalo ab
}
