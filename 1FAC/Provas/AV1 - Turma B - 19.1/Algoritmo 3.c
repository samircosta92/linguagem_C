/*#include<stdio.h>
void main(){
	int a,b,i,num;
	printf("Informe o valor de a: ");
	scanf("%d",&a);
	printf("Informe o valor de b: ");
	scanf("%d",&b);	
	for(i=a;i<=b;i++)
	{
		num=i*i;
		if((num>a)&&(num<b))
		{
			printf("%d\n",num);
		}		
	}
}*/


/*#include<stdio.h>
void main(){
	int a,b,i,num;
	printf("Informe o valor de a: ");
	scanf("%d",&a);
	printf("Informe o valor de b: ");
	scanf("%d",&b);
	i=a;	
	while(i<=b)
	{
		num=i*i;
		if((num>a)&&(num<b))
		{
			printf("%d\n",num);
		}	
		i++	;
	}
}*/


#include<stdio.h>
void main(){
	int a,b,i,num;
	printf("Informe o valor de a: ");
	scanf("%d",&a);
	printf("Informe o valor de b: ");
	scanf("%d",&b);
	i=a;	
	do{
		num=i*i;
		if((num>a)&&(num<b))
		{
			printf("%d\n",num);
		}	
		i++	;
	}while(i<=b);
}
