#include<stdio.h>

typedef struct Ponto
{
	int x;
	int y;
}Tponto;

void main()
{
	Tponto X;
	Tponto Y;
	int resp;

	
	scanf("%d",&X.x);
	scanf("%d",&X.y);
	scanf("%d",&Y.x);
	scanf("%d",&Y.y);
	
	resp = area(X,Y);
	
	printf("A area sera: %d",resp);
}

int area(Tponto X, Tponto Y)
{
	int area;
	
	area=X.y * Y.x;
	return(area);
		
}
