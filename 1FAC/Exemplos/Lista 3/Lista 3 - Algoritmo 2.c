/* QUEST�O 02: Fa�a um programa que exiba todos os elementos da seguinte s�rie,
assim como a soma destes elementos: 1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1 */

#include<stdio.h>
int main(){
	int i,j,soma;
	for(i=1,j=50;i<=50;i++,j--)
	{
		printf("%d, %d, ",i,j);
		soma+=i+j;
	}
	printf("\nA soma sera %d",soma);
}
