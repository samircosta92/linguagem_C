//QUESTAO 3

#include<stdio.h>
#include<string.h>


int decimal(char Romanos[])
{
	int j,aux=0,soma=0,somaRomanos=0,quant=0;
	int v[15];
	
	v[quant]=0;
	quant++;
	
	for(j=0;Romanos[j]!='\0';j++)
	{
		switch(Romanos[j])
		{
			case 'M': v[quant]=1000;quant++;	
			break;
			case 'D': v[quant]=500;quant++;
			break;
			case 'C': v[quant]=100;quant++;
			break;
			case 'L': v[quant]=50;quant++;
			break;
			case 'X': v[quant]=10;quant++;
			break;
			case 'V': v[quant]=5;quant++;
			break;
			case 'I': v[quant]=1;quant++;
		}
	}
	
	for(j=1;j<quant;j++)
	{
		if(v[j]==aux)
		{
			soma=v[j]+v[j-1];
		}
		else
		{
			if(v[j]>aux)
			{
				somaRomanos-=soma;
				soma+=v[j];
			}
			else
			{
				somaRomanos+=soma;
				soma+=v[j];
				aux=v[j];
				
			}
		}
		somaRomanos+=soma;
	}
	
	return somaRomanos;
	
	
	
	
}


