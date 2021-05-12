#include<stdio.h>
/*Questão 05 [2,0 pontos]:
Implementar um programa que leia as seguintes informações sobre os carros a serem vendidos em uma loja:
quilometragem, ano, valor e tipo (0 – 0 km ou 1 – usado).
Ao final, devem ser exibidos:
- Quantidade de carros fabricados após 2015, com quilometragem entre 20.000 e 50.000 km;
- Percentual de carros 0 km e percentual de carros usados;
- O valor de carro mais caro na loja, assim como a quantidade de veículos com esse valor.*/
int main()
{
	float quilometragem, valor, maiscaro, perc0, percusados;
	int i,ano, tipo, cont2015,cont0km, contusado, cont=0, totaldecarros;;
	printf("Digite as informações dos 3 carros:\n");
	for(i=1;i<=3;i++)
	{
		printf("Digite a quilometragem do carro: \n");
		scanf("%f",&quilometragem);

		printf("Digite o valor do carro: \n");
		scanf("%f",&valor);

		printf("Digite o ano do carro :\n");
		scanf("%d", &ano);

		printf("Digite 0 para carro 0km ou 1 para carro usado: ");
		scanf("%d", &tipo);

		//testar se o carro foi fabricado apos 2015 e tem quilometragem entre 20.00 e 50.00 km
		if ((quilometragem>=20000 && quilometragem<=50000) && ano>2015)
			{
				cont2015++;
			}

		//testar se carro e 0km ou usado
		if (tipo==0)
			{
				cont0km++;
			}else{
				contusado++;
			}
			
		//testar o carro mais caro e quantos são
		if(valor>=maiscaro)
		{
			if(valor>maiscaro)
			{
				maiscaro=valor;
				cont=1;
			}else{
				cont++;
			}
		}
		
	}
	//carros no total
	totaldecarros=cont0km+contusado;
	
	//percentual de usados e 0km
	perc0=(cont0km/(float)totaldecarros)*100;
	percusados=(contusado/(float)totaldecarros)*100;
	
	printf("O numero de carros fabricados apos 2015 e : %d\n", cont2015);
	printf("O percentual de carros usados e : %f\n",percusados);
	printf("O percentual de carros 0 km e : %f\n",perc0);
	printf("O valor mais caro e %f e existem %d carros com esse valor\n", maiscaro, cont);

}
