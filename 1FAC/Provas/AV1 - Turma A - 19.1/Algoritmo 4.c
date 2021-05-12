#include<stdio.h>

int main()
{
	float candidatos, perfem, candvaga, maiorcandvaga=0;
	int codigo,vagas,candfem,candmasc, maiorcodigo, maiorcandmasc=0, maiorcodigomasc;
	//obter informações
	codigo=1;
	while(codigo!=0)
	{
		printf("Digite o codigo do curso :\n");
		scanf("%d",&codigo);
		if(codigo==0){
			printf("Obrigado pela presença!\n");
		}else{
			printf("Digite o numero de vagas :\n");
			scanf("%d",&vagas);
			printf("Digite o numero de candidatos do sexo masculino :\n");
			scanf("%d",&candmasc);
			printf("Digite o numero de candidatas do sexo feminino :\n");
			scanf("%d",&candfem);
			
				//codigo do curso
			printf("Codigo do curso : %d\n", codigo);
			//calculo candidatos por vaga
			candidatos=candfem+candmasc;
			candvaga=candidatos/vagas*100;
			printf("Candidatos por vaga : %.2f%%\n",candvaga );
			//percentual de candidatAs
			perfem=(candfem*100)/candidatos;
			printf("Percentual de candidatas %.2f%%\n",perfem);
			
			if(candvaga>maiorcandvaga)
			{
				maiorcandvaga=candvaga;
				maiorcodigo=codigo;
			}
			if(candmasc>maiorcandmasc)
			{
				maiorcandmasc=candmasc;
				maiorcodigomasc=codigo;
			}
		}
	}
	printf("O curso com maior numero de candidatos por vaga e : %f \n", maiorcandvaga);
	printf("O codigo do curso com maior numero de candidatos por vaga e : %d \n", maiorcodigo);
	printf("O codigo do curso com maior numero de candidatos masculinos e : %d \n",maiorcodigomasc );
	
	
	
}
