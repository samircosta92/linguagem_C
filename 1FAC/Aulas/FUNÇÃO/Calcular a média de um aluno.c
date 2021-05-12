#include<stdio.h>

int med(float av1, float av2)
{
	float average;
	average=(av1+av2)/2;
	return average;
}

void main()
{
	float media,nota1, nota2;
	printf("Informe a primeira nota: ");
	scanf("%f",&nota1);
	printf("Informe a segunda nota: ");
	scanf("%f",&nota2);
	media = med(nota1,nota2);
	printf("A media do aluno sera %.2f",media);
}
