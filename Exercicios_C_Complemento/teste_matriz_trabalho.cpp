#include <stdio.h>
#include<locale.h>
#include<math.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	float matriz [3][4];
	int i, j;
	printf("\n C�lculo de dias efetivamente trabalhado\n");
	for (i=0; i<3; i++){
		for(j=0; j<4; j++){ 
			switch (j)
			{
			case 0:
				printf("Entre com o c�digo do funcion�rio:");
				break;
			case 1:
				printf("Entre com o sal�rio do funcion�rio:");
				break; 		
			case 2:
				printf("Entre com a hora do trabalho:");
				break;
			case 3:
				printf("Valor de cada hora extra:");
				break;
			}
			scanf("%f",&matriz[i][j]);
		}
	}
	
		printf("\n Sa�da de Dados \n");
		for (i=0; i<3; i++){
		printf("Funcion�rio %.2f com seu sal�rio %.2f ganhou um reajuste de sal�rio bruto de %.2f \n",matriz[i][0], matriz[i][1], matriz[i][1]+ matriz[i][2]+matriz[i][3]);	
		}
}
	
