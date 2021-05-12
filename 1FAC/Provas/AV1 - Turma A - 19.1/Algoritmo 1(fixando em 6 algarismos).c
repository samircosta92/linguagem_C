/*Questão 01 [2,5 pontos]:
Suponha que, para segurança, determinado sistema codifique as senhas numéricas de seus usuários acrescentando uma unidade a cada um de seus
algarismos (exceto se o algarismo for 9; neste caso, ele será substituído pelo número 0 na codificação).
Exemplos:
Senha original: 12345
Senha codificada: 23456
Senha original: 952941
Senha codificada: 063052
Pede-se o desenvolvimento de um programa que realize, através de um menu, as operações de codificação e decodificação de senhas.*/

#include<stdio.h>

int main()
{
	int n, n1,n2,n3,n4,n5,n6;
	char ordem;
	printf("Digite uma senha de 6 algarismos : \n");
	scanf("%d",&n);
	
	n6=n%10;
	n5=(n/10)%10;
	n4=(n/100)%10;
	n3=(n/1000)%10;
	n2=(n/10000)%10;
	n1=(n/100000)%10;
	
	printf("Sua senha e : %d%d%d%d%d%d\n",n1,n2,n3,n4,n5,n6);
	
	printf("Deseja codificar(C) ou decodificar(D) ");
	fflush(stdin);
	scanf("%c",&ordem);
	ordem=toupper(ordem);
	if(ordem=='C')
	{
		if(n1==9){
		n1=0;
		}else{
			n1=n1+1;
		}
	
	if(n2==9){
		n2=0;
		}else{
			n2=n2+1;
		}
	
	if(n3==9){
		n3=0;
		}else{
			n3=n3+1;
		}
	
	if(n4==9){
		n4=0;
		}else{
			n4=n4+1;
		}
	
	if(n5==9){
		n5=0;
		}else{
			n5=n5+1;
		}
	if(n6==9)
	{
		n6=0;
		}else{
			n6=n6+1;
		}
	}else{
		if(n1==0){
		n1=9;
		}else{
			n1=n1-1;
		}	
	
	if(n2==0){
		n2=9;
	}else{
		n2=n2-1;
	}
	
	if(n3==0){
		n3=9;
	}else{
		n3=n3-1;
	}
	
	if(n4==0){
		n4=9;
	}else{
		n4=n4-1;
	}
	
	if(n5==0){
		n5=9;
	}else{
		n5=n5-1;
	}
	
	if(n6==0){
		n6=9;
	}else{
		n6=n6-1;
	}
	
	}
	printf("Sua senha e : %d%d%d%d%d%d",n1,n2,n3,n4,n5,n6);
}
