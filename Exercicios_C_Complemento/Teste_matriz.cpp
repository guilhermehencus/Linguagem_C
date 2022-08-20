#include <stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int matriz [5][3], i, j;
	printf("\n Cálculo de dias efetivamente trabalhado\n");
	for (i=0; i<5; i++){
		for(j=0; j<3; j++){ 
			switch (j)
			{
			case 0:
				printf("Entre com o código do funcionário:");
				break;
			case 1:
				printf("Entre com a quantidade de dias normais:");
				break; 		
			case 2:
				printf("Entre com a quantidade de falts não justificada:");
				break;
			}
			scanf("%d",&matriz[i][j]);
		}
	}
		printf("\n Saída de Dados \n");
		for (i=0; i<5; i++){
		printf("Funcionário %d dos %d dias trabalhou %d dias. \n:",matriz[i][0], matriz[i][1], matriz[i][1]
		- matriz[i][2] );	
		}
	}
	

