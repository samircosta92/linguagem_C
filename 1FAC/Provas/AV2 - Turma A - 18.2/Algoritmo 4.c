/*Considere que uma express�o matem�tica seja representada por uma string da seguinte forma:
�3+9-2*4/8�
Implementar uma fun��o que, dada uma express�o matem�tica, calcule o seu valor.*/

#include<stdio.h>

float valor(char S[])
{
	
	int i,a,b,c;
	float d;

	
	for(i=0;S[i]!='\0';i++)
	{
		a=S[i]+S[i+2];
		b=a-S[i+4];
		c=b*S[i+6];
		d=c/S[i+8];
		return d;
	}


}

void main()
{
	float resp;
	char str[10];
	printf("Digite a expresao: ");
	gets(str);
	resp=valor(str);
	printf("O valor da express�o sera %.2f",resp);
}
