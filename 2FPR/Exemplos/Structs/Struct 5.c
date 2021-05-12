#include<stdio.h>
#include<math.h>

typedef struct Ponto
{
	int x;
	int y;
}Tponto;

void lugar(Tponto P, Tponto C, float R);
void main()
{
	Tponto P;
	Tponto C;
	float R;
	
	scanf("%d",&P.x);
	scanf("%d",&P.y);
	scanf("%d",&C.x);
	scanf("%d",&C.y);
	scanf("%f",&R);
	
	lugar(P,C,R);
}

void lugar(Tponto P, Tponto C, float R)
{
	float d;

	
	d=sqrt(pow(C.x - P.x, 2) + pow(C.y - P.y, 2));
	
	if(d==R)
	{
		printf("O ponto esta sobre a circunferencia");
	}
	
	if(d<R)
	{
		printf("O ponto esta dentro da circunferencia");
	}
	
	if(d>R)
	{
		printf("O ponto esta fora da circunferencia");
	}
	
}
