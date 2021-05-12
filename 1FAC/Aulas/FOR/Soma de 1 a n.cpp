#include<stdio.h>
int main(){
	int i,n,soma=0;
	printf("Informe o valor de n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		soma=soma+i;
	}
	printf("A soma sera: %d",soma);
}
