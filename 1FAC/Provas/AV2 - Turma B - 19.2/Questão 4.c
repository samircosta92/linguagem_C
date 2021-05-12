//QUESTAO 4

#include<stdio.h>
#include<string.h>



void inverter(char S[],int p, int n)
{
	int i,j;
	char auxiliar;
	
	
	if((p+n)-1>strlen(S)-1)
	{
		for(i=p,j=strlen(S)-1;i<=j;i++,j--)
		{
			auxiliar=S[i];
			S[i]=S[j];
			S[j]=auxiliar;
		}
	}else{
		for(i=p,j=((p+n)-1);i<=j;i++,j--)
		{
			auxiliar=S[i];
			S[i]=S[j];
			S[j]=auxiliar;
		}
	}
	
	
}





