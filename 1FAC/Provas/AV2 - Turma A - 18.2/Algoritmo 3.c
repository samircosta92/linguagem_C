/*Dados dois vetores vetA e vetB, contendo números inteiros, determinar o menor elemento comum entre
eles, assim como as posições da primeira ocorrência desse número em cada vetor.
Se não existirem elementos comuns, o valor 0 deverá ser retornado pela função; caso contrário, retornará 1.*/

#include<stdio.h>

int menorelemento(int A[],int tamA,int B[], int tamB,int C[], int *tamC, int *menor,int *posA,int *posB)
{
	int i,j,k,aux;
	*tamC=0;
	for(i=0;i<tamA;i++)
	{
		for(j=0;j<tamB;j++)
		{
			if(A[i]==B[j])
			{
				C[k]=A[i];
				k++;
				(*tamC)++;
			}
		}
	}
	
  if(*tamC=0)
  {
  	return 0;
  }
  else
  {
 //ordenar o vetor C 	
  for(i=0;i<*tamC;i++)
    {
    	for(j=0;j<*tamC;j++)
        {
            if (C[i] < C[j])
            {
    			aux = C[i];
                C[i] = C[j];
                C[j] = aux;
        	}
    	}
	}

	for(i=0;i<tamA;i++)
	{
		if(C[0]==A[i])
		{
		*posA=i;
		break;
		}
	}
	for(i=0;i<tamB;i++)
	{
		if(C[0]==B[i])
		{
			*posB=i;
			break;	
		}
	}


return 1;
}

}

void main()
{
	int vetA[5]={2,1,6,4,3}; 
	int vetB[5]={3,2,7,1,8};
	int vetC[5];
	int tC,num,posA,posB,resp;
	resp=menorelemento(vetA,5,vetB,5,vetC,&tC,&num,&posA,&posB);
	if(resp==0)
	{
		printf("Nao existem valores iguais");
	}
	else
	{
		printf("O menor valor comum e %d\n",vetC[0]);
		printf("A primeira ocorrencia em A e na posicao %d\n",posA);
		printf("A primeira ocorrencia em A e na posicao %d\n",posB);
		
	}
}
