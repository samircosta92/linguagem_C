//soma de fatoriais de 1 a 10

#include<stdio.h>
int fatorial(int n)
{

int i,fat;
for(fat=1,i=2;i<=n;i++)
{
	fat*=i;
	
}
return fat;
}


void main()
{
	int i,f,s=0;
	for(i=1;i<=10;i++)
	{
		f=fatorial(i);
		s+=f;
	}
	printf("Soma=%d",s);
}
