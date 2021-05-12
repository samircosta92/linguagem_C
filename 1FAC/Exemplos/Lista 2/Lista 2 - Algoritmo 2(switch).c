/* Algoritmo 2 - Lista 2 
Escrever um algoritmo que obtenha o peso de uma pessoa na Terra e o número de um planeta. Ao final, com auxílio da
tabela abaixo, calcular o peso desta pessoa no planeta escolhido.*/

#include<stdio.h>
int main(){
//Entrada de variáveis
float PT, PP;
int N;
//Entrada e leitura de dados
printf("Informe o peso da pessoa na terra: ");
scanf("%f",&PT);
printf("Informe o numero do planeto ");
scanf("%d",&N);
switch (N)
{
	case 1 : PP=PT/(10*0.37);
			break;
	case 2 : PP=PT/(10*0.88);
			break;
	case 3 : PP=PT/(10*0.38);
			break;
	case 4 : PP=PT/(10*0.38);
			break;
	case 5 : PP=PT/(10*1.15);
			break;
	default : PP=PT/(10*1.17);
			break;

}
printf("O peso no planeta %d sera %.2f\n",N,PP);
}


/*if (N==1)
{
	PP=PT/(10*0.37);
}
else{
if (N==2)
{
	PP=PT/(10*0.88);
}
else{
if (N==3)
{
	PP=PT/(10*0.38);
}
else{
if (N==4)
{
	PP=PT/(10*2.64);
}
else{
if (N==5)
{
	PP=PT/(10*1.15);
}
else
{
	PP=PT/(10*1,17);
}
printf("O peso no planeta %d sera %.2f\n",N,PP);
}
	}
		}
			}
}*/
