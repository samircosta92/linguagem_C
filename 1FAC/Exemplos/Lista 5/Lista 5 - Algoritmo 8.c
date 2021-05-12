/* Faça um programa que leia um número real x e um número inteiro y.
Em seguida, o programa deve ler 100 números reais e calcular quantos destes
estão no intervalo definido por [x-y,x+y]*/

#include<stdio.h>
#define QUANT 10
int main(){
float x, num, n1, n2;
int i, y, contN=0;
printf("Informe o valor de X: ");
scanf("%f",&x);
printf("Informe o valor de Y: ");
scanf("%d",&y);
n1=x-y;
n2=x+y;
for(i=1;i<=QUANT;i++)
{
	printf("Informe um numero real: ");
	scanf("%f",&num);
	if((num>=(n1))&&(num<=(n2)))
	{
		contN++;
	}
}
	printf("A quantidade de numeros no intervalo [%.2f,%.2f] e %d\n",n1,n2,contN);
}
