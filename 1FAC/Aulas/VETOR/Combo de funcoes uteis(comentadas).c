/*///inserir valor num vetor ordenado

int InserirValor(int vetor[],int *tam,int n)
{
	int i;
	
	if(*tam==0)//se o vetor nao tiver ngm, nao da pra comparar pra ver onde vai entrar o numero
	{
		vetor[*tam]=n;//so coloca na primeira posicao
		(*tam)++;//aumenta o *quant
	}else{
		for(i=0;i<*tam;i++)//for pra varrer o vetor e procurar onde tem q colocar o numero a ser inserido
		{
			if(n<vetor[i])//if pra achar a posicao q ele deve ser colocado
			{
				//achado a posicao, passa todo mundo dessa posicao até o fim do vetor uma posicao pra frente
				for(j=(*tam);j>i;j--)
				{
					vetor[j]=vetor[j-1];
				}
				vetor[i]=n;//depois de passar geral pra la, abriu espaco pra vc colocar naquela posicao q encontrou
				(*tam)++;//incrementa o tam pq inseriu um numero novo no vetor
			}
		}
	}
	
	
//inserir valor num vetor desordenado
	
int InserirValor(int vetor[],int *tam,int n)
{
	vetor[*tam]=n;
	(*tam)++;
}


//remover valor num vetor ordenado ou nao

int RemoverValor(int vetor[],int *tam,int num)
{
	int cont=0,i,j;

	for(i=0;i<*tam;)//for pra varrer o vetor e achar o numero a ser removido. Como a forma mais pratica de remover é trazendo o elemento da posicao da frente pra preencher a posicao em q deseja-se remover o valor, precisamos nos certificar de q esse elemento da frente nao é igual ao numero q estava ali. entao por isso nao se incrementa o i sempre, apenas quando encontrarmos um numero diferente do q se deve remover(ate pq se encontrar um igual, deve ser removido tbm)
	{
		if(vetor[i]==num)//procurar a posicao em q esta o numero q vai ser removido
		{
			for(j=i;j<*tam;j++)//achada a posicao, comecamos a trazer todos elementos, a partir dessa posicao, uma posicao pra traz
			{
				vetor[j]=vetor[j+1];
				
			}
			(*quant)--;//decrementa o quant pq concluiu a remocao
		}else{
			i++;//o if ta pra quando acha um numero igual, o else é quando for diferente, ou seja, se é diferente do numero a ser removido, incrementa
		}	
	}
	
	
	//remover repeticoes de um elemento num mesmo vetor
	
int removerRepeticoes(int v[],int *tam,int num)

	int i,j,k;

	for(i=0;i<*tam;i++)//for pra repetir *tam vezes a remocao dos elementos(i)
	{
		for(j=i+1;j<*tam;)//for pra varrer a partir da posicao a frente da i ate o final. i é o valor q nao pode ter repeticoes no vetor 
		{
			
			if(v[j]==v[i])//if pra achar um valor igual ao elemento i e remover, ja q é uma repeticao
			{
				for(k=j;k<*tam;k++)//a forma q temos de remover é trazendo todo mundo que esta a frente da posicao q foi achada a repeticao uma casa pra traz
				{
					v[k]=v[k+1];
				}
				(*tam)--;//decrementar o i pq é uma remocao de um elemento do vetor
			}else{
				//mais uma vez: se o valor q foi trazido pra tras for igual ao valor a ser removido, ele deve ser removido tambem, por isso nao pode somente trazer todo mundo pra traz e incrementar o i. o valor da frente pode ser igual tambem. só pode incrementar o j quando achar alguem diferente do numero a ser removido, por isso fica no else, pq o if procura um igual
				j++;
			}
		}
	}
	
}
*/
