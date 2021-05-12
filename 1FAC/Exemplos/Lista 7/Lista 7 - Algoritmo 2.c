/*Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit.*/
#include<stdio.h>
float temperatura(float c)
{
	float f;
	f=(9*c)/(5)+32;
	return f;
	
}

void main()
{
	float c,far;
	printf("Informe a temperatura em graus Celsius: ");
	scanf("%f",&c);
	far=temperatura(c);
	printf("Temperatura em Fahrenheit= %.2f",far);
}
