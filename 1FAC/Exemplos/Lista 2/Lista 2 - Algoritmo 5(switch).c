/* Algoritmo 5 - Lista 2 
Um algoritmo que obtenha o código do item pedido, a quantidade 
e calcule o valor a ser pago.*/

#include<stdio.h>
int main(){
//Entrada de variáveis
int COD, QUANT;
float VALOR;
printf("Informe o codigo do produto: ");
scanf("%d",&COD);
printf("Informe a quantidade: ");
scanf("%d",&QUANT);
switch (COD)
{
	case 100: VALOR=3.50*QUANT;
			break;
	case 101: VALOR=4.50*QUANT;
			break;
	case 102: VALOR=5.20*QUANT;
			break;
	case 103: VALOR=3.00*QUANT;
			break;
	case 104: VALOR=4.00*QUANT;
			break;
	default: VALOR=2.50*QUANT;
			break;
}
printf("O valor total sera: %.2f",VALOR);
}





/*if (COD==100)
{
	VALOR=3.50*QUANT;
}
else{
if (COD==101)
{
	VALOR=4.50*QUANT;
}
else{
if (COD==102)
{
	VALOR=5.20*QUANT;
}
else{
if (COD==103)
{
	VALOR=3.00*QUANT;
}
else{
if (COD==104)
{
	VALOR=4.00*QUANT;
}
else
{
	VALOR=2.50*QUANT;
}
printf("O valor total sera: %.2f",VALOR);
}
	}
		}
			}
}*/

