/* Um fazendeiro realizou um tratamento sobre sua plantação de café
que gerou um crescimento constante de C% em sua produção, por ano.
Considerando que atualmente sua produção anual seja de M u.p.,
implementar um programa que determine a quantidade de anos necessária para que
a produção duplique.*/

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

