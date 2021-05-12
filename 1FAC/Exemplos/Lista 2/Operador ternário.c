//operador ternario
#include<stdio.h>
void main()
{
	int media;
	media=3;

/*if(x==0)
{
	a=10;
}
else
{
	a=20;
}
a=(x==0)?10:20;

if(media>=6)
{
	printf("Aprovado")
}
else
{
	if(media<4)
	{
		printf("Reprovado");
	}
	else
	{
		printf("Em AVF");
	}
}*/


printf(media>=6?"Aprovado":(media<4)?"Reprovado":("Em VF"));

}
