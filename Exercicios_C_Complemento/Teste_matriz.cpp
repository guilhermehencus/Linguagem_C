#include <stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int matriz [5][3], i, j;
	printf("\n C�lculo de dias efetivamente trabalhado\n");
	for (i=0; i<5; i++){
		for(j=0; j<3; j++){ 
			switch (j)
			{
			case 0:
				printf("Entre com o c�digo do funcion�rio:");
				break;
			case 1:
				printf("Entre com a quantidade de dias normais:");
				break; 		
			case 2:
				printf("Entre com a quantidade de falts n�o justificada:");
				break;
			}
			scanf("%d",&matriz[i][j]);
		}
	}
		printf("\n Sa�da de Dados \n");
		for (i=0; i<5; i++){
		printf("Funcion�rio %d dos %d dias trabalhou %d dias. \n:",matriz[i][0], matriz[i][1], matriz[i][1]
		- matriz[i][2] );	
		}
	}
	

