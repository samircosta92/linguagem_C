#include<stdio.h>
#include<math.h>

typedef struct Ponto
{
	int x;
	int y;
}Tponto;

void triangulo(Tponto X, Tponto Y, Tponto Z);
void main()
{
	Tponto X;
	Tponto Y;
	Tponto Z;
	

	scanf("%d",&X.x);
	scanf("%d",&X.y);
	scanf("%d",&Y.x);
	scanf("%d",&Y.y);
	scanf("%d",&Z.x);
	scanf("%d",&Z.y);
	
	triangulo(X,Y,Z);
	
}

void triangulo(Tponto X, Tponto Y, Tponto Z)
{
	
	int A,B,C,maior,medio,menor;
	
	A=sqrt(pow(X.x - Y.x, 2) + pow(X.y - Y.y, 2));
	B=sqrt(pow(X.x - Z.x, 2) + pow(X.y - Z.y, 2));
	C=sqrt(pow(Y.x - Z.x, 2) + pow(Y.y - Z.y, 2));
	
	if(A>=B && A>=C)
	{
		maior=A;
		if(B>=C)
		{
			medio=B;
			menor=C;
		}
		else
		{
			medio=C;
			menor=B;
		}
	}
	if(B>=A && B>=C)
	{
		maior=B;
		if(A>=C)
		{
			medio=A;
			menor=C;
		}
		else
		{
			medio=C;
			menor=A;
		}
	}
	
	if(C>=A && C>=B)
	{
		maior=C;
		if(A>=B)
		{
			medio=A;
			menor=B;
		}
		else
		{
			medio=B;
			menor=A;
		}
	}
	
	if(A==B && B==C)
	{
		maior=A;
		medio=B;
		menor=C;
	}		
	         
	A=maior;
	B=medio;
	C=menor;


	if (A>=(B + C))
	{
		printf("Nao forma triangulo\n");
	}
	    
	else
	{

		if(A==B && B==C)
		{
			printf("Triangulo Equilatero\n");
		}
		if((A==B && B!=C)||(B==C && C!=A)||(A==C && C!=B))
		{
			printf("Triangulo Isosceles\n");
		}
		if((A!=B && B!=C))
		{
			printf("Triangulo Escaleno");
		}
	}
}
