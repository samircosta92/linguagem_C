/* Algoritmo 6 - Lista 1 
Desenvolver um algoritmo que determine a ordem de
uma data (dia e mês) no ano.*/

#include<stdio.h>
int main(){
//Entrada de variáveis
int MES,DIA,ORDEM;
//Entrada e leitura de dados
printf("Informe o dia: ");
scanf("%d",&DIA);
printf("Informe o mes: ");
scanf("%d",&MES);
//Verificação das condições
if (MES==1)
{
	ORDEM=DIA;
}
else{
if (MES==2)
{
	ORDEM=31+DIA;
}
else{
if (MES==3)
{
	ORDEM=59+DIA;
}
else{
if (MES==4)
{
	ORDEM=90+DIA;
}
else{
if (MES==5)
{
	ORDEM=120+DIA;
}
else{
if (MES==6)
{
	ORDEM=151+DIA;
}
else{
if (MES==7)
{
	ORDEM=181+DIA;
}
else{
if (MES==8)
{
	ORDEM=212+DIA;
}
else{
if (MES==9)
{
	ORDEM=243+DIA;
}
else{
if (MES==10)
{
	ORDEM=273+DIA;
}
else{
if (MES==11)
{
	ORDEM=304+DIA;
}
else
{
	ORDEM=334+DIA;
}
printf("A ordem sera %d",ORDEM);
}
	}
		}
			}
				}
					}
						}
							}
								}
									}
}
