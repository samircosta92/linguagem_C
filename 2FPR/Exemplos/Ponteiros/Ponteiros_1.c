#include<stdio.h>

void main()
{
	int a = 10,
		b = 20;
		
		
	int *p,*q;
	.
	.
	.
	a = b; //ok
	p = q; //ok
	
	a = p; //N�o - pois os tipos s�o incompat�veis
	q = b; //N�o - pois os tipos s�o incompat�veis
	
	a = *p; //Agora est� ok
	q = &b; //Agora est� ok
}
