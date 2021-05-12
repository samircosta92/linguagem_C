#include<stdio.h>

void main()
{
	int v[10] = {5,1,8,0,2,6,9,7,3,4};
	
	int i;
	
	for(i=0;i<10;i++)
	{
		printf(" %d (%p)\n",v[i],&v[i]); // ou printf(" %d (%p)\n",v[i],v+1); já que pula de 4 em 4
	}
}
