/* Um fazendeiro realizou um tratamento sobre sua planta��o de caf�
que gerou um crescimento constante de C% em sua produ��o, por ano.
Considerando que atualmente sua produ��o anual seja de M u.p.,
implementar um programa que determine a quantidade de anos necess�ria para que
a produ��o duplique.*/

#include<stdio.h>
int main(){
int i=0;
float C, M;
printf("Informe a taxa de crescimento em %%: ");
scanf("%f",&C);
printf("Informe a producao anual atual em u.p: ");
scanf("%f",&M);
float M2=M;
while(M2<=(2*M))
{
	M2=M2*(1+(C/100));
	i++;
}
printf("O total de anos sera %d",i);
}

