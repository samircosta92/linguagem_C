#include<stdio.h>
int main(){
	int i, pot=1, fat=1, n;
	float div, somaP=0;
	printf("Digite o valor de N: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		pot=pot*2;
		fat=fat*i;
		div=(float)pot/fat;
		somaP+=div;
	}
	printf("O valor sera: %.2f",somaP);
}
