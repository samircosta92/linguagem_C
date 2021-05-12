/*Implementar três programas (um para cada estrutura
de repetição estudada) que exibam todas as potências
de 2 existentes no intevalo definido por [n1, n2].*/

#include<stdio.h>
int main(){
	int n1, n2, i, pot=1;
	printf("Informe o valor de n1: ");
	scanf("%d",&n1);
	printf("Informe o valor de n2: ");
	scanf("%d",&n2);
	for(i=1;i<=n2;i++)
	{
		
		if((pot>=n1)&&(pot<=n2))
		{
			printf("%d\n",pot);
		}
		pot=pot*2;	
	}
	
}
