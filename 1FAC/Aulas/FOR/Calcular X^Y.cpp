#include<stdio.h>
int main(){
	int i,x,y,pot=1;
	printf("Informe o valor de X: ");
	scanf("%d",&x);
	printf("Informe o valor de Y: ");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		pot=pot*x;
	}
	printf("%d",pot);
}
