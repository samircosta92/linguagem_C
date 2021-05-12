#include<stdio.h>

void main()
{
	int v[10] = {5,1,8,0,2,6,9,7,3,4};
	
	int *x;
	int i;
	
	x=v;
	
	for(i=0;i<10;i++)
	{
		printf("%d ",*x);
		x++; 
	}
}
