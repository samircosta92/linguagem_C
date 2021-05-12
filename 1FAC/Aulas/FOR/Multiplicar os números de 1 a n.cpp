#include<stdio.h>
int main(){
	int i,n, mult=1;
	printf("Infome o valor de n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		mult=mult*i;
	}
	printf("A multiplicacao sera: %d",mult);
}
