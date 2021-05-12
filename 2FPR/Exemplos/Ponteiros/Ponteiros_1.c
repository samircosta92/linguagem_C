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
	
	a = p; //Não - pois os tipos são incompatíveis
	q = b; //Não - pois os tipos são incompatíveis
	
	a = *p; //Agora está ok
	q = &b; //Agora está ok
}
