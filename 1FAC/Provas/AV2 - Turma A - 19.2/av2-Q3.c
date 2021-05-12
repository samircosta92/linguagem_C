//QUESTAO 3
//dado uma string com um valor binario, determinar o valor decimal equivalente
#include<stdio.h>
#include<string.h>

void main()
{
	char ddock[10];
	int resultado;
	
	strcpy(ddock,"1000000");//atribuindo manualmente um valor binario
	
	printf("%s",ddock);
		
	resultado=bra(ddock);
	
	printf("\n soma %d",resultado);
}

int bra (char ddock[])
{
	int i,j,k,pot=1,soma=0;//pot iniciando em 1 pq é a primeira potencia de 2, soma iniciando em 0 pq vai somar as potencias de 2 e depois vai ser retornado
	
	for(i=strlen(ddock)-1,j=0;i>=0;i--,j++)//como um numero binario é crescente da esquerda pra direita e nao sabemos quantos algarismos temos, mas sabemos q o fim da string(primeiro valor binario) esta antes do `\0`, comeca o i em strlen(S)-1 pra poder pegar o primeiro algarismo binario e decrementa-lo pra q ele venha pegando todos valores da direita pra esquerda ate a posicao 0 que é a posicao do ultimo valor binario; o j comeca em 0 e incrementa junto com o decremento de i pq a cada casa q anda, a potencia de dois multiplica por 2 j vezes(ex:j=0 => [0]=2^0,j=1 => [1]=2^1, j=2 => [2]=2^2).    
	{
		
		if(ddock[i]=='1')//como so tem 0`s e 1`s só é preciso procurar pelos 0`s e 1`s.
		{
			if(j==0)//achado um 1, precisa multiplicar j vezes a potencia de 2, mas se o j estiver em 0, nao pode fazer isso, precisa definir q automaticamente é 1. 2^0=1
			{
				pot=1;
				soma+=pot;//a soma sempre somando o resultado dessa potencia q foi calculada
			}else{
				//else pro caso de achar um 1 e o j ser maior q 0, pq ai ja pode multiplicar a potencia j vezes
				for(k=0;k<j;k++)//esse for é pra multiplicar a potencia por 2 j vezes
				{
						pot*=2;//potencia sendo multiplicada por 2
				}
				soma+=pot;//a soma sempre somando o resultado dessa potencia q foi calculada
			}
		}else{
			//else pq se o numero achado na string nao for 1, vai ser um 0. 
			pot=0;//caso seja 0, a pot é 0 pq nao conclui a soma
			soma+=pot;////a soma sempre somando o resultado dessa potencia q foi calculada(nesse caso é opcional essa soma aqui)
		}
		pot=1;//como a potencia vai sempre multiplicando toda vez q vc acha um numero, é preciso q ela volte a 1 pra q quando rodar de novo vc consiga apenas multiplicar essa potencia por 2 j vezes e achar o valor desejado
	}
	return soma;//o retorno com o numero decimal equivalente
}
