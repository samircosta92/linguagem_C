#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *v1;
	float *v2;
	TAluno *v3;
	.
	.
	.
	
	v1 = (int*) malloc(10*sizeof(int)); //vetor de inteiros de tamanho 10
	v2 = (float*) malloc(20*sizeof(float)); //vetor de floats de tamanho 20
	v3 = (TAluno*) malloc(30*sizeof(TAluno));


}
