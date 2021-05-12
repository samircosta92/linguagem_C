/* Algoritmo 7 - Lista 1 
Um algoritmo para calcular o salário semanal de uma pessoa, determinado pelas
condições que seguem: se o número de horas trabalhado for inferior ou igual a 40, a pessoa
recebe x reais por hora; caso contrário, a pessoa recebe um adicional de 50% para cada
hora trabalhada acima das 40 iniciais.*/

#include<stdio.h>
int main(){
//Entrada de variáveis
int HORAS;
float X;
//Entrada e leitura de dados
printf("Informe as horas trabalhadas: ");
scanf("%d",&HORAS);
printf("Informe o salario por hora: ");
scanf("%f",&X);
if (HORAS<=40)
{
	printf("O salario sera %.2f",HORAS*X);
}
else
{
	printf("O salario sera %.2f",40*X+(HORAS-40)*1.5*X);
}
}

