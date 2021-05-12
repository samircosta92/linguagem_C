//av4 Q4
//Dada uma string, verificar se ela, caso fosse um vetor numerico, poderia formar um numero
#include<stdio.h>
#include<string.h>

void main ()
{
	char S[10];
	int resp;
	
	strcpy(S,"12347");//preenchendo manualmente a string
	
	printf("%s",S);
	
	resp=Braddockzada(S);
	
	if(resp==0)
	{
		printf("\nnao e um valor numerico : ");
	}else{
		printf("\ne um valor numerico : ");
	}
}

int Braddockzada(char S[])
{
	int i, cont=0;//cont pra contar quantos `.` existem dentro da string
	
	if(S[0]=='.' || S[strlen(S)-1]=='.')//se tiver algum ponto nas extremidades da string, já nao pode ser um numero       
	{
		return 0;//retorno em 0 pq é falso, nao pode ser um numero
	}else{
		
		for(i=0;i<strlen(S)-1;i++)//procurar se tem algum ponto nessa string fora os das extremidades
		{
			if(S[i]=='.')//cada vez q acha o ponto incrementa o contador em 1
			{
				cont++;
			}
		}
		if(cont>1)//se houver mais de um ponto na string(que nao sejam nas extremidades), retorna-se falso pq também nao pode ser validada como um numero
		{
			return 0;
		}else{
			for(i=0;S[i]!='\0';i++)//caso seja achado qualquer algarismo de 0 a 9 nada deve ser feito, por isso os cases vazios
			{
				switch(S[i])
				{
					case '0' :
						
					break;
					
					case '1' :
						
					break;
					
					case '2' :
						
					break;
					
					case '3' :
						
					break;
					
					case '4' :
						
					break;
					
					case '5' :
						
					break;
					
					case '6' :
						
					break;
					
					case '7' :
						
					break;
					
					case '8' :
						
					break;
					
					case '9' :
						
					break;
					
					case '.' :
						
					break;
					
					default : return 0;//qualquer outra coisa achada q nao seja algarismos de 0 a 9, deve-se retornar 0 por nao poder ser validada como um numero
				}
			}
			
			return 1;//se chegou aqui é pq nao entrou em nenhuma das condicoes de invalidacao da string, ou seja, automaticamente é valida. retorna o 1
		}
	}
	
	
	
	
	
	
	
}
