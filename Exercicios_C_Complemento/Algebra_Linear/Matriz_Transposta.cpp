#include <stdio.h>
#include<locale.h>
#include<math.h>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	int A_matriz [3][3]; /* A */
	int i, j;
	int lin_a, col_a;
	int lin_t, col_t;/* linhas e coluna transportada */
	printf("Digita a quantidade de linha na matriz A:");	
	scanf("%d",&lin_a);
	printf("Digita a quantidade de coluna na matriz A:");	
	scanf("%d",&col_a);
	for (i=0; i<lin_a; i++){
		for(j=0; j<col_a; j++){ 
			printf("Digita um número:");	
			scanf("%d",&A_matriz[i][j]);
		}
		printf ("\n");
	}
	printf ("\n Exibe a Matriz original:\n");
	for (i=0; i<lin_a; i++){
		for(j=0; j<col_a; j++){ 
				if(A_matriz[i][j]>0){
					printf(" +%d",A_matriz[i][j]);
				}
				else {
					printf(" %d",A_matriz[i][j]);
				}
		}
		printf ("\n");
	}
	lin_t= col_a;
	col_t= lin_a;
	printf ("\n Exibe a Matriz Transposta:\n");
	for (i=0; i<lin_t; i++){
		for(j=0; j<col_t; j++){ 
				if(A_matriz[j][i]>0){
					printf(" +%d",A_matriz[j][i]);
				}
				else {
					printf(" %d",A_matriz[j][i]);
				}
		}
		printf ("\n");
	}
	
	
}
