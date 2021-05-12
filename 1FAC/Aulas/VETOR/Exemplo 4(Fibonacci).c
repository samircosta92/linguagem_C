#include<stdio.h>

void main()
{
	int X[50], i;
	X[0]=0;
	X[1]=1;
	printf("%d\n%d\n",X[0],X[1]);
	for(i=2;i<50;i++)
	{
		X[i]=X[i-2]+X[i-1];
		printf("%d\n",X[i]);
	}
}
